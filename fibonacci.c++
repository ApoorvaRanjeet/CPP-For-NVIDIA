#include <iostream>
using namespace std;
class fibonacci
{
    public:
    int func(int n)
    {
        if(n<=1)
        {
            return n;
        }
        return func(n-1)+func(n-2);
    }
};
int main()
{
    fibonacci obj;
    int ans=obj.func(5);
    cout<<ans;
    return 0;
}