#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Person                           // First base class
{
public:                                // Public section

    void personInfo()                  // Defines personInfo function
    {
        cout << "I am a Person"        // Prints message
             << endl;                  // New line
    }
};

class Employee                         // Second base class
{
public:                                // Public section

    void employeeInfo()               // Defines employeeInfo function
    {
        cout << "I am an Employee"     // Prints message
             << endl;                  // New line
    }
};

class Teacher : public Person, public Employee
                                        // Teacher inherits both classes
{
public:                                // Public section

    void teacherInfo()                 // Defines teacherInfo
    {
        cout << "I am a Teacher"       // Prints message
             << endl;                  // New line
    }
};

int main()                             // Main function
{
    Teacher t;                         // Creates Teacher object

    t.personInfo();                    // Calls Person function
    t.employeeInfo();                  // Calls Employee function
    t.teacherInfo();                   // Calls Teacher function

    return 0;                          // Ends program
}
