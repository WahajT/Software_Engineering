#include <iostream>
#include <string>
using namespace std;

struct Book
{
    string title;
    string author;
    string publisher;
    float cost;
    void getVal(string a, string b, string c, float d)
    {
        title = a;
        author = b;
        publisher = c;
        cost = d;
    }
    void Display()
    {
        cout << "Title_of_book:" << title << endl;
        cout << "Author_of_book:" << author << endl;
        cout << "Publisher:" << publisher << endl;
        cout << "Retail_Cost_of_book:Rs" << cost << endl;
    }
};

int main()
{
    string a, b, c;
    float d;
    Book bo;
    cout << "Fill the data" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    bo.getVal(a, b, c, d);
    bo.Display();
    return 0;
}