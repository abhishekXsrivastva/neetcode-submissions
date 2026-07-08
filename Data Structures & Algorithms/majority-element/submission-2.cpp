class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0, freq = 0;
        for(int i = 0; i < nums.size(); i++){
            if(freq == 0){
                res = nums[i];
                freq = 1;
            }else if(res == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return res;
    }
};