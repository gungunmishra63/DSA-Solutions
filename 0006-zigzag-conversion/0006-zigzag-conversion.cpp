class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size())
            return s;

        vector<string> rows(numRows);
        int curRow = 0;
        bool down = true;

        for (char c : s) {
            rows[curRow] += c;

            if (curRow == 0)
                down = true;
            else if (curRow == numRows - 1)
                down = false;

            curRow += down ? 1 : -1;
        }

        string ans;
        for (string row : rows)
            ans += row;

        return ans;
    }
};