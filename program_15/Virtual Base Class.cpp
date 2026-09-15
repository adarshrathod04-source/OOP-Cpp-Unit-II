#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Person                           // Common base class
{
public:                                // Public section

    string name;                       // Declares name variable

    void show()                        // Defines show function
    {
        cout << "Name = "              // Prints Name
             << name                   // Prints name
             << endl;                  // New line
    }
};

class Teacher : virtual public Person  // Virtually inherits Person
{
};

class Student : virtual public Person  // Virtually inherits Person
{
};

class School : public Teacher, public Student
                                        // School inherits Teacher and Student
{
};

int main()                             // Main function
{
    School s;                          // Creates School object

    s.name = "Adarsh";                 // Sets shared Person name

    s.show();                           // Calls Person's show function

    return 0;                          // Ends program
}
