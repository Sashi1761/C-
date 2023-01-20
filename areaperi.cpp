#include<iostream>
#include<conio.h>
using namespace std;

class rectangle
{
    private:
    int l,b, a,p;
    public:
    void input()
    {
        cout<<"Enter the length and breath of rectangle"<<endl;
    }
    void calc_ap()
    {
        a = l*b;
        p = 2*(l+b);
    }
    void display()
    {
        cout<<"area of rectangle="<<a<<endl<<"Perimeter of rectangle"<<p;

    }
};

int main()
{
    rectangle r;
    r.input();
    r.calc_ap();
    r.display();
    getch();
    return (0);

}