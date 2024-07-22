class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        double pre = 1, suff = 1;
        double product = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (pre == 0)
                pre = 1;
            if (suff == 0)
                suff = 1;

            pre *= nums[i];
            suff *= nums[n - i - 1];

            product = max(product, max(pre, suff));
        }
        return product;
    }
};