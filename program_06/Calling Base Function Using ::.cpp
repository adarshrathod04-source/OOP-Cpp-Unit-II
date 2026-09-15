#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Base                             // Defines Base class
{
public:                                // Public section

    void Msg()                         // Defines Base Msg()
    {
        cout << "Base Class"           // Prints Base Class
             << endl;                  // New line
    }
};

class Derived : public Base            // Derived inherits Base
{
public:                                // Public section

    void Msg()                         // Overrides Base Msg()
    {
        cout << "Derived Class"        // Prints Derived Class
             << endl;                  // New line

        Base::Msg();                   // Calls Base class Msg()
    }
};

int main()                             // Main function
{
    Derived d;                          // Creates Derived object

    d.Msg();                            // Calls Derived Msg()

    return 0;                           // Ends program
}
