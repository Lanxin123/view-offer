class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cnt1(26,0);
        vector<int> cnt2(26,0);
        for(char c : s)
            cnt1[c-'a']++;
        for(char c : t)
            cnt2[c-'a']++;
        if(cnt1==cnt2)
            return true;
        return false;
    }
};