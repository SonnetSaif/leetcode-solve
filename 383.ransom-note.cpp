class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        for(auto c: ransomNote) mp[c]++;

        for(auto c: magazine) mp[c]--;

        for(auto c: mp){
            if(c.second > 0) return false;
        }

        return true;
    }
};
