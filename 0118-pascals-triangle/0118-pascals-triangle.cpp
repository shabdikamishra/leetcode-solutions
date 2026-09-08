class Solution {
public:
    vector<int> getRows(int rowIndex)
    {
        long long ans=1;
        vector<int> row;
        row.push_back(ans);

        for(int i=1; i<rowIndex;i++){
            ans= ans*(rowIndex -i)/i;
            row.push_back(ans);
        }
        return row;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i =1; i<= numRows; i++)
        {
            ans.push_back(getRows(i));
        }
        return ans;
    }
};