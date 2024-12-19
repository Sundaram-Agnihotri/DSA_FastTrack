class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        map<int,int>mp;
        vector<int>ans;
        int Max=INT_MAX;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int c=0;
        int n=arr.size();
        int last=arr[n-1];
        for(int i=1;i<=last-1;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
            
        }
        
        int vec=ans.size();
        if(vec<k){
            for(int i=last+1;i<=last+k;i++){
                ans.push_back(i);
            }
        }
        
        return ans[k-1];
    }
};