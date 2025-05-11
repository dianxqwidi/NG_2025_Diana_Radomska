#include <iostream>
#include <vector>
#include <string>

using namespace std;

void drawSpiral(int sizeOfSpiral) {
    if (sizeOfSpiral < 1) {
        cout << "Size must be at least 1." << endl;
        return;
    }

    vector<string> drawingBoard(sizeOfSpiral, string(sizeOfSpiral, ' '));
    int topRow = 0, leftCol = 0;
    int bottomRow = sizeOfSpiral - 1, rightCol = sizeOfSpiral - 1;

    while (leftCol <= rightCol && topRow <= bottomRow) {
        for (int column = leftCol; column <= rightCol; ++column)
            drawingBoard[topRow][column] = '*';
        topRow += 2;
        if (topRow > bottomRow) break;

        for (int row = topRow - 1; row <= bottomRow; ++row)
            drawingBoard[row][rightCol] = '*';
        rightCol -= 2;
        if (leftCol > rightCol) break;

        for (int column = rightCol + 1; column >= leftCol; --column)
            drawingBoard[bottomRow][column] = '*';
        bottomRow -= 2;
        if (topRow > bottomRow) break;

        for (int row = bottomRow + 1; row >= topRow; --row)
            drawingBoard[row][leftCol] = '*';
        leftCol += 2;
    }

    for (const auto &line : drawingBoard)
        cout << line << '\n';
}

void drawDiamond(int sizeOfDiamond) {
    if (sizeOfDiamond % 2 == 0) {
        cout << "Diamond size must be odd; using " << (sizeOfDiamond + 1) << " instead." << endl;
        ++sizeOfDiamond;
    }

    int centerRow = sizeOfDiamond / 2;

    for (int step = 0; step <= centerRow; ++step) {
        cout << string(centerRow - step, ' ')
        << string(2 * step + 1, '*') << '\n';
    }

    for (int step = centerRow - 1; step >= 0; --step) {
        cout << string(centerRow - step, ' ')
        << string(2 * step + 1, '*') << '\n';
    }
}

int main() {
    int spiralSize, diamondSize;

    cout << "Enter spiral size (>=1): ";
    cin >> spiralSize;
    drawSpiral(spiralSize);

    cout << "\nEnter diamond size (odd >=1): ";
    cin >> diamondSize;
    drawDiamond(diamondSize);

    return 0;
}
