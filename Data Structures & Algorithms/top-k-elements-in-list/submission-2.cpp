class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> buckets;
        for(int i = 0; i < n; i++){
            buckets[nums[i]]++;   
        }
        while(k>0){
            int bruh = 0;
            for(int i = 0; i < n; i++){
                bruh = max(bruh,buckets[nums[i]]); 
            }
            for(auto& [key,val] : buckets){
                if(val == bruh){ 
                    ans.push_back(key);
                    val = 0;
                    k--;
                }
            }
            
        }
            

        return ans;
    }
};
