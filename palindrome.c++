#include <iostream>
using namespace std;
class palindrome
{
    public:

    bool ispalindrome(int n)
    {
        int t=n;
        int rem=0;
        int sum=0;
        while(t!=0)
        {
            rem=t%10;
            sum=sum*10+rem;
            t/=10;
        }
        if(sum==n)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    palindrome obj;
    bool ans=obj.ispalindrome(102);
    cout<<ans;
}