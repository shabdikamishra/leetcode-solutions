class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {

        const int INF = 2e9;
        vector<int> max_val(n, INF);
        max_val[0] = 0;

        for (const auto& r : restrictions) {
            max_val[r[0]] = min(max_val[r[0]], r[1]);
        }

        for (int i = 0; i < n - 1; ++i) {
            max_val[i + 1] = min(max_val[i + 1], max_val[i] + diff[i]);
        }

        for (int i = n - 2; i >= 0; --i) {
            max_val[i] = min(max_val[i], max_val[i + 1] + diff[i]);
        }

        int ans = 0;
        for (int val : max_val) {
            ans = max(ans, val);
        }

        return ans;
    }
};