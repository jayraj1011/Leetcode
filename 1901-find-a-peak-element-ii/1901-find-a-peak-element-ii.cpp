class Solution {
public:
    int maxEle(vector<vector<int>>& mat,int col,int m){
        int mxRow=-1;
        int mx=INT_MIN;
        for(int i=0;i<m;i++){
            if(mat[i][col]>mx){
                mx=mat[i][col];
                mxRow=i;
            }
        }
        return mxRow;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // 6 5 3 5 
        // 5 8 4 10 
        // 4 7 6 9
        // 6 5 2 9
        int m=mat.size();
        int n=mat[0].size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int mxRow=maxEle(mat,mid,m);
            int mx=mat[mxRow][mid];
            int left= mid-1>=0 ? mat[mxRow][mid-1] : INT_MIN;
            int right = mid+1<n ? mat[mxRow][mid+1] : INT_MIN;
            if(mx>left && mx>right){
                return {mxRow,mid};
            }else if(mx<left){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};