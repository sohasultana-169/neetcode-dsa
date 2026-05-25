class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroes = 0;
        int n = nums.size();
        long long product = 1;

        for(int num : nums){
            if(num == 0){
                zeroes++;
            }else{
                product *= num;
            }
        }

        vector<int> result(n,0);
        if(zeroes == 0){
            for(int i=0;i<n;++i){
                result[i] = product / nums[i];
            }
        }else if(zeroes == 1){
            for(int i = 0;i<n;++i){
                if(nums[i] == 0){
                    result[i] = product;
                }else{
                    result[i] = 0;
                }
            }
        }

        return result;

        
    }
};
