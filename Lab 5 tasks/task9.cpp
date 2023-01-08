#include<iostream>
#include<math.h>
using namespace std;
main(){
	float x1,x2;
	float a=5,b=6,c=1;
	float disc=b*b-4*a*c;
    x1=(-b+sqrt(disc))/2*a;
    cout<<"First value of x1 :"<<x1<<endl;
	x2=(-b-sqrt(b*b-4*a*c))/2*a;
	cout<<"Second value of x2 :"<<x2;
	return 0;
}