Appraoch : 

1. You are given a N*N chessboard and the starting position of the knight in the chessboard.
2. The rows and columns are 0 indexed, so the top-left square is (0, 0), and the bottom-right square is (N-1, N-1).
3. You have to find the probability of knight to remain in the chessboard after exactly k number of moves.

class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        //knight probability in chessboard
        int x[] = {1,1,-1,-1,2,2,-2,-2};
        int y[] = {2,-2,2,-2,1,-1,1,-1};

        //double curr[n][n];
        //double next[n][n];
        vector<vector<double>>curr(n,vector<double>(n,0.0));
        vector<vector<double>>next(n,vector<double>(n,0.0));
        curr[row][column] = 1;
        for(int move = 1;move<=k;move++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(curr[i][j]!=0){
                    for(int k=0;k<8;k++){
                        int ni = i + x[k];
                        int nj = j + y[k];
                        if(ni>=0 and ni<n and nj>=0 and nj<n){
                            next[ni][nj]+= curr[i][j]/8.0;
                        }
                    }
                    }
                }
            }
            curr = next;          
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    next[i][j] = 0.0;
                }
            }
        }
        double sum = 0.0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum += curr[i][j];
            }
        }
        return sum;
    }
};
