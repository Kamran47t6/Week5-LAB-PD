#include<iostream>
using namespace std;
void add(int number1,int number2);
int main(){
	int number1,number2;
	cout<<"Enter number01 :";
	cin>>number1;
	cout<<"Enter number02 :";
	cin>>number2;
	add(number1,number2);
}
void add(int number1,int number2){
	cout<<"Sum :"<<number1+number2;
}