#include <iostream>
using namespace std;
int main()
{
    int numberOfLayers, litresOfWater = 2;
    cin >> numberOfLayers;

    // solving the problem using arithmetic progression formula: S = ((2*a1 + (n-1)*d)*n/2)
    litresOfWater = ((2*2 + (numberOfLayers - 1)*2)/2)*numberOfLayers + 1;
    cout << litresOfWater;
}