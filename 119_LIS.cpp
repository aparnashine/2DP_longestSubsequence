
// Rec
int solveRec(int n,int a[],int curr, int prev){
    //bc
    if(curr == n)
    {
        return 0;
    }

    //inclusion case
    int take = 0;
    if(prev == -1 || a[curr] > a[prev]){
        take = 1 + solveRec(n, a, curr+1 ,curr);
    }

    //exclusion case
    int notTake = 0 + solveRec(n, a, curr+1 , prev);

    return max(take, notTake);
}

//rec + mem
int solveMem(int n,int a[],int curr, int prev, vector<vector<int>> &dp){
    //bc
    if(curr == n)
    {
        return 0;
    }

    //inclusion case
    int take = 0;
    if(prev == -1 || a[curr] > a[prev]){
        take = 1 + solveMem(n, a, curr+1 ,curr,dp);
    }

    //exclusion case
    int notTake = 0 + solveMem(n, a, curr+1 , prev, dp);

    return dp[][] = max(take, notTake);
}

int longestSubsequence(int n, int a[])
{
    // return solveRec(n,a,0,-1);

    vector<vector<int>> dp(n, vector<int> (n+1,-1));
    return solveMem(n, a, 0, -1, dp);
}