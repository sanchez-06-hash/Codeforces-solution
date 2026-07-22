#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,result=0;
    cin>>n;
    string s;
    cin>>s
    for(int i=0;i<n;i++){
    if(s[i]=='#'){
    sum++;
    if(sum>result)
    result=sum;
    }
    else
    sum=0;}

cout << (result+ 1) / 2 << endl;
}