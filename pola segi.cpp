#include <iostream>
using namespace std;
int main() {
   int y, reverse=0, rem;
    cin>>y;
    while(y!=0)
    {
        rem=y%10;
        reverse=reverse*10+rem;
        y/=10;
    }
    cout<<reverse<<endl;
    return 0;
}
