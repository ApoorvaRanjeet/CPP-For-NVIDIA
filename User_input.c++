#include <iostream>
using namespace std;
#include <string>

class User_input
{
    public: 

    string a;
    int i;
};
int main(){
    User_input obj;
    cin>>obj.a;
    cin>>obj.i;
    cout<<obj.a<<"\n"<<obj.i;
    return 0;
}