#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int smallestNumber = nums[0];
    int largestNumber = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < smallestNumber)
        {
            smallestNumber = nums[i];
        }

        if (nums[i] > largestNumber)
        {
            largestNumber = nums[i];
        }
    }
    cout << largestNumber + smallestNumber;
}