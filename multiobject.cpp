#include<iostream>
#include<conio.h>
using namespace std;
class New
{
    int m; int n;
public:
    New (int x,int y);
    void display();

};

New::New(int x, int y)
{
    m=x;
    n=y;
}
void New::display()
{
    cout<<m<<" "<<n<<endl;
    cout<<endl;
}
main()
{
    New ob1(10, 100);
    ob1.display();
    New ob2(20,200);
    ob2.display();
    New ob3(30, 300);
    ob3.display();
    getch();
}
