#include<iostream>
#include<string>
using namespace std;

class  Employee
{private:
int employeeNumber;
string employeeName;
int employeePhoneNumber;
int employeeAge;
float employeeCompensation;
public:
Employee()
{

}


Emoplyee(int a,string b,int c,int d,float e)
{
     employeeNumber=a;
 employeeName=b;
employeePhoneNumber=c;
employeeAge=d;
employeeCompensation=e;
}

Emoplyee(const point *p1)
{
     employeeNumber=p1.a;
 employeeName=p1.b;
employeePhoneNumber=p1.c;
employeeAge=p1.d;
employeeCompensation=p1.e;
}

~Emoplyee()
{

}



void Setval(int a ,string b,int c,int d,float e)
{
     employeeNumber=a;
 employeeName=b;
employeePhoneNumber=c;
employeeAge=d;
employeeCompensation=e;
}


void getVal()
{
     cout<<employeeNumber;
 cout<<employeeName;
cout<<employeePhoneNumber;
cout<<employeeAge;
cout<<employeeCompensation;
}
 
};

int main()
{
    Employee e1();
    
    return 0;
}