class Solution {
public:
    bool static compare (pair<int,int>p1 ,pair<int,int> p2){
        if (p1.first == p2.second){
            return p1.second < p2.second;
        }
        return p1.first < p2.first;

    }
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int> v;
        
        int n =nums.size();
        
        vector<pair<int,int>> inter;

        for(int i = 0 ; i < n ; i++ ){
            inter.push_back({nums[i],i});
        }

        sort(inter.begin(),inter.end(),compare);

        int i = 0;

        int j = n-1;

        while (i<j){
            if (inter[i].first+inter[j].first==t){
                v.push_back(inter[i].second);
                v.push_back(inter[j].second);
                return v;
            }
            else if (inter[i].first+inter[j].first<t){
                i++;
            }
            else{
                j--;
            }
        }
        return v;
    }
};
