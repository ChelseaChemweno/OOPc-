#include<iostream>
#include <string>
using namespace std; 

class UniversityMember {
protected :
string university ; 

public:
UniversityMember(string u ){
university = u; 
// cout<<"Univeristy Member  Contructor"<<endl; 
}
~UniversityMember(){
    // cout <<" Unversity Memebr Destructor "<<endl;
}
void ShowUniversity(){
    // cout << "This is my University:"<< university <<endl;
}
};
class Person: virtual public UniversityMember{
    protected :
    string name ; 
    
    Person (string u, string n): UniversityMember(u){
        name = n;
        // cout <<"Person Constructor "<<endl; 
    }
    ~Person (){
        // cout << "Perosn Destructor"<<endl;
    }
    void ShowPerson(){
        cout <<"Name " <<name <<endl;
    }
};

class AcademicRecord : virtual public UniversityMember {
    protected :
    string grade ; 
AcademicRecord(string u , string g): UniversityMember(u){
    grade = g;
    // cout << "The constructor has been created "<< endl ; 
}
~AcademicRecord(){
    // cout<<"Academic Record has been destructed " <<endl; 
}
void ShowGrade(){
    cout <<"The grade is: "<<grade <<endl; 
}
};


class student : public Person , public AcademicRecord{
    private :
    string studentId ; 
    public: 
    student (string u , string n , string g , string id): UniversityMember(u),Person(u,n),AcademicRecord(u,g){
        studentId = id;
        // cout <<"This is a student contructor" <<endl; 
    }
    ~student(){
        // cout<< "This is a student distructo:"<<endl;
    }
    void showstudnet (){
        ShowUniversity();
        ShowPerson();
        ShowGrade();
        cout <<"The student ID is " << studentId <<endl;
      
    }
};
int main(){ 
    student s ("Kabarak  University" , "Chelsea" , "A" ,"IT001");
    student p ("Daystar Univerity", "John Njoroge" ,"B" , "IT002");
    cout << "Student Details "<< endl;
    s.showstudnet ();
    p.showstudnet();
return 0;
}