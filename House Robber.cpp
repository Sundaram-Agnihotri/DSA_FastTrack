class Solution {
public:
int dp[101];
int solve(vector<int>nums,int i){
    if(i>=nums.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int chori_karega=nums[i]+solve(nums,i+2);
    int nhi_karega=solve(nums,i+1);
    return dp[i]=max(chori_karega,nhi_karega);
}
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};
