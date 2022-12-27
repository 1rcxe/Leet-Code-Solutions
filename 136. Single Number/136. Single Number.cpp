class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0 ;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size() ; i+=2 ){
            if (i!=nums.size()-1){
                if (nums[i]!=nums[i+1]){
                    x = nums[i];
                    break;
                }
            }
            else{
                x = nums[i];
                break;
            }
        }
        return x;
    }
};
