#include <iostream>
using namespace std;

//FUNCTION PROTOTYPE
void SearchBySurname();
void SearchById();

//MAIN FUNCTION --- DRIVER
int main(){
    //INITIALIZATION
    int selected;
    string surnameAndID[5][2] = {
        {"Delo Santos", "1122"},
        {"Juan Apple", "1223"},
        {"Smith James", "3222"},
        {"James Smith", "3242"},
        {"Dela Cruz", "5321"}
    };
    
    //OUTPUT SURNAME AND ID OF THE STUDENTS
    cout << "\t FIRST YEAR STUDENTS" << endl;
    cout << "------------------------------------------" << endl;
    cout << "NAME:\t\t\t\tID NUMBER:" << endl;
    for (int z = 0; z <=4; ++z) {
        for (int n = 0; n <= 1; ++n) {
            cout << surnameAndID[z][n] << "\t\t\t";
        } cout << "\t\n";
    }

    //OUTPUT OPTIONS - SURNAME AND ID
    menu: 
    cout << "\n\t FIND GRADES BY: " << endl;
    cout << "\n\t Choose the corresponding numbers." << endl;
    cout << "\n\t  1. Surname" << endl;
    cout << "\n\t  2. ID Number" << endl;
    cout << "\n\t  Selected: ";
    cin >> selected;

    //PROCESS - CALLING FUNCTIONS
    switch(selected) {
        case 1: 
            SearchBySurname();
            break;
        case 2:
            SearchById();
            break;
        default: 
            cout << "\nWrong Input! Please choose the corresponding number 1 or 2..." << endl;
        
            goto menu;
            break;
    }

return 0;
}

void SearchBySurname(){ //SEARCH BY SURNAME FUNCTION
    //INITIALIZATION
    string arraySurname[6][6] = {
        {"SURNAME", " CALCULUS", "  ENGLISH", "  EDP101", "FILIPINO"},
        {"Santos", "98", "95", "89", "87"},
        {"Apple","78", "83", "70", "75"},
        {"James","70", "78", "75", "89"},
        {"Smith", "75", "80", "75", "98"},
        {"Cruz","70","83", "75", "81"}
    };
    string select;
    int selected;

    //INPUT
    menu:
    cout << "\n\nFind student's grades: " << endl;
    cout << "Please enter a student's surname: ";
    cin >> select;
   
    //CONVERT INPUTTED STRING TO INTEGER for SWITCHING PURPOSES
    if(select == "Santos" || select == "santos" || select == "SANTOS") {
        selected = 1;
    } else if(select == "Apple" || select == "apple" || select == "APPLE") {
        selected = 2;
    } else if(select == "James" || select == "james" || select == "JAMES") {
        selected = 3;
    } else if(select == "Smith" || select == "smith" || select == "SMITH") {
        selected = 4;
    } else if(select == "Cruz" || select == "cruz" || select == "CRUZ") {
        selected = 5;
    }
    
    //OUTPUT
    cout << "-------------------------------------------------------------------" << endl;
                for (int i = 0; i <= 5; ++i) {
                    cout << arraySurname[0][i] << "\t  ";
            } cout << "\t" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    //PROCESS 
    switch(selected) {
        case 1: 
            //OUTPUT SANTOS GRADES
            for(int n = 0; n < 5; ++n) {
                cout << arraySurname[1][n] << "\t\t";
            }
            
            goto menu;

            break;
        case 2:
            //OUTPUT APPLE'S GRADES
            for (int n = 0; n < 5; ++n) {
                cout << arraySurname[2][n] << "\t\t";
            }
       
            goto menu;

            break;
        case 3:
            //OUTPUT JAMES' GRADES
            for (int n = 0; n < 5; ++n) {
                cout << arraySurname[3][n] << "\t\t"     ;
            }
  ;
            goto menu;

            break;
        case 4:
            //OUTPUT SMITH'S GRADES
            for (int n = 0; n < 5; ++n) {
                cout << arraySurname[4][n] << "\t\t";
            }
    
            goto menu;

            break;
        case 5:
            //OUTPUT CRUZ GRADES
            for (int n = 0; n < 5; ++n) {
                cout << arraySurname[5][n] << "\t\t";
            }

            goto menu;

            break;
        default: 
            //OUTPUT -/- IF WRONG INPUT
            string arrayNAN[5] = {"-/-" , "-/-", "-/-", "-/-", "-/-"};
            for(int i = 0; i <= 5; ++i) {
                cout << arrayNAN[i] << "\t\t";
            }
            cout << "\nWrong Input! Please input student's surname..." << endl;

            goto menu;

            break;
    }
}

void SearchById(){
    string arrayIDs[6][6] = {
        {"ID", "CALCULUS", " ENGLISH", "  EDP101", "FILIPINO"},
        {"1122", "98", "95", "89", "87"},
        {"1223","78", "83", "70", "75"},
        {"3222","70", "78", "75", "89"},
        {"3242", "75", "80", "75", "98"},
        {"5321","70","83", "75", "81"}
    };

    int select;

    //INPUT
    menu:
    cout << "\n\nFind the grades of each students:" << endl;
    cout << "Please enter a student's ID: ";
    cin >> select;

    //OUTPUT
    cout << "-------------------------------------------------------------------" << endl;
                for (int i = 0; i <= 5; ++i) {
                    cout << arrayIDs[0][i] << "\t  ";
            } cout << "\t" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    //PROCESS
    switch(select) {
        case 1122: 
            //OUTPUT SANTOS GRADES
            for(int i = 0; i < 5; ++i) {
            cout << arrayIDs[1][i] << "\t\t";
            }

            goto menu;

            break;
        case 1223:
            //OUTPUT APPLE'S GRADES
            for (int i = 0; i < 5; ++i) {
                cout << arrayIDs[2][i] << "\t\t";
            }
    
            goto menu;

            break;
        case 3222:
            //OUTPUT JAMES' GRADES
            for (int i = 0; i < 5; ++i) {
                cout << arrayIDs[3][i] << "\t\t";
            }

            goto menu;

            break;
        case 3242:
            //OUTPUT SMITH'S GRADES
            for (int i = 0; i < 5; ++i) {
                cout << arrayIDs[4][i] << "\t\t";
            }

            goto menu;

            break;
        case 5321:
            //OUTPUT CRUZ GRADES
            for (int i = 0; i < 5; ++i) {
                cout << arrayIDs[5][i] << "\t\t";
            }
 
            goto menu;

            break;
        default: 
            //OUTPUT -/- IF WRONG INPUT
            string arrayNAN[5] = {"-/-" , "-/-", "-/-", "-/-", "-/-"};
            for(int i = 0; i <= 5; ++i) {
                cout << arrayNAN[i] << "\t\t";
            }
            cout << "\nWrong Input!, Please enter student's ID..." << endl;

            goto menu;

            break;
            
    }   
}