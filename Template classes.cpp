//Generic class in class any type of data is present
// T is any type of data in template class
// Any data type are use no need to declare it
# include<iostream>
using namespace std;

template <class T>
class Arithmatic
{
    private:
        T a;
        T b;
    public:
        Arithmatic(T a,T b)
        int  add();
        int sub();

};
template<class T>
Arithmatic<T>:: Arithmatic(T a,T b)
{
    this->a=a;
    this->b=b;

    int Arithmatic::add()
    {
        int c;
        c=a+b;
        return c;

    }
    int Arithmatic::sub()
    {
        int c;
        c=a-b;
        return c;
    }
}
int main()
{
    Arithmatic<int>ar(10,5);
    cout<<ar.add();
    Arithmatic<float>ar1(1.5,1.2);
    cout<<ar1.add();

}
