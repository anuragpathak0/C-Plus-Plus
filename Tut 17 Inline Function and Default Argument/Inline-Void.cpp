#include <iostream>
using namespace std;

inline void sum(int a,int b){
    cout<<(a+b)<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    sum(a,b);
    sum(a,b);
    sum(a,b);
    sum(a,b);
    return 0;
}