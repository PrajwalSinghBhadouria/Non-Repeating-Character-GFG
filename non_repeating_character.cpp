//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        char ans='$';
        map<char,int> mp;
        for(int i=0; i<s.size(); i++){
                mp[s[i]]++;
        }
        map<char,int> v;
        for(auto i:mp){
            if(i.second==1){
                v[i.first]++;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(v.find(s[i])!=v.end()){
                ans = s[i];
                break;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends