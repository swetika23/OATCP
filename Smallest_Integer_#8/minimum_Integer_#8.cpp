#include <bits/stdc++.h>
using namespace std;
string removeKDigits(string num, int k) {
        stack<char> st;
        for(char c : num){
            while(!st.empty() && k > 0 && st.top() > c){
                k--;
                st.pop();
            }
            if(!st.empty() || c != '0') st.push(c);
        }

        while(!st.empty() && k > 0) st.pop(), k--;
        string ans = "";
        while(!st.empty()) ans += st.top(), st.pop();
        reverse(ans.begin(), ans.end());
        return ans.empty() ? "0" : ans;
    }
int main()
{
    string str;
    cin>>str;
    int k;
    cin>>k;
    string ans=removeKDigits(str,k);
    cout<<ans<<endl;
    return 0;
}