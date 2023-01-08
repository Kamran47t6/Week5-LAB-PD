#include<iostream>
using namespace std;
void evenodd(int num);
int main(){
	int num;
	cout<<"Enter a number :";
	cin>>num;
	evenodd(num);
}
void evenodd(int num){
	if(num%2==0){
		cout<<"Even number :";
	}
	if(num%2!=0){
     	cout<<"Odd number :";

	}
}