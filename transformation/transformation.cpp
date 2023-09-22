#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long changes = 0;
    while (n > 1) {
        if (n % 2 == 0)
        {
            n = n / 2;
        } else {
            n = n + 1;
        }
        changes++;
    }
    cout << changes;
}