#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x=90;
	double degree;
	cout<<"Enter degree :";
	cin>>degree;
    double radian=3.1416/180*degree;
	cout<<"Sine of (x) :"<<sin(radian)<<endl;
	return 0;
}