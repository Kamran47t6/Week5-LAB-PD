#include<iostream>
using namespace std;
void alphab(char alp);
int main(){
	char alp;
	cout<<"Enter any character from like A,b,c:";
	cin>>alp;
	alphab(alp);
	return 0;
}
void alphab(char alp){
	if(alp=='A'){
		cout<<"Capital letter :";
	}
	if(alp=='a'){
		cout<<"Small letter :";
	}
	if(alp=='B'){
		cout<<"Capital letter :";
	}
	if(alp=='b'){
		cout<<"Small letter :";
	}
}
