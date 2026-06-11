class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;
        int cnt=0;
        int longest =1;
        int lastSmallest = INT_MIN;
        sort(nums.begin(), nums.end());

        for(int i =0; i<n;i++)
        {
            if(nums[i]-1 == lastSmallest)
            {
                cnt = cnt+1;
                lastSmallest = nums[i];
            }

            else if ( nums[i] != lastSmallest)
            {
                cnt =1;
                lastSmallest = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;

    }
};