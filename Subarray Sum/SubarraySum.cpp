//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>v, int n, long long s){
        vector<int> ans(1,-1);
            if (s==0){
                return ans;
            }
            
            int i = 0 , j=1;
            long long sum = v[0] ;
            if (s==sum){
                ans[0]=1;
                ans.push_back(1);
                return ans;
                
            }
            while (j<n){
                if (sum + v[j] > s){
                    sum=sum - v[i];
                    i++;
                }
                else{
                    sum=sum+v[j];
                    j++;
                }
                if (sum==s){
                    ans[0]=i+1;
                    ans.push_back(j);
                    return ans;
                    
                }
            }
                return ans;
        
    }
    
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
