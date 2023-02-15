#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cout<<"enter the last digit";
    cin>>n;
     long long int  newterm=0;
    long long int  prev=1;
    long long int  prev1=0;
    cout<<prev1<<" "<<prev<<" ";
    for(int i=3;i<=n;i++)
    {
        newterm=prev+prev1;
        cout<<newterm<<" ";
        prev1=prev;
        prev=newterm;
    }
    return 0;
}
