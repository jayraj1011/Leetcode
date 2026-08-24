class Solution {
public:
    bool rotateString(string s, string goal) {
    int n=s.size();
    while(n>=0){
        reverse(s.begin()+1,s.end());
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1 && s[i]==goal[i]){
                return true;
            }
            if(s[i]==goal[i]){
            continue;
            }else{
                break;
            }
        }
        n--;
    }
    return false;
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        //abcde
        //bcdea
        //cdeab
        //deabc
        //eabcd
        //abcde
    }
};