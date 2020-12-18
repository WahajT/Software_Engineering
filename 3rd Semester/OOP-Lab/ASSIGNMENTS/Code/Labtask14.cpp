// #include <iostream>
// #include <cmath>
// using namespace std;

// template <typename apuntype>

// void print(apuntype a)
// {
//     cout << sqrt(a) << endl;
// }

// int main()
// {
//     print<int>(2);
//     print<float>(2.88f);
//     print<double>(2.5);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <typename apunclass>
// class Stack
// {
// private:
//     int index = -1;
//     apunclass array[10];

// public:
//     push(apunclass a)
//     {
//         if (index >= (array - 1))
//         {
//             cout << "There is no space in stack" << endl;
//         }
//         else
//         {
//             array[++index] = a;
//             cout << a << endl;
//         }
//     }
//     int pop()
//     {
//         if (index < 0)
//         {
//             cout << "Empty Stack" << endl;
//         }
//         else
//         {
//             apunclass a = array[index--];
//             return a;
//         }
//     }
//     bool empty()
//     {
//         return (index < 0);
//     }
// };

// int main()
// {
//     Stack<int> obj;
//     obj.push(1);
//     obj.push(2);
//     obj.push(3);
//     obj.push(32);
//     while (!obj.isEmpty())
//     {
//         cout << obj.pop() << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

class Stack
{

private:
    int index;
    int arr[5];

public:
    Stack()
    {
        index = -1;
        // arr = {0, 0, 0, 0, 0};
    }

    void push(int data)
    {

        if (index == 4)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        index++;
        arr[index] = data;
    }

    int pop()
    {
        int poppedData = 0;

        if (index == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        poppedData = arr[index];
        arr[index] = 0;
        index--;

        return poppedData;
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{

    Stack myStack;

    myStack.display();
    myStack.push(1);
    myStack.display();
    myStack.push(5);
    myStack.display();
    myStack.push(200);
    myStack.display();
    myStack.push(14);
    myStack.display();
    myStack.push(17);
    myStack.display();
    myStack.push(56);
    myStack.display();
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;

    return 0;
}
