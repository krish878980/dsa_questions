#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, digits = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate Armstrong sum
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong Number" << endl;
    else
        cout << n << " is not an Armstrong Number" << endl;

    return 0;
}
