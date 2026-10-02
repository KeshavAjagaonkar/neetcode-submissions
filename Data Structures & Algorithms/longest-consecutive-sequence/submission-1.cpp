class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int currLng=1;
        int maxLng=1;

        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0 || n==1){
            return n;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }else if(nums[i+1]==nums[i]+1){
                currLng+=1;
                maxLng=max(maxLng,currLng);
            }else{
                currLng=1;
                maxLng=max(maxLng,currLng);
            }
        }

        return maxLng;
    }
};
