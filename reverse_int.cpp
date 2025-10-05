#include <iostream>
using namespace std;

// Function to reverse an integer
int reverseInt(int x) {
    int ans = 0, rem;
    while (x) {
        rem = x % 10;      // get last digit
        x /= 10;           // remove last digit
        ans = ans * 10 + rem; // build reversed number
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Reversed number: " << reverseInt(num) << endl;

    return 0;
}
