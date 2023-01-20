//A static member funcution can access only static data  member. But a normal function can access both static and the normal
//data member
// syntax
// static return_type funcution name()
// {
//     // body
// }

#include<iostream>
using namespace std;

class test
{
    private:
    int x;
    static int count;
    public:
    void input()
    {
        
        cout<<"Enter the value of x"<<endl;
         cin>>x;
       

    }
    static void displayCount()

    {
         cout<<"Enter the value of Count"<<endl;
        
        cin>>Count;
               cout<<"The value of count is"<<count<<endl;
            //    cout<<"The value of x is"<<x<<endl; cannot display in the static funcution
 }
    
 
 void display()
 {
           cout<<"The value of x is"<<x<<endl;
 }

};



int main()
{

    test t;
    t.input();
    t.display();
    t.displayCount();
    return(0);
}