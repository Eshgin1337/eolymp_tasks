#include<iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y && y == z)
    {
        cout << 1;
    } else if (x == y || y == z || x == z){
        cout << 2;
    } else {
        cout << 3;
    }
    
}