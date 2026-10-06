class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0, right = 0;
        for (char c : s) c == '(' ? left++ : (left ? left-- : right++);
        return left + right;
    }
};