#include <iostream>
using namespace std;
int main()
{
    int a0, a1, an, n;
    cin >> n;
    a0 = 0;
    a1 = 1;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    if (n == 2)
    {
        cout << 1 << endl;
    }

    for (int i = 1; i < n; i++)
    {
        if (n == 1)
        {
            break;
        }
        if (n == 2)
        {
            break;
        }

        an = a0 + a1;
        a0 = a1;
        a1 = an;
        if (i == (n - 1))
        {
            cout << an << endl;
            break;
        }
    }
}