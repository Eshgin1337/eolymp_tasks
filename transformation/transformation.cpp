#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int changes = 0;
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