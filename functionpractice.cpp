#include <iostream>
using namespace std;

void CallMyName() {

    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello "<< name << endl;

}

void AskMyAge() {

    int age;
    cout << "How old are you? ";
    cin >> age;
    cout << "Nice, you are " << age << " years old! Welcome!";

}

int main() {

    CallMyName();
    AskMyAge();
    
}