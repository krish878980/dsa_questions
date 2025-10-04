#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false; // divisible by i → not prime
    }
    return true; // prime number
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a Prime Number";
    else
        cout << num << " is NOT a Prime Number";

    return 0;
}
