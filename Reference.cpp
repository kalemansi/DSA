//nick name given to the variable called references
// another name given to the vatiable
# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    cout<<a;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;
    return 0;
}

# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;

    int b=30;
    r=b;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}

