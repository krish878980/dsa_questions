#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

