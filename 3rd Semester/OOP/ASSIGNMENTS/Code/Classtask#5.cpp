#include <iostream>
using namespace std;

class MatrixType
{
private:
    int r1;
    int c2;
    int c1;
    int r2;
    int **A;
    int **B;

public:
    MatrixType(int &a, int &b, int &c, int &d)
    {
        r1 = a;
        c1 = b;
        A = new int *[r1];
        for (int i = 0; i < r1; i++)
        {
            A[i] = new int[c1];
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                A[i][j] = 0;
            }
        }
        r2 = c;
        c2 = d;
        B = new int *[r2];
        for (int i = 0; i < r2; i++)
        {
            B[i] = new int[c2];
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                B[i][j] = 0;
            }
        }
    }
    MatrixType operator/(MatrixType);
};

MatrixType MatrixType::operator/(MatrixType m)
{
    MatrixType temp;
    if (r1 != r2 || c1 != r2)
    {
        return temp;
    }
    else
    {
        for (int i = 0; i < r1 i++)
        {
            for (int j = 0; j < c1; j++)
            {
                try
                {
                    if (temp.B[i][j] == 0)
                    {
                        throw B[i][j];
                    }
                    else if (temp.B[i][j] < = 0)
                    {
                        throw temp.B[i][j];
                    }
                }
                catch (MatrixType a)
                {
                    cout << "dividing the number with zero is not allow" << endl;
                }
                catch (MatrixType b)
                {
                    cout << "Enter the positive and Number" << endl;
                }

                temp = temp.A[i][j] / temp.B[i][j];
            }
            cout << endl;
        }
    }
    return temp;
}

int main()
{
    MatrixType m(2, 2, 2, 2);
    m.operator/(m);

    return 0;
}