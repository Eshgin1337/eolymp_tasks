#include<iostream>
using namespace std;

int main() {
    long long f1 = 1;
    long long f2 = 2;

    int count;
    cin >> count;

    long long currCount = 0;
    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            currCount = f1;
        } else if(i == 1) {
            currCount = f2;
        } else {
            currCount = f1 + f2;
            f1 = f2;
            f2 = currCount;
        } 
    }
    cout << currCount;
}