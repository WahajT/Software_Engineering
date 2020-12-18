#include <iostream>
using namespace std;

class Buyer
{
private:
    int unique_identifier;
    string Password;

public:
    void sign_up()
    {
    }
    void unique_indentifier()
    {
    }
    int add_credit_()
    {
    }
    void Rate_property()
    {
    }
    void buy_property()
    {
    }
};

class Seller
{
private:
    int unique_identifier;
    string Password;
    int earining;

public:
    void sign_up()
    {
    }
    void unique_indentifier()
    {
    }
    void seller_post()
    {
    }
    void total_earning()
    {
    }
    void track()
    {
    }
};

class Administrator
{
private:
    int unique_identifier;
    string Password;

public:
    void sign_up()
    {
    }
    unique_identifier()
    {
    }
};

class Images : public Seller
{
private:
    string Relative_path;
    int size;
    string text_Description;

public:
    void setter()
    {
    }
    void seller_post()
    {
    }
    void track()
    {
    }
};

class Property
{
private:
    float area;
    string status;
    int cost;
    Buyer b;
    Seller s;

public:
    void Information()
    {
    }
};

class Apartment : public Property
{
public:
    void informaion()
    {
    }
    void Num_Rooms()
    {
    }
    void shared_room()
    {
    }
    void furnished()
    {
    }
};

class House : public Property;
{

    public :
        void informaion(){} void Num_Rooms(){} void shared_Room(){} void furnished(){}

};

class Condo : public Property
{

public:
    void informaion()
    {
    }
    void Num_rooms()
    {
    }
    void shared_room()
    {
    }
    void furnished()
    {
    }
};

class Single_Room : public Property
{

    void informaion()
    {
    }
    void Num_room()
    {
    }
    void shared_room()
    {
    }
    void furnished()
    {
    }
};

class Data_Base
{
    string DataBase_username;
    int Password;
    server_location;

public:
    void Connect_MariaDB()
    {
    }
    void Connect_Postgres()
    {
    }
};

int main()
{
}