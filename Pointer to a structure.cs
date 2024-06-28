//melloc function return void pointer
//for accesing member use arrow operator
# include<iostream>
using namespace std;

struct rectangle
{
    int lenght;
    int breadth;
};
int main()
{
    rectangle r={10,4};
    cout<<r.lenght<<endl;
    cout<<r.breadth<<endl;

    rectangle *p=&r;
    cout<<p->lenght<<endl;
    cout<<p->breadth<<endl;

    return 0;
}