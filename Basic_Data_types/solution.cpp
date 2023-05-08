#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    // Complete the code.
    string str;
    getline(cin, str);
    
    const int length = str.length();
    char* arr = new char[length + 1];
    strcpy(arr, str.c_str());
    
    int i = 0;
    
    // Temporary string used to split the string.
    string s; 
    while (arr[i] != '\0') {
        if (!isspace(arr[i])) {
            // Append the char to the temp string.
            s += arr[i]; 
        } else {
            cout << s << endl;
            s.clear();
        }
        i++;

    }
        cout << s << endl; 

    return 0;
}