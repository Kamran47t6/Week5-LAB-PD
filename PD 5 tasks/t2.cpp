#include <iostream>
using namespace std;
void functionf(int length, int width, int height, string unit);
int main()
{
    int length, width, height;
    string unit;
    cout << "ENter lenth :";
    cin >> length;
    cout << "ENter width :";
    cin >> width;
    cout << "Enter height :";
    cin >> height;
    cout << "Enter unit :";
    cin >> unit;

    functionf(length, width, height, unit);
}
void functionf(int length, int width, int height, string unit)
{
   float volume;
    if (unit == "cubicmeter")
    {
        volume = (length * width * height) / 3;
        cout << "Volume in cubic meter :" << volume;
    }
    if (unit == "cubiccentimeter")
    {
        volume = ((length * 100) * (width * 100) * (height * 100)) / 3;
        cout << "Volume in cubic centimeter :" << volume;
    }
    if (unit == "cubickilometer")
    {
        volume = ((length / 1000) * (width / 1000)*(height /1000)) / 3;
        cout << "Volume in cubic kilometers :" << volume;
    }
    if (unit == "cubicmilimeter")
    {
        volume = ((length * 1000) * (width * 1000) * (height * 1000)) / 3;
        cout << "Volume in cubic milimeter :" << volume;
    }
}