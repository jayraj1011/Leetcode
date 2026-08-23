class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m+n-1;
        int j=m-1;
        int k=n-1;
        while(j>=0 && k>=0){
            if(nums1[j]>=nums2[k]){
            nums1[i]=nums1[j];
            i--;
            j--;
        } else{
            nums1[i]=nums2[k];
            i--;
            k--;
        }
        }
        while(k>=0){
            nums1[i]=nums2[k];
            k--;
            i--;
        }
        


        // vector<int> ans;
        // for(int i=0;i<m;i++){
        //     ans.push_back(nums1[i]);
        // }
        // for(int j=0;j<nums2.size();j++){
        //     ans.push_back(nums2[j]);
        // }
        // sort(ans.begin(),ans.end());
        // for(int k=0;k<nums1.size();k++){
        //     nums1[k]=ans[k];
        // }
        
    }
};