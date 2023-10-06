#include <iostream>
#include <map>

using namespace std;

long long ans = 0, n, p, q;

map<long long, long long> my_map;

long long f(long long x)
{
    if (x == 0)
        return 1;
    if (my_map[x])
        return my_map[x];
    return my_map[x] = f(x / p) + f(x / q);
}

int main()
{
    cin >> n >> p >> q;
    cout << f(n) << endl;
}