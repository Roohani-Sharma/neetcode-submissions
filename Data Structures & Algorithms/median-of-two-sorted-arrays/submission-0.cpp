class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=0.0;
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            v.push_back(nums1[i]);
        }
         for(int i=0;i<nums2.size();i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int n= v.size();
       if(n%2 == 1){
        int  mid  = n/2;
        return v[mid];
       }
       else{
        int mid = n/2;
        ans = (v[mid] + v[mid-1])/2.0;
       }
     return ans;
    }
};
