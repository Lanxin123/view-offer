class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string cm;
        int cm_i = 0;
        int n = strs.size();
        if (n == 0) return cm;
        if (n == 1) return strs[0];
        while (true) {
            char label = strs[0][cm_i];
            for (int s_i = 1; s_i < n; s_i++) {
                if (cm_i >= strs[s_i].length() || strs[s_i][cm_i] != label) return cm;
            }
            cm += label;
            cm_i++;
        }
        return cm;
    }
};//先看所有的第一个再看所有的第二个