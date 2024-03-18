#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,s1;
    cin>>s;
    
    for(int i=0;i<n;i++)
    {
        s1[i]=s[(n-1)-i];
    }
    
    if(s==s1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}