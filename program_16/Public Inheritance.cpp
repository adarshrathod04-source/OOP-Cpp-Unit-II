#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Parent                            // Defines Parent class
{
public:                                // Public section

    int publicData;                    // Public data member

protected:                             // Protected section

    int protectedData;                 // Protected data member

private:                               // Private section

    int privateData;                   // Private data member
};

class Child : public Parent            // Child publicly inherits Parent
{
public:                                // Public section

    void setData()                     // Defines setData function
    {
        publicData = 10;               // Public member is accessible
        protectedData = 20;            // Protected member is accessible

        // privateData = 30;           // Private member cannot be accessed
    }

    void display()                     // Defines display function
    {
        cout << "Public = "            // Prints Public
             << publicData             // Prints publicData
             << endl;                  // New line

        cout << "Protected = "         // Prints Protected
             << protectedData          // Prints protectedData
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
