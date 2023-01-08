#include<iostream>
using namespace std;
void time(int hour,int min);
int main(){
	int hour,min;
	cout<<"Enter hour :";
	cin>>hour;
	cout<<"Enter min :";
	cin>>min;
	time(hour,min);
	return 0;
}
void time(int hour,int min){
	min=min+15;
	if(min>59){
		hour=hour+1;
		min=(min/2)-15;
	}
	cout<<"hh:min "<<hour<<":"<<min<<endl;
}