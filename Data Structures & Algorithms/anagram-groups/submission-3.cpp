class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string key;
        unordered_map <string, vector<string>> res;
        for(const auto& str:strs){
            vector<int> count (26,0);
            for(char c : str){
                count[c-'a']++;
            }
            key = "";
            for(int i = 0; i < 26; i++){
                
                key += to_string(count[i]) +',' ; 
                // when the number gets to 10+, the number could stick together making it easy to create a similar key with a word that is not in the group.  
            }
            res[key].push_back(str);
            
        }
        vector<vector<string>> result;
        for(auto& pair : res){
            result.push_back(pair.second);
        }
        return result;
    }   
};
