class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1[256]={0};
        int n2[256]={0};
        for(int i=0;i<s.size();i++){
            if(n1[s[i]]!=n2[t[i]]){
                return false;
            }else{
                n1[s[i]]=i+1;
                n2[t[i]]=i+1;
            }
        }
        return true;
    }
};