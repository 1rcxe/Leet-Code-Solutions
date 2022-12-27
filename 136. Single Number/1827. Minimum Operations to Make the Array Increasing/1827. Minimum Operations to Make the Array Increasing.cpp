class Solution {
public:
    int minOperations(vector<int>& nums) {
        int x = 0 ,current=nums[0];
        for (int i = 1 ; i < nums.size() ; i++){
            if (nums[i]<=current){
                int add= current-nums[i]+1;
                x+=add;
                current=nums[i]+add;
            }
            else{
                current = nums[i];
            }


        }
        return x ;
    }
};
