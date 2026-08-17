class Solution {
public:
int maxi(vector<int>&piles){
    int max_val=INT_MIN;
    for(auto i : piles){
        max_val = max(max_val,i);
    }
    return max_val;
}
    int banana_count(vector<int>&piles , int mid){
  int n = piles.size();
  int speed = 0;
  for(int i=0;i<n ;i++){
    speed += ceil(double(piles[i])/double(mid));
  }
  return speed;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
     int n = piles.size();
     int  l=1;
     int r = maxi(piles);
     while(l<r){
        int mid = (l+r)/2;
        int speed = banana_count(piles,mid);
        if(speed <=h)r=mid;
        else l=mid+1;
     }   
     return l;
    }
};
