class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>preSumMap;
        int count=0;
           int sum =0;
           preSumMap[0]=1;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
           
            int rem = sum -k;
            if( preSumMap.find(rem) != preSumMap.end()) {
                count += preSumMap[rem];
            }
            preSumMap[sum]++;
        }
        return count;
    }
};