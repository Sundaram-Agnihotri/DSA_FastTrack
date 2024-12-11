import java.util.Scanner;
public class DP {
    public static int fib(int n,int[] f){ // O(n)
        if(n == 0 || n == 1){
            f[n] = n;
            return f[n];
        }
        if(f[n] != 0){
            return f[n];
        }
        f[n] = fib(n-1,f) + fib(n-2,f);
        return f[n];
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the term : ");
        int n = sc.nextInt();
        int[] dp = new int[n+1]; //memoization
        System.out.println(fib(n,dp));
    }
}
