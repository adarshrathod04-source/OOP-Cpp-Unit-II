#include <iostream>              // Includes the input-output library
using namespace std;             // Allows us to use cout without std::

class Rectangle                 // Defines a class named Rectangle
{
protected:                       // Members can be accessed inside derived classes
    int length;                  // Declares integer variable length
    int breadth;                 // Declares integer variable breadth

public:                          // Members can be accessed from outside
    void setData(int l, int b)   // Defines function setData with two integer parameters
    {
        length = l;              // Assigns l to length
        breadth = b;             // Assigns b to breadth
    }
};

class Cuboid : public Rectangle  // Cuboid inherits publicly from Rectangle
{
private:                         // Private members are accessible only inside Cuboid
    int height;                  // Declares integer variable height

public:                          // Public members can be accessed outside
    void setHeight(int h)        // Defines function setHeight
    {
        height = h;              // Assigns h to height
    }

    void display()               // Defines display function
    {
        cout << "Length = " << length << endl;       // Displays length
        cout << "Breadth = " << breadth << endl;     // Displays breadth
        cout << "Height = " << height << endl;       // Displays height

        cout << "Volume = "                         // Prints Volume text
             << length * breadth * height            // Calculates volume
             << endl;                               // Moves cursor to next line
    }
};

int main()                         // Main function; program execution starts here
{
    Cuboid c;                       // Creates object c of Cuboid

    c.setData(5, 4);                // Calls inherited setData function
    c.setHeight(3);                 // Calls Cuboid's setHeight function

    c.display();                    // Calls display function

    return 0;                       // Ends program successfully
}
