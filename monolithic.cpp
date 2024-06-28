# include<iostream>
using namespace std;
int main()
{
    int lenght=0,breadth=0;
    cout<<"Enter lenght and breadth";
    cin>>lenght>>breadth;

    int area=lenght*breadth;
    int peri=2*(lenght*breadth);
    cout<<"Area and peri";
    cout<<area<<endl;
    cout<<peri<<endl;
    return 0;
}