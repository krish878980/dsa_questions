// bishop_moves.cpp
#include <iostream>
#include <algorithm> // for std::min
using namespace std;

int bishopMovesCount(int A, int B) {
    // A, B are 1-indexed (rows and columns from 1 to 8)
    int count = 0;
    count += min(8 - A, 8 - B); // bottom-right
    count += min(8 - A, B - 1); // bottom-left
    count += min(A - 1, B - 1); // top-left
    count += min(A - 1, 8 - B); // top-right
    return count;
}

int main() {
    int A, B;
    cout << "Enter bishop position (row and column 1-8): ";
    if (!(cin >> A >> B)) {
        cerr << "Invalid input\n";
        return 1;
    }

    if (A < 1 || A > 8 || B < 1 || B > 8) {
        cout << "Position out of range. Use values 1 through 8.\n";
        return 0;
    }

    int moves = bishopMovesCount(A, B);
    cout << "Total possible moves for bishop at (" << A << ", " << B << "): " << moves << "\n";
    return 0;
}
