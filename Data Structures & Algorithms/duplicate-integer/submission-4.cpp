class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> freq;

        int n = nums.size();
        for(int i=0;i<n;i++){
            if(freq.find(nums[i]) != freq.end()){
                return true;
            }

            freq.insert(nums[i]);
        }

        return false;
    }
};