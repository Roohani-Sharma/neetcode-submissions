class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int max_area=INT_MIN;
        int l = 0;
        int r = n-1;
        while(l<=r){
            int width = r-l;
            int length = min(heights[l],heights[r]);
            int area = width*length;
            max_area=max(max_area,area);
           if(heights[l]<heights[r])l++;
           else r--;
        }
        return max_area;
    }
};
