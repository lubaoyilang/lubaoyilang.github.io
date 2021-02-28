/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 *
 * https://leetcode-cn.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (43.75%)
 * Likes:    2192
 * Dislikes: 0
 * Total Accepted:    538.6K
 * Total Submissions: 1.2M
 * Testcase Example:  '"()"'
 *
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
 * 
 * 有效字符串需满足：
 * 
 * 
 * 左括号必须用相同类型的右括号闭合。
 * 左括号必须以正确的顺序闭合。
 * 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：s = "()"
 * 输出：true
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：s = "()[]{}"
 * 输出：true
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：s = "(]"
 * 输出：false
 * 
 * 
 * 示例 4：
 * 
 * 
 * 输入：s = "([)]"
 * 输出：false
 * 
 * 
 * 示例 5：
 * 
 * 
 * 输入：s = "{[]}"
 * 输出：true
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 
 * s 仅由括号 '()[]{}' 组成
 * 
 * 
 */

// @lc code=start


#include <string.h>
bool isValid(char * s){

    int len = strlen(s);
    if (len<=0 || len%2 != 0){
        return false;
    }
    char *stackArray = (char*)malloc(sizeof(char)*len/2+1);
    int stackTop = -1;
    bool isBack = false;
    for (int i = 0; i < len; i++)
    {
        if (s[i]=='(' || s[i]=='{' || s[i]=='['){
            
            stackTop++;
            stackArray[stackTop] = s[i];
            continue;
            
        }
        if (s[i]==')' || s[i]=='}' || s[i]==']'){
            
            if (stackTop == -1){
                return false;
            }
            
            if ((s[i]==')' &&stackArray[stackTop]=='(') || (stackArray[stackTop]=='{' && s[i]=='}')   || (stackArray[stackTop]=='[' && s[i]==']'))
            {
                stackTop--;
                continue;
            }else{
                return false;
            }
        }
    }
    
    return stackTop==-1?true:false;
    

    
    
}
// @lc code=end

