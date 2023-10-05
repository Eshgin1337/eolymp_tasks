#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double desc = double (pow(b,2) - (4*a*c));
    if (a != 0)
    {
        if (desc < 0)
        {
            cout << "No roots" << endl;
        } else if (desc == 0) {
            double root = (-b)/(2*a);
            cout << "One root: " << root << endl;
        } else {
            double root2 = (sqrt(desc) - b)/(2*a);
            double root1 = (-sqrt(desc) - b)/(2*a);
            cout << "Two roots: " << root1 << " " << root2 << endl;
        }
    }   
}