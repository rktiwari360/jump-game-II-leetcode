class Solution {
public:
    int jump(vector<int>& nums) {
        int maxjump =0;
        int minjump =0;
        int jump =0;
        int n = nums.size();
        for(int i =0;i<n-1;i++){
            if(i+nums[i] > maxjump )
                maxjump = i+nums[i];
            if(i == minjump){
                jump++;
            minjump = maxjump;
            
            }
        }
        
        
        return jump;
        
    }
};
