class Solution {
public:
    int integerBreak(int n) {
        if (n <= 3) return n-1;
        
        if (n % 3 == 0) return pow(3, n/3);
        
        if (n % 3 == 1) return 4*pow(3, (n-4)/3);
        
        return 2*pow(3, (n-2)/3);
    }
};

// Why factor 2 && 3 ?
// 2 的个数必须 < 3 个.

// 对于: n >= 4, 有 2*(n-2) = 2n - 4 >= n;
// 因此, 所有 n >= 4, 都可以提取出一个 2, 不需要进行考虑
// 同时, 2*2*2 < 3*3
// 因此, 有三个以上的 2 时, 应该先提取出 3 来