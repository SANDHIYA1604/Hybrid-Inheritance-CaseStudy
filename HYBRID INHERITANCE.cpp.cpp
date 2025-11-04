#include <iostream>
using namespace std;


class Person {
public:
    string name;
    int age;

    void getPersonData() {
        cout << "Enter Name and Age: ";
        cin >> name >> age;
    }

    void showPersonData() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : virtual public Person {
public:
    int studentID;
    float marks;

    void getStudentData() {
        cout << "Enter Student ID and Marks: ";
        cin >> studentID >> marks;
    }

    void showStudentData() {
        cout << "Student ID: " << studentID << "\nMarks: " << marks << endl;
    }
};

class Employee : virtual public Person {
public:
    int empID;
    float salary;

    void getEmployeeData() {
        cout << "Enter Employee ID and Salary: ";
        cin >> empID >> salary;
    }

    void showEmployeeData() {
        cout << "Employee ID: " << empID << "\nSalary: " << salary << endl;
    }
};


class TeachingAssistant : public Student, public Employee {
public:
    string subject;

    void getTAData() {
        cout << "Enter Subject Assigned: ";
        cin >> subject;
    }

    void display() {
        cout << "\n--- Teaching Assistant Details ---\n";
        showPersonData();      
        showStudentData();     
        showEmployeeData();    
        cout << "Subject: " << subject << endl;
    }
};


int main() {
    TeachingAssistant ta;

    cout << "Enter details of Teaching Assistant:\n";
    ta.getPersonData();      
    ta.getStudentData();     
    ta.getEmployeeData();    
    ta.getTAData();          

    ta.display();            

    return 0;
}

