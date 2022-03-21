#include <iostream>
using namespace std;


string STUDENT_DATA[6][6] = {
        {"SURNAME", "STUDENT ID", "CALCULUS", "ENGLISH", "EDP101", "FILIPINO"},
        {"Santos", "1122", "90", "95", "89", "87"},
        {"Apple","1223", "78", "83", "70", "75"},
        {"James","3222","70", "78", "75", "89"},
        {"Smith", "3242","75", "80", "75", "98"},
        {"Cruz", "5321","70","83", "75", "81"}
};


int main() {
    int selected;

    //INPUT
    menu:
    cout << "\n\nFind student's grades: " << endl;
    cout << "Please enter a student's ID: ";
    cin >> selected;

    //ID AND SURNAME
    cout << "-------------------------------------------------------\n";
    for(int column = 1; column <= 5; ++column ) {
            cout << STUDENT_DATA[0][column] << "\t  ";
    } cout << "\n------------------------------------------------------------\n";

    //PROCESS
    switch(selected) {
        case 1122:
            //OUTPUT SANTOS GRADES
            for(int column = 1; column <= 5; ++column ) {                
                    cout << STUDENT_DATA[1][column] << "\t\t  ";                
            }
            goto menu;
            break;
        case 1223:
            //OUTPUT APPLE'S GRADES
            for(int column = 1; column <= 5; ++column ) {                
                    cout << STUDENT_DATA[2][column] << "\t\t   ";                
            }
            goto menu;
            break;
        case 3222:
            //OUTPUT JAMES' GRADES
            for(int column = 1; column <= 5; ++column ) {                
                    cout << STUDENT_DATA[3][column] << "\t\t   ";                
            }
            goto menu;
            break;
        case 3242:
            //OUTPUT SMITH'S GRADES
            for(int column = 1; column <= 5; ++column ) {               
                    cout << STUDENT_DATA[4][column] << "\t\t   ";               
            }
            goto menu;
            break;
        case 5321:
            //OUTPUT CRUZ GRADES
            for(int column = 1; column <= 5; ++column ) {               
                    cout << STUDENT_DATA[5][column] << "\t\t   ";  
            }
            goto menu;
            break;
        default:
            cout << "\nWrong Input! Please input student's surname..." << endl;
            goto menu;
            break;
    }

    

}

