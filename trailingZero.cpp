#include <iostream>
using namespace std;

class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count = 0;
        while (N >= 5)
        {
            count += N / 5;
            N /= 5;
        }
        return count;
    }
};

int main()
{
    Solution obj;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Trailing zeros in " << n << "! = " << obj.trailingZeroes(n) << endl;
    return 0;
}
