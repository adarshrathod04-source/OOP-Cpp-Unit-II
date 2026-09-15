#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Person                           // Common base class
{
public:                                // Public section

    void show()                        // Defines show function
    {
        cout << "Person Class"         // Prints message
             << endl;                  // New line
    }
};

class Teacher : public Person          // Teacher inherits Person
{
};

class Student : public Person          // Student inherits Person
{
};

class School : public Teacher, public Student
                                        // School inherits Teacher and Student
{
};

int main()                             // Main function
{
    School s;                          // Creates School object

    s.Teacher::show();                 // Calls Person through Teacher path
    s.Student::show();                 // Calls Person through Student path

    return 0;                          // Ends program
}
