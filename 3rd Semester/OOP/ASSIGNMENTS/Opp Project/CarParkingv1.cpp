#include <iostream>
#include <fstream>
#include <string>
using namespace std;

static int count = 0; /*The values will change rapidly so we take them as static */
static int amount = 0;
static int car = 0;
static int bus = 0;
static int motorbike = 0;
static int rickshaw = 0;
class Parking
{
public:
    void reset() //Reset the all values
    {
        car = 0;
        bus = 0;
        motorbike = 0;
        rickshaw = 0;
        count = 0;
        amount = 0;
    }
    // Pure Virtual Function
    virtual void Menu_Card() = 0;
    virtual void Rate() = 0;
};
// Menu Class
class Menu : public Parking
{
public:
    void Rate()
    {
        cout << "Rate per car is        : 100 /-Rs" << endl;
        cout << "Rate per Motorcycle is : 30  /-Rs" << endl;
        cout << "Rate per Buses is      : 200 /-Rs" << endl;
        cout << "Rate per Ricksh is     : 50  /-Rs" << endl;
        cout << endl;
    }
    //show the menu which thing is enter in the parking
    void Menu_Card()
    {
        cout << "Press 1 for cars: " << endl;
        cout << "Press 2 for Motorcycle: " << endl;
        cout << "Press 3 for Buses: " << endl;
        cout << "Press 4 for Rickshaw: " << endl;
        cout << "Press 5 for show the record: " << endl;
        cout << "Press 6 for Delet the record: " << endl;
        cout << "press 7 to exist the code:" << endl;
    }
};

class Display // Display the record on console
{
public:
    void show_recorde()
    {
        //File Handling
        ofstream offile;
        offile.open("Parking_data.txt");
        //print on console
        cout << "*********************************************" << endl;
        cout << endl;
        cout << "The total amount = " << amount << endl;
        cout << "The total number of vehicles parked = " << count << endl;
        cout << "The total number of Cars parked = " << car << endl;
        cout << "The total number of buses parked = " << bus << endl;
        cout << "The total number of motorcycle = " << motorbike << endl;
        cout << "The total number of Rickshaw = " << rickshaw << endl;
        cout << endl;
        //Print on file
        cout << "*********************************************" << endl;
        cout << endl;
        offile << "*********************************************" << endl;
        offile << endl;
        offile << "The total amount = " << amount << endl;
        offile << "The total number of vehicles parked = " << count << endl;
        offile << "The total number of Cars parked = " << car << endl;
        offile << "The total number of buses parked = " << bus << endl;
        offile << "The total number of motorcycle = " << motorbike << endl;
        offile << "The total number of Rickshaw = " << rickshaw << endl;
        offile << endl;
        offile << "*********************************************" << endl;
        offile << endl;
    }
};

class MotorBike //MotorBike Class
{
public:
    void P_MotorBike()
    {
        if (count <= 100)
        {
            motorbike++;
            amount += 30;
            count += 1;
            cout << "+1 Bike  is added" << endl;
        }
        else
        {
            cout << "Parking is full sorry no more parking :" << endl;
        }
    }
};

class Car //Car Class
{
public:
    void P_Car()
    {
        if (count <= 100)
        {
            car++;
            amount += 100;
            count += 1;
            cout << "+1 Car  is added" << endl;
        }
        else
        {
            cout << "Parking is full sorry no more parking :" << endl;
        }
    }
};

class Buses //Bus Class
{
public:
    void P_Buses()
    {
        if (count <= 100)
        {
            bus++;
            amount += 200;
            count += 1;
            cout << "+1 Bus  is added" << endl;
        }
        else
        {
            cout << "Parking is full sorry no more parking :" << endl;
        }
    }
};

class Rickshaw //Rickshaw Class
{
public:
    void P_Rickshaw()
    {
        if (count <= 100)
        {
            rickshaw++;
            amount += 50;
            count += 1;
            cout << "+1 Rickshaw  is added" << endl;
        }
        else
        {
            cout << "Parking is full sorry no more parking :" << endl;
        }
    }
};

int main()
{
    int input;  //Take the input from the user
    Parking *p; //polymorphism
    Menu m;
    p = &m;
    Car c1;
    MotorBike b1;
    Buses b2;
    Rickshaw r1;
    Display d1; //Display instance
    p->Rate();

    while (input != 7)
    {
        cout << "------Select Option------" << endl;
        p->Menu_Card();
        cin >> input;
        // Car Input
        if (input == 1)
        {

            c1.P_Car();
        }
        // Motorbike input
        else if (input == 2)
        {

            b1.P_MotorBike();
        }
        // Bus input
        else if (input == 3)
        {

            b2.P_Buses();
        }
        // Rickshaw input
        else if (input == 4)
        {

            r1.P_Rickshaw();
        }
        // Record input
        else if (input == 5)
        {

            d1.show_recorde();
        }
        // Reset input
        else if (input == 6)
        {

            p->reset();
        }

        else
        {
            cout << "Invalide Action" << endl;
        }
    }
    cout << "Delete your all data" << endl;

    return 0;
}
