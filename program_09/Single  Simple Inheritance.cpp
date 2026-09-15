#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Person                           // Defines Person base class
{
protected:                             // Protected section

    string name;                       // Declares name

public:                                // Public section

    void setName(string n)             // Function to set name
    {
        name = n;                      // Assigns n to name
    }
};

class Student : public Person          // Student inherits Person
{
private:                               // Private section

    int rollNo;                        // Declares roll number

public:                                // Public section

    void setRollNo(int r)              // Function to set roll number
    {
        rollNo = r;                    // Assigns r to rollNo
    }

    void display()                     // Defines display function
    {
        cout << "Name = "              // Prints Name
             << name                   // Prints inherited name
             << endl;                  // New line

        cout << "Roll No = "           // Prints Roll No
             << rollNo                 // Prints roll number
             << endl;                  // New line
    }
};

int main()                             // Main function
{
    Student s;                         // Creates Student object

    s.setName("Adarsh");               // Calls inherited function
    s.setRollNo(101);                  // Calls Student function

    s.display();                       // Displays information

    return 0;                          // Ends program
}
