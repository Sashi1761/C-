#include<iostream>
#include<conio.h>
using namespace std;

class simpleInterest
{
    private:
    int p,t,r,i;
    public:
    void input()
    {
        cout<<"Enter the value of principle rate and time respectively"<<endl;
        cin>>p>>t>>r;
    }

    void calcSimpleInterest()
    {
        i = (p*t*r)/100;

    }
    void displayResult()
    {
        cout<<"The required value of interst is:"<<"Rs"<<i<<endl;
    }
};

int main()
{
    simpleInterest s;
    s.input();
    s.calcSimpleInterest();
    s.displayResult();
    return (0);
}