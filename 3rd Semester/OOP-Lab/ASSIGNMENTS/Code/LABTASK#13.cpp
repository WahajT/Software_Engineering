// #include <iostream>
// using namespace std;

// class Cargo_Ship
// {
//     int weight;

// public:
//     Cargo_Ship(int a)
//     {
//         weight = a;
//     }
//     Cargo_Ship operator+(Cargo_Ship var2)
//     {
//         int temp;
//         temp = weight + var2.weight;
//         return Cargo_Ship(temp);
//     }
//     void print()
//     {
//         cout << "Total Weight:" << weight << "Kg" << endl;
//     }
// };

// int main()
// {
//     Cargo_Ship container1(40);
//     Cargo_Ship container2(10);
//     Cargo_Ship container3(20);
//     Cargo_Ship total(0);
//     total = container1 + container2 + container3;
//     total.print();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Counter
// {
//     int count;

// public:
//     Counter(int a)
//     {
//         count = a;
//     }

//     void operator++()
//     {
//         count++;
//     }

//     void operator--()
//     {
//         count--;
//     }
//     void print()
//     {
//         cout << count << endl;
//     }
// };

// int main()
// {
//     Counter a(100);
//     a.operator++();
//     cout << "Operator Incremnetal:";
//     a.print();
//     cout << "Operator Decremental:";
//     a.operator--();
//     a.print();

//     return 0;
// }