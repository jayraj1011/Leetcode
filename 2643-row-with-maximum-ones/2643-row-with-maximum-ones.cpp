class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ans1=-1;
        int ans2=-1;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    cnt++;
                }
            }
            if(cnt>ans2){
                ans1=i;
                ans2=cnt;
            }
        }
        return {ans1,ans2};
    }
};