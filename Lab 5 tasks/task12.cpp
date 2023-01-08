#include<iostream>
using namespace std;
void num(int number);
int main(){
    int number;
    cout<<"Enter a number :";
    cin>>number;
    num(number);
	return 0;
}
void num(int number){
	int val=number,rev=0;
	while(number>0){
		rev=(rev * 10)+ number % 10;
		number=number / 10;
	}
	if(rev==val){
		cout<<"True ";
	}
	if(rev!=val){
		cout<<"False ";
	}
}
