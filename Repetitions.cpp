#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int ans=0;
    int fre=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            ans++;
            fre=max(fre,ans);
        }
        else{
            ans=0;
        }
    }
    cout<<fre+1<<endl;
return 0;
}