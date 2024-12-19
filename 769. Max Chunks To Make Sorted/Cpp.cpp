Contributed by : Sundaram Agnihotri 
linkedin : https://www.linkedin.com/in/sundaram-agnihotri/

Approach :

1 : Cumulative Sums:
Maintain two variables, sum1 for the cumulative sum of array elements and sum2 for the cumulative sum of indices.
Chunk Boundary Detection:
2 : Traverse through the array and update sum1 and sum2.
3 : Increment the chunk counter (ans) when this condition is satisfied.

4 : Chunk Validity: A valid chunk can be determined if the cumulative sum of values in the chunk equals the cumulative
 sum of the indices in that chunk. This ensures that all elements in the chunk are exactly the integers required for that portion of the sorted array


class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int sum1 = 0;
        int sum2 = 0;
        int ans = 0;

        for(int i=0;i<n;i++){
            sum1 += arr[i];
            sum2 += i;

            if(sum1==sum2)ans++; 
        }
        return ans;
    }
};
