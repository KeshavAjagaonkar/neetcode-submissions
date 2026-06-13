class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                if(s.find(nums[i]-1)!=s.end()){
                    continue;
                }else{
                    int count=0;
                    int num=nums[i];
                    while(s.find(num)!=s.end()){
                        count++;
                        num++;

                    }
                    maxlen=max(count,maxlen);
                }
            }
        }
        return maxlen;
    }
};
