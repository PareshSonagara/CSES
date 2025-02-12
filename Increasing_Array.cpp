#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> vec(n);
    long long sum=0;
    for(long long i=0;i<n;i++){
        cin>>vec[i];
    }
    for(long long i=0;i<n-1;i++){
        if(vec[i]>vec[i+1]){
            sum+=vec[i]-vec[i+1];
            vec[i+1]=vec[i];
        }
    }
    cout<<sum<<endl;
return 0;
}