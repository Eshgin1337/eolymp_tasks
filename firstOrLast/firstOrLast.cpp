#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int f_digit = n/100;
    // int s_digit = (n/10)%10;
    int l_digit = n%10;
    if (f_digit > l_digit)
    {
        cout << f_digit;
    } else if (l_digit > f_digit)
    {
        cout << l_digit;
    } else {
        cout << "=";
    }
    
    
}