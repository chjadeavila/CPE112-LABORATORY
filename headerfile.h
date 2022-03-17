#include <iostream>
using namespace std;

//output: counting the armstrong numbers based on the products 
void CountingArmstrong(int palin,int d, int reverse){   
if (palin>=0){
			//process to check if it's a palindrome or not
			
			//increment
			for(int a=palin;a!=0;){
				d=a%10;//ones digit;d=9,d=8
				reverse=(reverse*10)+d;//=9;=98
				a=a/10; //78
			}
			if(palin==reverse){
				cout<<"This is a palindrome number";
			}else{
				cout<<"This is not a palindrom number";
			}
		}
}