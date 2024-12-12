#include <iostream>
using namespace std;
class prime_number
{
    public:
    bool prime(int n)
    {
        if(n<=1)
        {
            return false;
        }
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    prime_number obj;
    bool ans=obj.prime(5);
    cout<<ans;
}