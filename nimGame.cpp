// nim_game.cpp
#include <iostream>
using namespace std;

bool canWinNim(int n) {
    if (n % 4 == 0)
        return false;   // You lose if stones are multiple of 4
    else
        return true;    // Otherwise, you can win
}

int main() {
    int n;
    cout << "Enter number of stones: ";
    cin >> n;

    if (canWinNim(n))
        cout << "You can win the Nim Game!" << endl;
    else
        cout << "You will lose the Nim Game." << endl;

    return 0;
}
