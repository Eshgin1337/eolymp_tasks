#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int smoothDivisors = 0;
    for ( int i = 2; i < n; i++)
    {
        if (n % i == n/i) {
            smoothDivisors++;
        }
    }
    cout << smoothDivisors << endl;
}