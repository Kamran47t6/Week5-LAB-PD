#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double height,tanf,degree=30;
    double radian=(3.1416/180)*degree;
  	cout<<"sin of (x) :"<<sin(radian)<<endl;  
	cout<<"cos of (x) :"<<cos(radian)<<endl;
    tanf=sin(radian)/cos(radian);
	cout<<"Tan of (x) :"<<tan(radian);
	height=43*tan(radian);
	cout<<endl;
	cout<<"The height of tree :"<<height;
	return 0;
}