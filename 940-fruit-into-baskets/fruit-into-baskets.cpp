class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        unordered_map<int, int> mp;
        
        int left = 0;
        int ans = 0;
        
        for (int right = 0; right < fruits.size(); right++) {
            
            // Add current fruit
            mp[fruits[right]]++;
            
            // If more than 2 fruit types
            while (mp.size() > 2) {
                
                mp[fruits[left]]--;
                
                // If frequency becomes 0, remove it
                if (mp[fruits[left]] == 0) {
                    mp.erase(fruits[left]);
                }
                
                left++;
            }
            
            // Current valid window length
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};