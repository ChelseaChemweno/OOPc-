#include "person.h"

person :: person (int id , string name , string email ) {
    this -> id = id ; 
    this -> name = name ;
    this -> email = email ; 
    // Store the parameter inside the pbject variables 
}

person:: ~person () {
    // cout << "Called a destructor " << endl ;
}

int person ::getId() const{
    return id ;
}

string  person :: getName() const {
    return name;
}

string person ::getEmail ()const {
    return email ; 
}
void person :: setName (string name) {
    this -> name = name ;
}
void person :: setEmail (string email ){
    this -> email = email ;
}

