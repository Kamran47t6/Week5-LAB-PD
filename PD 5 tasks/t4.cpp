#include<iostream>
using namespace std;
void firm(int hour,int day,int worker,int noworkday,int remainday);
int main(){
    int hour,day,worker,noworkday,remainday;
    cout<<"ENter Hour needed :";
    cin>>hour;
    cout<<"Enter day that firm has:";
    cin>>day;
    cout<<"Enter number of worker :";
    cin>>worker;
    noworkday=(day/100)*10;
    remainday=day-noworkday;
    firm(hour,day,worker,noworkday,remainday);

}
void firm(int hour,int day,int worker,int noworkday,int remainday){
    int timedone,sum;
    if(remainday>=1){
        timedone=worker*10;
        sum=sum + timedone;
        remainday--;
    }
    if(sum>hour){
        cout<<"Yes Hours Left :"<<sum-hour;
    }
    if(sum<hour){
        cout<<"No Hours Left .Additional hours :"<<hour-sum;
    }

}