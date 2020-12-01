#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string int_to_string(int v)
{
    stringstream ss;
    ss << v;
    return ss.str();
}

class Address
{
public:
    int house_no;
    int street;
    string country;
    string city;

    string get_full_address()
    {
        return "H. No. " + int_to_string(house_no) + ", " + "Street " + int_to_string(street) + "," + city + " " + country;
    }
};

class Empolyee
{
public:
    string Empolyee_name;
    Address current_address;
    Address permanent_address;
    void set_current_address(int a, int b, string c, string d)
    {
        current_address.house_no = a;
        current_address.street = b;
        current_address.city = c;
        current_address.country = d;
    }
    void set_permanent_address(int a, int b, string c, string d)
    {
        permanent_address.house_no = a;
        permanent_address.street = b;
        permanent_address.city = c;
        permanent_address.country = d;
    }
    void print_addresses()
    {
        cout << current_address.get_full_address() << endl;
        cout << permanent_address.get_full_address() << endl;
    }
};

class Wheel
{
private:
    string state;

public:
    void set_wheel_state(string s)
    {
        state = s;
    }
    string get_wheel_state()
    {
        return state;
    }
};

class Car
{
private:
    Wheel arry_of_wheel[4];

public:
    void set_car_to_moving()
    {
        for (int i = 0; i < 4; i++)
        {
            arry_of_wheel[i].set_wheel_state("Truning");
        }
        cout << endl;
    }

    void set_car_to_stopped()
    {
        for (int i = 0; i < 4; i++)
        {
            arry_of_wheel[i].set_wheel_state("Stopped");
        }
        cout << endl;
    }

    void print_car_wheels()
    {
        for (int i = 0; i < 4; i++)
        {

            cout << "Wheel " << i << " is " << endl;
            arry_of_wheel[i].get_wheel_state();
        }
    }
};

int main()
{
    cout << "------Part 1&2------" << endl;
    Address adr;

    adr.house_no = 4;
    adr.street = 25;
    adr.city = "Peshawar";
    adr.country = "Pakistan";
    cout << adr.get_full_address() << endl;
    Empolyee e1;
    e1.set_current_address(4, 25, "Peshawar", "Pakistan");
    e1.set_permanent_address(14, 9, "Lahore", "Pakistan");
    e1.print_addresses();
    cout << "------End of par 1&2------" << endl;
    cout << "------Part 3&4------" << endl;
    Wheel w;
    w.set_wheel_state("Stopped");
    cout << w.get_wheel_state();
    Car c;
    c.set_car_to_stopped();
    c.print_car_wheels();
    c.set_car_to_moving();
    c.print_car_wheels();
    cout << "------End of Part 3&4------" << endl;

    return 0;
}