#include <iostream>
using namespace std;

int main()
{
  int num[100][110];


  cout << "Multiplication table" <<endl;
  cout<<"___________________________"<<endl;
  cin >> num;


  for (int j = 0; j < 10; j++)
  {
    for (int i = 0; i <=10; i++)
    {

      cout << j << " * " << i << " = " << j * i << endl;
    }
    cout << endl
         << "_________________________" << endl
         << endl;
  }
}
