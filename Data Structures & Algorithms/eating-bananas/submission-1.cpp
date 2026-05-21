class Solution {
public:

    int minEatingSpeed(vector<int>& piles, int h) {

        int high = 0;

        for (int pile : piles) {
            high = max(high, pile);
        }

        int low = 1;
        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (is_possible_to_eat(piles, mid, h)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }

    bool is_possible_to_eat(vector<int>& piles, int k, int h) {

        long long hours = 0;

        for (int pile : piles) {

            hours += (pile + k - 1) / k;
        }

        return hours <= h;
    }
};