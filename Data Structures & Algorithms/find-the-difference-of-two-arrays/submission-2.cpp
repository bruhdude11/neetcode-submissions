class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_map <int,int> hashmap1;
        unordered_map <int,int> hashmap2;
        int n = nums1.size();
        int m = nums2.size();
        for(int& x : nums1){
            hashmap1[x]++; 
        }
        for(int& y : nums2){
            hashmap2[y]++;
        }
    
        for(int& y: nums2){
            if(hashmap1.find(y) ==  hashmap1.end()&& hashmap1[y]!=-1)
                ans[1].push_back(y);
                hashmap1[y] = -1;
        }
        for(int& x : nums1){
            if(hashmap2.find(x) ==  hashmap2.end() && hashmap2[x]!= -1)
                ans[0].push_back(x);
                hashmap2[x] = -1;
        }
        return ans;
    }
};