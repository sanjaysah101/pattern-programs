#include <bits/stdc++.h>
using namespace std;

class Pattern
{
public:
    void solidRectangle(int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void hollowRectangle(int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << "* ";
                }
            }
            else
            {
                for (int j = 0; j < m; j++)
                {
                    if (j == 0 || j == m - 1)
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
            }
            cout << endl;
        }
    }
    void halfPyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void invertedHalfPyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void hollowInvertedHalfPyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << "* ";
                }
            }
            else
            {
                for (int j = 0; j < n - i; j++)
                {
                    if (j == 0 || j == n - i - 1)
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
            }
            cout << endl;
        }
    }
    void fullPyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j <= i; j++)
            {
                cout << "*   ";
            }

            cout << endl;
        }
    }
    void invertedFullPyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j < n - i; j++)
            {
                cout << "*   ";
            }

            cout << endl;
        }
    }
    void hollowFullPyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "  ";
            }
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i || i == n - 1)
                    cout << "*   ";
                else
                {
                    cout << "    ";
                }
            }
            cout << endl;
        }
    }
    void diamondInscribedInRectangle(int n)
    {
        // 1st half
        for (int i = 0; i < n; i++)
        {
            // First Inverted Half Pyramid
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "    ";
            }
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        // 2nd half
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }

            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "    ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }

            cout << endl;
        }
    }
    void butterfly(int n)
    {
        // 1st half
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "    ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        // end half
        for (int i = 0; i < n; i++)
        {
            // First Inverted Half Pyramid
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "    ";
            }
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void diagonalSideRhombus(int n)
    {
        // input should be an odd number only, else the desired output will not be obtained
        if (n % 2 == 0)
            return;
        int half = n / 2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                bool centerHorizontal = (i == half);
                bool centerVertical = (j == half);
                bool bottomLeftDiagonal = (i - j == half);
                bool upperRightDiagonal = (j - i == half);
                bool upperLeftDiagonal = (i + j == half);
                bool bottomRightDiagonal = (i + j == half * 3);
                if (centerHorizontal || centerVertical || upperLeftDiagonal || bottomLeftDiagonal || upperRightDiagonal || bottomRightDiagonal)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Pattern pattern;
    int n = 3;
    int m = 5;
    // pattern.solidRectangle(n, m);
    // pattern.hollowRectangle(n, m);
    // pattern.halfPyramid(m);
    // pattern.invertedHalfPyramid(m);
    // pattern.hollowInvertedHalfPyramid(m);
    // pattern.fullPyramid(m);
    // pattern.invertedFullPyramid(m);
    // pattern.hollowFullPyramid(m);
    // pattern.diamondInscribedInRectangle(m);
    // pattern.butterfly(m);
    pattern.diagonalSideRhombus(9);
}