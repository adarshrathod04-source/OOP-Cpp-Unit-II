#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Vehicle                           // Defines Vehicle class
{
public:                                // Public section

    void move()                        // Defines move function
    {
        cout << "Vehicle can move"     // Prints message
             << endl;                  // New line
    }
};

class Car : public Vehicle             // Car inherits Vehicle
{
public:                                // Public section

    void drive()                       // Defines drive function
    {
        cout << "Car can drive"        // Prints message
             << endl;                  // New line
    }
};

int main()                             // Main function
{
    Car c;                             // Creates Car object

    c.move();                          // Calls inherited Vehicle function
    c.drive();                         // Calls Car function

    return 0;                          // Ends program
}
