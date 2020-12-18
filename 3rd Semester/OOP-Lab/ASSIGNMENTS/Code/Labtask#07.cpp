#include <iostream>
using namespace std;

class Pen
{
protected:
    string BrandName;
};

class Color : public Pen
{
public:
    string color;
    void setVal(string a, string b)
    {
        BrandName = a;
        color = b;
    }
    void print()
    {
        cout << "This is a " << BrandName << " pen"
             << " and its color is " << color << endl;
    }
};

class Fruit
{
protected:
    void Taste()
    {
    }
};
class Apple : public Fruit
{
private:
    string fruit_name;
    string fruit_color;

public:
    void print_name_color(string a, string b)
    {
        fruit_name = a;
        fruit_color = b;
    }
    void Fruit_color_and_taste()
    {
        cout << fruit_name << " is red and it is sweet" << endl;
    }
};
class Pomegranate : public Fruit
{
private:
    string fruit_name;
    string fruit_color;

public:
    void print_name_color(string a, string b)
    {
        fruit_name = a;
        fruit_color = b;
    }
    void Fruit_color_and_taste()
    {
        cout << fruit_name << " is red and it is sweet" << endl;
    }
};
class Grapes : public Fruit
{
private:
    string fruit_name;
    string fruit_color;

public:
    void print_name_color(string a, string b)
    {
        fruit_name = a;
        fruit_color = b;
    }
    void Fruit_color_and_taste()
    {
        cout << fruit_name << " is green and it is sore" << endl;
    }
};

int main()
{
    cout << "------Task#1------" << endl;
    Color c;
    c.setVal("Dollar", "Blue");
    c.print();
    cout << "------Task#2------" << endl;
    Apple a;
    a.print_name_color("Apple", "Red");
    a.Fruit_color_and_taste();
    Pomegranate p;
    p.print_name_color("Pomegranate", "Red");
    p.Fruit_color_and_taste();
    Grapes g;
    g.print_name_color("Grapes", "green");
    g.Fruit_color_and_taste();

    return 0;
}