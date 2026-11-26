class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_map <int,int> hashmap1;
        unordered_map <int,int> hashmap2;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < n; i++){
            hashmap1[nums1[i]]++; 
        }
        for(int i = 0; i< m; i++){
            hashmap2[nums2[i]]++;
        }
    
        for(int i = 0; i < m; i++){
            if(hashmap1.find(nums2[i]) ==  hashmap1.end()&& hashmap1[nums2[i]]!=-1)
                ans[1].push_back(nums2[i]);
                hashmap1[nums2[i]] = -1;
        }
        for(int i = 0; i < n; i++){
            if(hashmap2.find(nums1[i]) ==  hashmap2.end() && hashmap2[nums1[i]]!= -1)
                ans[0].push_back(nums1[i]);
                hashmap2[nums1[i]] = -1;
        }
        return ans;
    }
};