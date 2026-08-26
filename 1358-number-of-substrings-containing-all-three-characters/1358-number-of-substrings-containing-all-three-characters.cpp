class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0;
        int right=0;
        int cnta=0;
        int cntb=0;
        int cntc=0;
        int ans=0;
        while(left<=right && right<s.size()){
            if(s[right]=='a'){
                cnta++;
                right++;
            }else if(s[right]=='b'){
                cntb++;
                right++;
            }else if(s[right]=='c'){
                cntc++;
                right++;
            }
            while(cnta>=1 && cntb>=1 && cntc>=1){
                ans+=s.size()-right+1;
                if(s[left]=='a'){
                    cnta--;
                }else if(s[left]=='b'){
                    cntb--;
                }else{
                    cntc--;
                }
                left++;
            }
        }
        return ans;
    }
};