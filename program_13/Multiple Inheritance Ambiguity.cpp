#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Person                           // Defines Person class
{
public:                                // Public section

    void show()                        // Defines show function
    {
        cout << "Person"               // Prints Person
             << endl;                  // New line
    }
};

class Employee                         // Defines Employee class
{
public:                                // Public section

    void show()                        // Same function name
    {
        cout << "Employee"             // Prints Employee
             << endl;                  // New line
    }
};

class Teacher : public Person, public Employee
                                        // Teacher inherits both classes
{
};

int main()                             // Main function
{
    Teacher obj;                       // Creates Teacher object

    obj.Person::show();                // Calls Person's show function
    obj.Employee::show();              // Calls Employee's show function

    return 0;                          // Ends program
}
