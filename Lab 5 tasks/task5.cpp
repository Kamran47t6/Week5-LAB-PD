#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int number,power;
	cout<<"Enter number :";
	cin>>number;
	cout<<"Enter power of number :";
	cin>>power;
	cout<<"Number raise to power :"<<pow(number,power);
	return 0;
}