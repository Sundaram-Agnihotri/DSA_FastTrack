contibuted by: Sundaram Agnihotri
linkedin : https://www.linkedin.com/in/sundaram-agnihotri/



 int MOD = 1e9 + 7;

    vector<int>dp(n + 1, 0);

    dp[0] = 1;

    dp[1] = 1;

    for(int i = 2; i <= n; i++)

    {

        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;

    }

    return dp[n];
