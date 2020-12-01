#include <iostream>
using namespace std;

class Shape
{
private:
    int height;
    int base;
    int radius;

public:
    Shape(int x, int y, int z)
    {
        radius = x;
        height = y;
        base = z;
    }

    friend class Area;
};

class Area
{
public:
    void area_of_trinagle_calculator(Shape s)
    {
        cout << "Area of tringale=" << (s.height * s.base) / 2 << endl;
    }
    void area_of_circle_calculator(Shape s)
    {

        cout << "Area of circle=" << 2 * (22 / 7) * s.radius << endl;
    }
};

int main()
{
    Shape t(0, 3, 2);
    Area a, b;
    a.area_of_trinagle_calculator(t);
    Shape c(2, 0, 0);
    b.area_of_circle_calculator(c);

    return 0;
}

#include <iostream>
using namespace std;

class Location
{
private:
    string place;

public:
    Location()
    {
        place = "Pakistan";
    }
    friend class Display;
};

class Display
{
public:
    void print(Location l)
    {

        cout << "Fetched Location=" << l.place << endl;
    }
};

int main()
{
    Location l;

    Display d;
    d.print(l);

    return 0;
}