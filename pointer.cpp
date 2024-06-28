//pointers are need to acces data indirectly
//main memory divided into three section code,stack,heap
//pointers are usefill for heap parameter passing
# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<a<<endl;
    cout<<*p<<endl;
    return 0;
}


//pointer to an array
# include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    int *p;
    p=A;

   for(int i=0;i<5;i++)
   cout<<A[i]<<endl;
    return 0;
}


//size of a pointer is independant on data type of pointer
#include<iostream>
using namespace std;
struct rectangle
{
   int lenght;
   int breadth;
};

int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;
    
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    return 0;

}

//POINTER TO A STRUCTURE

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