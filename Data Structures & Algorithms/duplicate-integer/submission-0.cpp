class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto i : nums)st.insert(i);
        int n=nums.size();
        int k=st.size();
        return (n==k)?false:true;
    }
};