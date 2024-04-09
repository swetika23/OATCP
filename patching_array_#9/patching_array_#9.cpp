#include <bits/stdc++.h>
using namespace std;
int minimumPatches(vector<int>& nums, int n) {
    int cnt=0,i=0;
    long long maxNum=0;
    while (maxNum<n){
       if (i<nums.size() && nums[i]<=maxNum+1)
            maxNum+=nums[i++];
       else{
            maxNum+=maxNum+1;cnt++;
       }
   }
   return cnt;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int m;
    cin>>m;
    int ans=minimumPatches(v,m);
    cout<<ans<<endl;
    
    return 0;
}