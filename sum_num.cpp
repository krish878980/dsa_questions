#include <iostream>
using namespace std;

int Sum(int m, int n)
{
    int ans = m + n;
    return ans;
}
int main()
{
    int a, b;
    cout << "enter 2 numbers:";
    cin >> a >> b;

    // function call
    cout << Sum(a, b);
    cout << endl;
}