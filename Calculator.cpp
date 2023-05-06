#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b;
    char sym;
    cout<<"\t"<<"Calculator : To perform + - * / oprations"<<endl;
    cout<<"\t"<<"_____________________"<<endl;
    cout<<"\t"<<"|                   |"<<endl;
    cout<<"\t"<<"|       CALCI       |"<<endl;
    cout<<"\t"<<"|___________________|"<<endl;
    cout<<"\t"<<"| 7 | 8 | 9 | + | - |"<<endl;
    cout<<"\t"<<"| 4 | 5 | 6 |___|___|"<<endl;
    cout<<"\t"<<"| 1 | 2 | 3 | * | / |"<<endl;
    cout<<"\t"<<"| 0 | . |   |___|___|"<<endl;
    cout<<"\t"<<"|___________________|"<<endl;
    cout<<"\n"<<"Operand 1 : ";
    cin>>a;
    cout<<"Operator (+,-,*,/) : ";
    cin>>sym;
    cout<<"Operand 2 : ";
    cin>>b;
    if(sym=='+')
    {
        cout<<"\t"<<"_____________________"<<endl;
        cout<<"\t"<<"|             "<<a<<sym<<b<<" |"<<endl;
        cout<<"\t"<<"|               "<<a+b<<"  |"<<endl;
        cout<<"\t"<<"|___________________|"<<endl;
        cout<<"\t"<<"| 7 | 8 | 9 | + | - |"<<endl;
        cout<<"\t"<<"| 4 | 5 | 6 |___|___|"<<endl;
        cout<<"\t"<<"| 1 | 2 | 3 | * | / |"<<endl;
        cout<<"\t"<<"| 0 | . |   |___|___|"<<endl;
        cout<<"\t"<<"|___________________|"<<endl;
       
    }
    else if(sym=='-')
    {
        cout<<"\t"<<"_____________________"<<endl;
        cout<<"\t"<<"|             "<<a<<sym<<b<<" |"<<endl;
        cout<<"\t"<<"|               "<<a-b<<" |"<<endl;
        cout<<"\t"<<"|___________________|"<<endl;
        cout<<"\t"<<"| 7 | 8 | 9 | + | - |"<<endl;
        cout<<"\t"<<"| 4 | 5 | 6 |___|___|"<<endl;
        cout<<"\t"<<"| 1 | 2 | 3 | * | / |"<<endl;
        cout<<"\t"<<"| 0 | . |   |___|___|"<<endl;
        cout<<"\t"<<"|___________________|"<<endl;
    }
    else if(sym=='/')
    {
        cout<<"\t"<<"_____________________"<<endl;
        cout<<"\t"<<"|              "<<a<<sym<<b<<" |"<<endl;
        cout<<"\t"<<"|                "<<a/b<<" |"<<endl;
        cout<<"\t"<<"|___________________|"<<endl;
        cout<<"\t"<<"| 7 | 8 | 9 | + | - |"<<endl;
        cout<<"\t"<<"| 4 | 5 | 6 |___|___|"<<endl;
        cout<<"\t"<<"| 1 | 2 | 3 | * | / |"<<endl;
        cout<<"\t"<<"| 0 | . |   |___|___|"<<endl;
        cout<<"\t"<<"|___________________|"<<endl;
    }
    else if(sym=='*')
    {
        cout<<"\t"<<"_____________________"<<endl;
        cout<<"\t"<<"|              "<<a<<sym<<b<<" |"<<endl;
        cout<<"\t"<<"|               "<<a*b<<" |"<<endl;
        cout<<"\t"<<"|___________________|"<<endl;
        cout<<"\t"<<"| 7 | 8 | 9 | + | - |"<<endl;
        cout<<"\t"<<"| 4 | 5 | 6 |___|___|"<<endl;
        cout<<"\t"<<"| 1 | 2 | 3 | * | / |"<<endl;
        cout<<"\t"<<"| 0 | . |   |___|___|"<<endl;
        cout<<"\t"<<"|___________________|"<<endl;
    }
   
}