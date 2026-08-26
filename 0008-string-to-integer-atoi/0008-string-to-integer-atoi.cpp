class Solution {
public:
    int myAtoi(string s) {
        long ans=0;
        int i=0;
        int sign=1;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        if(i<s.size() && s[i]=='-'){
            sign=-1;
            i++;
        }else if(i<s.size() && s[i]=='+'){
            i++;
        }
        while(i<s.size() && isdigit(s[i])){
            ans=(ans*10)+(s[i]-'0');
            if(ans*sign>INT_MAX){
            return INT_MAX;
            }else if(ans*sign<INT_MIN){
            return INT_MIN;
            }
            i++;
            
        }

        if(sign==-1){
            return (int)(ans*sign);
        }
        return (int)ans;
        // int cntn=0;
        // int cntp=0;
        // string anss="";
        // long long ans=0;;
        // int i=0;
        // string sign="pos";
        // // if(s[0]=='-'){
        // //     sign="neg";
        // //     i=1;
        // // }else{
        // //     sign="pos";
        // // }
        // for(i;i<s.size();i++){
        //     if(s[i]==32 && anss==""){
        //         continue;
        //     }else if(s[i]=='-' && anss=="" && cntn==0){
        //         sign="neg";
        //         cntn++;
        //     }else if(s[i]=='+' && anss=="" && cntp==0){
        //         sign="pos";
        //         cntp++;
        //     }else if(s[i]<47 || s[i]>57){
        //         break;
        //     }else{
        //         anss+=s[i];
        //         ans=(ans*10)+s[i]-'0';
        //     }
        // }
        // if(anss==""){
        //     return 0;
        // }
        // if(sign == "pos" && ans > INT_MAX) return INT_MAX;
        // if(sign == "neg" && ans > INT_MAX+1LL) return INT_MIN;
        // if(sign=="pos"){
        //     return (int)ans;
        // }else{
        //     ans=(int)ans;
        //     return -ans;
        // }
        // return -1;
    }
};