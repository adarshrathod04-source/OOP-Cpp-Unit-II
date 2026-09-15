#include <iostream>                    // Includes input-output library
using namespace std;                   // Uses standard namespace

class Engine                            // Defines Engine class
{
public:                                // Public section

    void start()                       // Defines start function
    {
        cout << "Engine Started"       // Prints message
             << endl;                  // New line
    }
};

class Car                              // Defines Car class
{
private:                               // Private section

    Engine engine;                     // Car HAS-A Engine object

public:                                // Public section

    void startCar()                    // Defines startCar function
    {
        engine.start();                // Calls Engine's start function

        cout << "Car Started"          // Prints Car Started
             << endl;                  // New line
    }
};

int main()                             // Main function
{
    Car c;                             // Creates Car object

    c.startCar();                      // Starts car

    return 0;                          // Ends program
}
