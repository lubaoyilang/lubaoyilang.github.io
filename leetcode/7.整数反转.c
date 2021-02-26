/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 *
 * https://leetcode-cn.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (34.98%)
 * Likes:    2548
 * Dislikes: 0
 * Total Accepted:    590.3K
 * Total Submissions: 1.7M
 * Testcase Example:  '123'
 *
 * 给你一个 32 位的有符号整数 x ，返回 x 中每位上的数字反转后的结果。
 * 
 * 如果反转后整数超过 32 位的有符号整数的范围 [−2^31,  2^31 − 1] ，就返回 0。
 * 假设环境不允许存储 64 位整数（有符号或无符号）。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：x = 123
 * 输出：321
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：x = -123
 * 输出：-321
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：x = 120
 * 输出：21
 * 
 * 
 * 示例 4：
 * 
 * 
 * 输入：x = 0
 * 输出：0
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * -2^31 
 * 
 * 
 */

// @lc code=start


int reverse(int x){

    
    int ret = 0;

    // int total = abs(x);


    while (x<=0)
    {
        int rtm = x % 10
        
        ret = ret * 10 + rtm;

        x = x/10

    }

    return ret;
    


    


}
// @lc code=end

