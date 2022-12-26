class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> bruh;
        for (int i = 0 ; i<n*2 ; i++){
            bruh.push_back(nums[i%n]);

        }
        return bruh;
    }
};
