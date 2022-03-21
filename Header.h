#include <iostream>
#include <cmath>
using namespace std;

void multable(int a) {
    int num = a;
    
    int multable[11][11];
    int orgNum;
    int armstrong;
    int power;
    int result;
    int remainder;

    cout << "--------------------------------" << endl;
    cout << "MULTIPLICATION TABLE" << endl;
    cout << "--------------------------------" << endl;

    for(int row = 0; row < num + 1; ++row) {
        for(int column = 1; column < 11; ++column) {
            multable[row][column] = column * row;

            cout << column << " X " << row << " = " << multable[row][column] << endl;

    }

        cout << "----------------------------------" << endl;

    }


}