#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Person                           // First/base class
{
protected:                             // Protected section
    string name;                       // Stores person's name

public:                                // Public section

    void setName(string n)             // Function to set name
    {
        name = n;                      // Assigns name
    }
};

class Employee : public Person         // Employee inherits Person
{
protected:                             // Protected section
    int employeeId;                    // Stores employee ID

public:                                // Public section

    void setId(int id)                 // Function to set employee ID
    {
        employeeId = id;               // Assigns ID
    }
};

class Manager : public Employee        // Manager inherits Employee
{
public:                                // Public section

    void display()                     // Defines display function
    {
        cout << "Name = "              // Prints Name
             << name                   // Accesses inherited name
             << endl;                  // New line

        cout << "Employee ID = "       // Prints Employee ID
             << employeeId             // Accesses inherited employee ID
             << endl;                  // New line
    }
};

int main()                             // Main function
{
    Manager m;                         // Creates Manager object

    m.setName("Adarsh");               // Calls Person function
    m.setId(101);                      // Calls Employee function

    m.display();                       // Calls Manager function

    return 0;                          // Ends program
}
