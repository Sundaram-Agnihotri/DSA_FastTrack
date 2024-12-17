class Solution
{
    public:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code 
       vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
      for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=W;i++){
        dp[0][i]=0;
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++){
          if(wt[i-1]<=j){
               dp[i][j]= max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
           }
          else
               dp[i][j]= dp[i-1][j];
        }
    }
    return dp[n][W];
       
    }
    };
