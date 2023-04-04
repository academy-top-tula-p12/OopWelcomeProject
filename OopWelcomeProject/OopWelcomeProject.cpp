// OopWelcomeProject.cpp 
#include <iostream>
#include "DArray.cpp"

using namespace std;

class Shape
{
    int _x;
    int _y;
public:
    //Shape() : _x{0}, _y{0} {}
    Shape() : Shape(0, 0) {}
    Shape(int x, int y) : _x{ abs(x) }, _y{abs(y)} {}

    void SetX(int x)
    {
        _x = abs(x);
    }
    int GetX()
    {
        return _x;
    }
    void SetY(int y)
    {
        _y = abs(y);
    }
    int GetY()
    {
        return _y;
    }

    void Print()
    {
        cout << "X = " << _x
            << ", Y = " << _y << "\n";
    }
};

int main()
{
    Shape shape(20, 30);

    /*shape.SetX(10);
    shape.SetY(20);*/


    DArray arr(10);

    shape.Print();
}
