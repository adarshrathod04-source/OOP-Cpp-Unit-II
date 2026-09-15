#include <iostream>                     // Includes input-output library
using namespace std;                    // Uses standard namespace

class Shape                             // Defines abstract class Shape
{
public:                                 // Public section

    virtual void area() = 0;            // Pure virtual function
                                         // virtual allows overriding
                                         // void means no return value
                                         // area() is function name
                                         // = 0 makes it pure virtual
};

class Rectangle : public Shape           // Rectangle inherits Shape
{
private:                                // Private section

    int length;                         // Stores rectangle length
    int breadth;                        // Stores rectangle breadth

public:                                 // Public section

    Rectangle(int l, int b)             // Rectangle constructor
    {
        length = l;                     // Assigns l to length
        breadth = b;                    // Assigns b to breadth
    }

    void area() override                // Overrides pure virtual area()
    {
        cout << "Rectangle Area = "    // Prints message
             << length * breadth        // Calculates length × breadth
             << endl;                   // New line
    }
};

class Circle : public Shape              // Circle inherits Shape
{
private:                                // Private section

    float radius;                       // Stores radius

public:                                 // Public section

    Circle(float r)                     // Circle constructor
    {
        radius = r;                     // Assigns r to radius
    }

    void area() override                // Overrides Shape's area()
    {
        cout << "Circle Area = "       // Prints message
             << 3.14 * radius * radius // Calculates πr²
             << endl;                   // New line
    }
};

int main()                              // Main function
{
    Rectangle r(5, 4);                  // Creates Rectangle object

    Circle c(3);                        // Creates Circle object

    r.area();                            // Calls Rectangle area
    c.area();                            // Calls Circle area

    return 0;                           // Ends program
}
