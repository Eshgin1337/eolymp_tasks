#include <iostream>
using namespace std;
int main()
{
    char vowels[] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    int vowelSize = sizeof(vowels)/sizeof(vowels[0]);
    string text;
    getline(cin, text);
    int vowelCount = 0;
    for (char letter: text) {
        if (letter == vowels[0] || letter == vowels[1] || letter == vowels[2] || letter == vowels[3] || letter == vowels[4] || letter == vowels[5])
        vowelCount++;
    }
    cout << vowelCount;
}