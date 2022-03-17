#include <iostream>
using namespace std;

int primeNumber();
int OddEven();
int Palindrome();
int Armstrong();

int main() {

    
}

int PrimeNumber(int number) {
    int number, m = 0, flag =0;
    m = number / 2;
    for( int i = 2; i < = m; i++)
    {
        if (number % i == 0) 
        {
            cout << "Number is not Prime. " << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) 
    {
        cout << "Number is Prime. " << endl;

    }


}

int OddEven() {

}

int Palindrome() {

}

int Armstrong() {

}