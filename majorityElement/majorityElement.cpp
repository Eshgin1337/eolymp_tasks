#include <iostream>
using namespace std;
int main()
{
    int arrSize;
    cin >> arrSize;
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        int arrElement;
        cin >> arrElement;
        arr[i] = arrElement;
    }

    bool elemFound = false;
    for (int x : arr)
    {
        int elemCount = 0;
        for (int i = 0; i < arrSize; i++)
        {
            if (x == arr[i])
            {
                elemCount++;
            }
        }
        if (elemCount > arrSize/2)
        {
            elemFound = true;
            cout << x;
            break;
        } 
    }
    if (!elemFound)
    {
        cout << -1;
    }
    
    
    
    
}