#include<iostream>
using namespace std;
class statements
{
    public:

    void func(int a,int b)
    {
        if(a>b)
        {
            cout<<a;
        }
        else
        {
            cout<<b;
        }
    }

    int func2(string a,string b)
    {
        if(a.length()>b.length())
        {
            return a.length();
        }
        else
        {
            return b.length();
        }
        return 0;
    }

};
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    statements obj;
    obj.func(a,b);
   
    return 0;
}