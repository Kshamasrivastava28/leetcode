class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int low = 1, high = 1000000000;
        long k=0;
        while (low <= high) {
            // Safe calculation of mid to avoid overflow
            k = low + (high - low) / 2;
            
            long long h = 0;
            for (int i = 0; i < piles.size(); i++) 
                h += (piles[i] + k - 1) / k; // Ceiling without floating-point
            
            if (h > H) 
                low = k + 1; // k is too slow
            else 
                high = k - 1; // k might work, try smaller
        }
        return low; // Minimum k found
    }
};