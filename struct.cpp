/*# include<iostream>
using namespace std;
struct Rectangle
{
    int lenght;
    int breadth;
};
int main()
{
    struct Rectangle r1={10,5};
    cout<<sizeof(r1);
    return 0;
}*/

# include<iostream>
using namespace std;
struct Rectangle
{
    int lenght;
    int breadth;
    char x;
};
int main()
{
    struct Rectangle r1={10,5};
    r1.lenght=7;
    r1.breadth=8;

    cout<<r1.lenght<<endl;
    cout<<r1.breadth<<endl;
    return 0;

}
  

