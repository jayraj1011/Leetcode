class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        auto comp=[&](char a,char b){
        if(mpp[a]==mpp[b]) return a>b;
        return mpp[a]>mpp[b];
        };
        
        sort(s.begin(),s.end(),comp);
        return s;
    }
};