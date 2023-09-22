#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int current_sum, min_so_far = 99999999;
    for (int i = m; i < n; i++)
    {
        current_sum = sum_of_digits(i);
        min_so_far = min(current_sum, min_so_far);
    }

    int results = 0;
    for (int i = m; i <= n; i++)
    {
        int sum = sum_of_digits(i);
        if (sum == min_so_far)
        {
            results++;
        }
    }
    cout << results << '\n';
}