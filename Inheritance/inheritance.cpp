#include <iostream>

using namespace std; 

class vehicle {
    protected : 
    string brand;

    public:
    vehicle (string b){
        brand = b ; 
        cout <<"The vehicle contructor is called "<<endl; 
    }
    
    ~vehicle(){
        cout<< "This is a vehicle distructor "<< endl;
    }
};

class car : public vehicle{
    public: 
    car(string b) :vehicle(b){
      
        cout <<"The car constructor "<<endl; 
    }
    ~car(){
        cout << "The car ddestructor :"<<endl;
    }
    void display(){
        cout <<"The car Brand "<<brand << endl;
    }
};
class truck : public vehicle{
    public:
    truck(string b) : vehicle(b){
    
        cout << "The truck constructor"<<endl;
    }
    ~truck(){
        cout <<"The truck distructed "<<endl; 
    }
    void display(){
        cout <<"The truck brand " <<brand<< endl; 
    }
};
int main (){
    car c ("Merceded");
    c.display();

    truck t ("Isuzu");
    t.display();

    return 0;

}
