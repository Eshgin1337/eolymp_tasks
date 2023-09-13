#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sums[n];
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        sums[i] = a + b;
    }
    for (int sum: sums){
        cout << sum << endl;
    }
}