class Solution {
public:
    int beauty(string ss){
        int freq[26]={0};
        for(int i=0;i<ss.size();i++){
            freq[ss[i]-'a']++;
        }
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int j=0;j<26;j++){
            if(freq[j]>0){
                mx=max(mx,freq[j]);
                mn=min(mn,freq[j]);
            }
        }
        return mx-mn;
    }
    int beautySum(string s) {
        int sum=0;
        int left=0;
        int right=1;
        while(left<s.size() && right<s.size()){
            while(right!=s.size()){
                sum+=beauty(s.substr(left,right-left+1));
                right++;
            }
            if(right==s.size()){
                left++;
                right=left+1;
            }
        }
        return sum;
    };
};