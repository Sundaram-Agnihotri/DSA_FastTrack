import java.util.Scanner;
public class ZeroOneKnapsack {
    public static int knapsack(int[] profit,int[] wt,int W,int n){
        if(W==0 || n==0){
            return 0;
        }
        if(wt[n-1]<=W){ // valid case
            //include
            int ans1 = knapsack(profit,wt,W-wt[n-1],n-1) + profit[n-1];
            //exclude
            int ans2 = knapsack(profit,wt,W,n-1);
            return Math.max(ans1,ans2);
        }
        else{ // not valid
            return knapsack(profit,wt,W,n-1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array : ");
        int n = sc.nextInt();
        int[] profit = new int[n];
        int[] wt = new int[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter profit "+(i+1)+" : ");
            profit[i] = sc.nextInt();
            System.out.print("Enter weight : ");
            wt[i] = sc.nextInt();
        }
        System.out.print("Enter knapsack capacity : ");
        int W = sc.nextInt();
        System.out.println(knapsack(profit,wt,W,n));
    }
}
