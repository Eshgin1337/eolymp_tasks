#include <iostream>
#include <algorithm>

using namespace std;

int product_of_digits(int n)
{
    int current_product = 1;
    while (n > 0)
    {
        current_product *= n % 10;
        n /= 10;
    }
    return current_product;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int products[1000];
        int current_product = n, current_index = 0;
        while (current_product / 10 != 0)
        {
            products[current_index] = current_product;
            current_product = product_of_digits(current_product);
            current_index++;
        }

        cout << current_index << endl;
    }
}