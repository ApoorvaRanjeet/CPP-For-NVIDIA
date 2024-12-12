#include<iostream>
using namespace std;
#include<string>
class cases
{
    public:
    void func(int n)
    {
        switch(n)
        {
            case 1:
            cout<< 1;
            break;
            case 2:
            cout<<2;
            break;
            default:
            cout<< 0;
        }
    }
};
int main()
{
    cases obj;
    obj.func(3);
}