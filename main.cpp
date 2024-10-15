#include<iostream>
using namespace std;
int main()
{
    int n,f,c;
    cout<<"select an option"<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"Enter your Choice:"<<endl;
    cin>>n;


    if(n == 1)
    {

        cout<<"Enter the temperature in celsius:"<<endl;
        cin>>c;
        f=(9/5)*c+32;
        cout<<"Temperature in Fahrenheit:"<<f<<"F"<<endl;
    }
    else if(n == 2)
    {

        cout<<"Enter the temperature in Fahrenheit:"<<endl;
        cin>>f;

         c=(5/9)*f-32;
        cout<<"Temperature in Celsius:"<<c<<"C"<<endl;
    }
    else
    {
        cout<<"Invalid option"<<endl;
    }
    return 0;

}
