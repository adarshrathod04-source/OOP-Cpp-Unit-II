#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Parent                            // Defines Parent class
{
public:                                // Public section
    int x;                             // Public data member

protected:                             // Protected section
    int y;                             // Protected data member
};

class Child : protected Parent         // Uses protected inheritance
{
public:                                // Public section

    void setData()                     // Defines setData function
    {
        x = 10;                        // Accesses inherited public member
        y = 20;                        // Accesses inherited protected member
    }

    void display()                     // Defines display function
    {
        cout << "x = " << x            // Displays x
             << endl;                  // New line

        cout << "y = " << y            // Displays y
             << endl;                  // New line
    }
};

int main()                             // Main function
{
    Child c;                           // Creates Child object

    c.setData();                       // Calls setData
    c.display();                       // Calls display

    return 0;                          // Ends program
}
