#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string txt;
    getline(cin, txt);
    int numberOfWords = 0;
    for(int x = 0; x < txt.length(); x++) {
        if(txt[x] != ' ' && x == 0) {
            numberOfWords++;
        } else if (txt[x - 1] == ' ' && txt[x] != ' ') {
            numberOfWords++;
        }
    }
    cout << numberOfWords << endl;
}