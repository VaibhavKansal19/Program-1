#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter total numbers to be entered: ";
    cin>>n;
    int a,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    cout<<"Sum= "<<sum;
    return 0;
}