#include <iostream> 
using namespace std;

int main() {
    string arrayID[6][6] = {
        {"ID", "CALCULUS", " ENGLISH", "  EDP101", "FILIPINO"},
        {"1122", "98", "95", "89", "87"},
        {"1223","78", "83", "70", "75"},
        {"3222","70", "78", "75", "89"},
        {"3242", "75", "80", "75", "98"},
        {"5321","70","83", "75", "81"}
    };

    //access id and grades
    cout << "-------------------------------------------------------------------" << endl;
    for (int i = 0; i <= 5; ++i) {
        cout << arrayID[0][i] << "\t  ";
    } cout << "\t" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    for(int i = 1;i <= 5; ++i ) {
        for(int n = 0; n <= 5; ++n) {
            cout << arrayID[i][n] <<"\t\t";
        }
        cout << "\t\n";
    }

    string arraySurname[6][6] = {
        {"SURNAME", " CALCULUS", "  ENGLISH", "  EDP101", "FILIPINO"},
        {"Santos", "98", "95", "89", "87"},
        {"Apple","78", "83", "70", "75"},
        {"James","70", "78", "75", "89"},
        {"Smith", "75", "80", "75", "98"},
        {"Cruz","70","83", "75", "81"}
    };

    cout << "-------------------------------------------------------------------" << endl;
    for (int i = 0; i <= 5; ++i) {
        cout << arraySurname[0][i] << "\t  ";
    } cout << "\t" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    for(int i = 1;i <= 5; ++i ) {
        for(int n = 0; n <= 5; ++n) {
            cout << arraySurname[i][n] <<"\t\t";
        }
        cout << "\t\n";
    }
}