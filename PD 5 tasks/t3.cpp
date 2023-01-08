#include <iostream>
using namespace std;
float taxCalculator(string type, int price);
main()
{
    string type;
    int price;
    cout << "Enter type of vehicle :";
    cin >> type;
    cout << "ENter price of vehicle :";
    cin >> price;
    taxCalculator(type, price);
}
float taxCalculator(string type, int price)
{
    int taxamount, taxrate, finalprice;
    if (type == "Motorcycle")
    {
        taxrate = (price / 100) * 6;
        taxamount = price * (taxrate / 100);
        finalprice = price + taxamount;
        cout << "The final price on the vehicle of type " << type << " after adding tax is  :$ " << finalprice;
    }
    if (type == "Electic")
    {
        taxrate = (price / 100) * 8;
        taxamount = price * (taxrate / 100);
        finalprice = price + taxamount;
        cout << "The final price on the vehicle of type " << type << " after adding tax is  :$ " << finalprice;
    }
    if (type == "Sedan")
    {
        taxrate = (price / 100) * 10;
        taxamount = price * (taxrate / 100);
        finalprice = price + taxamount;
        cout << "The final price on the vehicle of type " << type << " after adding tax is  :$ " << finalprice;
    }
    if (type == "Van")
    {
        taxrate = (price / 100) * 12;
        taxamount = price * (taxrate / 100);
        finalprice = price + taxamount;
        cout << "The final price on the vehicle of type " << type << " after adding tax is  :$ " << finalprice;
    }
    if (type == "Truck")
    {
        taxrate = (price / 100) * 15;
        taxamount = price * (taxrate / 100);
        finalprice = price + taxamount;
        cout << "The final price on the vehicle of type " << type << " after adding tax is  :$ " << finalprice;
    }
}
