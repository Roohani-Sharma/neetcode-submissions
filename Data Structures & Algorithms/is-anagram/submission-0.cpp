class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m)return false;
        bool ok = true;
       
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto i : s)mp1[i]++;
        for(auto i : t)mp2[i]++;
        for( auto i : mp1){
            if(mp2[i.first]!=i.second){
                ok = false;
                break;
            }
        }
        return ok;
    }
};
