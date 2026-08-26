class Solution {
public:
    int maxDepth(string s) {
        int mx=0;
        int balance=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                balance++;
            }
            if(s[i]==')'){
                balance--;
            }
            mx=max(mx,balance);
        }
        return mx;
    }
};