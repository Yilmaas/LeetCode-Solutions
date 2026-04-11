class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int bestArea = 0;

        while (l < r) {
            int tempArea = (r - l) * min(height[l], height[r]);
            bestArea = max(bestArea, tempArea);

            if (height[l] <= height[r]) l++;
            else r--;
        }

        return bestArea;
    }
};