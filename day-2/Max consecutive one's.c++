class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int sum=0;
       int c=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
               c++;
               sum=max(c,sum);
           }else{
               c=0;
           }
       }
       return sum; 
    }
};
