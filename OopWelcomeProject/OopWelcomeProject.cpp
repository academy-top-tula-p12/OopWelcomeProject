// OopWelcomeProject.cpp 
#include <iostream>
#include "DArray.cpp"

using namespace std;

class Shape
{
    const double PI = 3.14;
    int x;
    int y;
public:
    static int type;
    //Shape() : _x{0}, _y{0} {}
    Shape() : Shape(0, 0) {}
    Shape(int x, int y)
        : x{ abs(x) }, y{ abs(y) } {}

    void SetX(int x)
    {
        this->x = abs(x);
    }
    int GetX()
    {
        return x;
    }
    void SetY(int y)
    {
        this->y = abs(y);
    }
    int GetY()
    {
        return y;
    }

    void Print()
    {
        cout << "X = " << x
            << ", Y = " << y << "\n";
    }
};

int Shape::type = 100;

int main()
{
    Shape shape(20, 30);

    /*shape.SetX(10);
    shape.SetY(20);*/


    DArray arr(10);

    shape.Print();
}
