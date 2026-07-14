#include <iostream>
#include <string>
using namespace std;

class Employess {
protected:
    string name;

public:
    Employess(string n) {
        name = n;
    }

    virtual double calculatesalary() {
        return 0;
    }

    virtual void display() {
        cout << "Employee Name: " << name << endl;
    }

    virtual ~Employess() {
        // cout << "This is a destructor" << endl;
    }
};

class Manager : public Employess {
private:
    double basicSalary;
    double bonus;

public:
    Manager(string n, double bs, double b) : Employess(n) {
        basicSalary = bs;
        bonus = b;
    }

    double calculatesalary() override {
        return basicSalary + bonus;
    }

    void display() override {
        cout << "Manager: " << name << endl;
        cout << "Salary: " << calculatesalary() << endl;
    }
};

class Engineer : public Employess {
private:
    double hours;
    double rate;

public:
    Engineer(string n, double h, double r) : Employess(n) {
        hours = h;
        rate = r;
    }

    double calculatesalary() override {
        return hours * rate;
    }

    void display() override {
        cout << "Engineer: " << name << endl;
        cout << "Salary: " << calculatesalary() << endl;
    }
};

int main() {
    string name;
    double salary;
    double bonus;
    double rate;
    double hours;

    cout << "Enter Manager Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> salary;

    cout << "Enter Bonus: ";
    cin >> bonus;

    Employess* emp1 = new Manager(name, salary, bonus);

    cin.ignore();

    cout << "\nEnter Engineer Name: ";
    getline(cin, name);

    cout << "Enter Hourly Rate: ";
    cin >> rate;

    cout << "Enter Hours Worked: ";
    cin >> hours;

    Employess* emp2 = new Engineer(name, hours, rate);

    cout << "\n--- Payroll Information ---\n";
    emp1->display();
    emp2->display();

    delete emp1;
    delete emp2;

    return 0;
}