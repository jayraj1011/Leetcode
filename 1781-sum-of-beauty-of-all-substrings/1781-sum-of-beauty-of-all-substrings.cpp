class Solution {
public:
    
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int frq[26]={0};
            for(int j=i;j<s.size();j++){
                frq[s[j]-'a']++;
                int mx=INT_MIN;
                int mn=INT_MAX;
                for(int k=0;k<26;k++){
                    if(frq[k]>0){
                        mx=max(mx,frq[k]);
                        mn=min(mn,frq[k]);
                    } 
                }
                sum+=mx-mn;
            }
        }
        return sum;
    };
};