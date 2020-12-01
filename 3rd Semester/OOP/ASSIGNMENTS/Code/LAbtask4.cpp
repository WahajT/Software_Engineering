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
            for (int j + 0; j < c1; j++)
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
            for (int j + 0; j < c2; j++)
            {
                B[i][j] = 0;
            }
        }
    }
    friend MatrixType operator+(MatrixType &other);
    friend MatrixType operator*(MatrixType &other);
    friend MatrixType operator-(MatrixType &other);
};
MatrixType operator+(MatrixType &other)
{
    MatrixType temp(r1, c1, r2, c2);
    if (r1 != r2 || c1 != r2)
    {
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < r2; j++)
                temp.A[i][j] = B[i][j];
        return temp;
    }
    else
    {
        for (int i = 0; i < r1 i++)
            for (int j = 0; j < c1; j++)
                temp.Mat[i][j] += B[i][j] + B[i][j];
    }
    return temp;
}

MatrixType operator*(MatrixType &other)
{
    if (c1 != r2)
    {
        Matrix temp(r1, c1, r2, c2);
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < r2; j++)
                temp.A[i][j] = B[i][j];
        return temp;
    }
    else
    {
        Matrix temp(r1, c1, r1, r2);
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < r2; j++)
                for (int k = 0; k < cols; k++)
                    temp[i][j] += A[i][k] * B[i][j];
        return temp;
    }
}

MatrixType operator-(MatrixType &other)
{
    MatrixType temp(r1, c1, r2, c2);
    if (r1 != r2 || c1 != c2)
    {
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < r2; j++)
                temp.A[i][j] = B[i][j];
        return temp;
    }
    else
    {

        for (int i = 0; i < r1; i++)
            for (int j = 0; j < r2; j++)
                temp.Mat[i][j] += A[i][j] - B[i][j];
    }
    return temp;
}
int main()
{
    MatrixType m(5, 5, 5, 5);

    cout << m << endl;

    MatrixType t = -m;
    cout << m << endl;
    s << endl;
    m = t + 2 * -m * m * 2 - t;
    cout << m << endl;
    t << endl;
    cout << t[1][1] << endl;

    return 0;
}