class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(int num : nums){
            minHeap.push(num);
        }

        int result = 1;
        int temp = 1;
        int prev = minHeap.top();
        minHeap.pop();

        while(minHeap.size()){
            int next = minHeap.top();
            minHeap.pop();
            if(next == prev) continue;
            if(next - prev == 1){
                temp++;
            }else{
                result = max(result,temp);
                temp = 1;
            }

            prev = next;
        }

        result = max(result,temp);

        return result;

    }
};
