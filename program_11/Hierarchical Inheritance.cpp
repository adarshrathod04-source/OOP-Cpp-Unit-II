#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Person                           // Defines common base class
{
protected:                             // Protected section
    string name;                       // Stores name

public:                                // Public section

    void setName(string n)             // Function to set name
    {
        name = n;                      // Assigns name
    }
};

class Student : public Person          // Student inherits Person
{
public:                                // Public section

    void displayStudent()              // Student display function
    {
        cout << "Student: "            // Prints Student
             << name                   // Prints inherited name
             << endl;                  // New line
    }
};

class Teacher : public Person          // Teacher inherits Person
{
public:                                // Public section

    void displayTeacher()              // Teacher display function
    {
        cout << "Teacher: "            // Prints Teacher
             << name                   // Prints inherited name
             << endl;                  // New line
    }
};

int main()                             // Main function
{
    Student s;                         // Creates Student object
    Teacher t;                         // Creates Teacher object

    s.setName("Adarsh");               // Sets Student name
    t.setName("Chandan");              // Sets Teacher name

    s.displayStudent();                // Displays Student
    t.displayTeacher();                // Displays Teacher

    return 0;                          // Ends program
}
