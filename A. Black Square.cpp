#include<iostram>
#include <vector>
using namespace std;
int main()
{
    vector<int>v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    int total=0;
    for(char c:s)
    {
int index=c-'1';
total=total+v[index];
    }
    cout<<total<<endl
    return 0;
}