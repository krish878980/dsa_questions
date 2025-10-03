#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) return x;
    int low = 1, high = x, ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // To avoid overflow, compare mid with x / mid
        if (mid <= x / mid) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans; // floor(sqrt(x))
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square root (integer part) of " << num << " = " << mySqrt(num) << endl;
    return 0;
}
