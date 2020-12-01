#include<iostream>
using namespace std;


class Base
{public:
   virtual void Animal_eat()
   {
cout<<"Base eat Base"<<endl;
   }

   void Animal_Color()
   {
cout<<"Base color is Black"<<endl;
   }
};

class Derived:public Base
{
     void Animal_eat()
   {
cout<<"Derived eat Derived"<<endl;
   }

   void Animal_Color()
   {
cout<<"Derived color is White"<<endl;
   }


};

int main()
{
Base *ptr;
Derived dobj;
ptr=&dobj;
ptr->Animal_eat();
ptr->Animal_Color();







    return 0;
}
























































// class Animal
// {
//     public:
//   virtual void AnimalName()
//     {
//         cout<<"My name is Animal"<<endl;
//     }


// };
// class Cat:public Animal
// {
//     public:
//   void AnimalName()
//     {
//         cout<<"My name is Cat"<<endl;
//     }


// };
// class Dog:public Animal
// {
//     public:
//     void AnimalName()
//     {
//         cout<<"My name is Dog"<<endl;
//     }


// };

// void Function(Animal *p)
// {
//     p->AnimalName();
// }

// int main()
// {
//     Animal *ptr;
    
// Cat c;
// Dog d;

// ptr=&c;
// Function(ptr);
// ptr=&d;
// Function(ptr);



//     return 0;
// }
