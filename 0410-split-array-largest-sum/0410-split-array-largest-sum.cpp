class Solution {
public:
    bool possible(vector<int>& nums,int barrier,int k){
        int arrCnt=1;
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(sum+nums[i]>barrier){
                arrCnt++;
                sum=nums[i];
            }else{
                sum=sum+nums[i];
            }
        }
        if(arrCnt>k){
            return false;
        }else{
            return true;
        }
    }
    int splitArray(vector<int>& nums, int k) {
        int mx=INT_MIN;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            mx=max(mx,nums[i]);
        }
        int low=mx;
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(nums,mid,k)==true){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};