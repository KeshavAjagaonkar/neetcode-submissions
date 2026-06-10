class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int countZero=0;
        int totalProd=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            countZero++;
            continue;
            }
            totalProd*=nums[i];
        }

        vector<int>ans(nums.size());
        if(countZero>1){
            for(int i=0;i<nums.size();i++){
                ans[i]=0;
            }
        }else if(countZero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=totalProd;
                }
                else{
                    ans[i]=0;
                }
            }
        }else{
            for(int i=0;i<nums.size();i++){
                ans[i]=totalProd/nums[i];
            }
        }

        return ans;

    }
};
