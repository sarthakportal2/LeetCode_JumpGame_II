class Solution {
public:
int jump(vector<int>& nums) {
    //min.runtime(8ms.)T(C(N)=O(N)) and S(C(N))=O(1) as it require no additional space iteratively to next contigous memory alloc position
    int maxjumpdist= 0;int  currentmax = 0;int jump= 0;//initializing the variables
    for (int i = 0; i < nums.size() - 1; ++i) {//iterating throgh nums's length
      maxjumpdist= max(maxjumpdist, i + nums[i]);//maximizing the jump distance from current pos consecuitively
      if (jump>= nums.size() - 1){++jump;break;}//incrementing minimum jump val 
      if (i ==  currentmax){++jump;currentmax = maxjumpdist;} // updating the jump value's
      }return jump;}};//printing jump 
