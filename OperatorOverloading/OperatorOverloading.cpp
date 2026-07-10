#include <iostream>
using  namespace std; 

class ComplexNumbers {
private:
double realNumbers; 
double imaginaryNumbers; 

public:
 
ComplexNumbers (double real=0 , double imaginary=0 ){
realNumbers= real; 
imaginaryNumbers = imaginary;
}
ComplexNumbers operator+ (const ComplexNumbers& n){
    return ComplexNumbers(realNumbers + n.realNumbers ,imaginaryNumbers + n.imaginaryNumbers);
}
ComplexNumbers operator- (const ComplexNumbers& n){
    return ComplexNumbers(realNumbers - n.realNumbers , imaginaryNumbers - n.imaginaryNumbers);
}
friend istream& operator>>(istream& in, ComplexNumbers& n) {
        in >> n.realNumbers >> n.imaginaryNumbers;
        return in;
    }

friend ostream& operator<<(ostream& out, const ComplexNumbers& n) {
        out << n.realNumbers;

        if (n.imaginaryNumbers >= 0)
            out << "+" << n.imaginaryNumbers << "i";
        else
            out << n.imaginaryNumbers << "i";

        return out;
    }
};

int main(){
    ComplexNumbers n1, n2;
  ComplexNumbers sum , difference ;
    cout << "Enter a number real or complex:";
    cin >> n1;

    cout << "Enter a number real or complex:";
    cin >> n2 ;
    

    sum = n1 + n2; 
    difference = n1 - n2  ;

    cout <<"Sum "<<sum <<endl;
    cout <<"Difference"<<difference<< endl;
    return 0;
   
}