contibuted by: Sundaram Agnihotri
linkedin : https://www.linkedin.com/in/sundaram-agnihotri/


class Solution {
public:
    int cal(int n, vector<int>& f) {
        if (n == 1 || n == 0)
            return n;
        if (f[n] != 0)
            return f[n];
        f[n] = cal(n - 1, f) + cal(n - 2, f);
        return f[n];
    }

    int fib(int n) {
        vector<int> f(n + 1, 0);
        return cal(n, f);
    }
};
