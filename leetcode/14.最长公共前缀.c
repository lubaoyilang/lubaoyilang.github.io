/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (39.22%)
 * Likes:    1475
 * Dislikes: 0
 * Total Accepted:    454.3K
 * Total Submissions: 1.2M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 * 
 * 如果不存在公共前缀，返回空字符串 ""。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：strs = ["flower","flow","flight"]
 * 输出："fl"
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：strs = ["dog","racecar","car"]
 * 输出：""
 * 解释：输入不存在公共前缀。
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 0 
 * 0 
 * strs[i] 仅由小写英文字母组成
 * 
 * 
 */

// @lc code=start


#include<string.h>
#include<stdio.h>
#include <stdlib.h>


char * longestCommonPrefix(char ** strs, int strsSize){
        
       if (strsSize == 0) return "";
       if (strsSize == 1) return strs[0];
       

       size_t smallLen = 0;
        for (int i = 0; i < strsSize; i++)
        {
            char * list = strs[i];
            if (strlen(list)==0)
            {
                return "";
            }
            
            if (smallLen!=0)
            {
                if (smallLen> strlen(list))
                {
                    smallLen = strlen(list);
                }
                continue;
            }else{
                smallLen = strlen(list);
            }
        }

        if (smallLen == 0)
        {
            return "";
        }

        char * prefix = (char*)malloc(sizeof(char)*smallLen+1);
        memset(prefix,0,sizeof(char)*smallLen+1);

        
        for (int j = 0; j < smallLen; j++)
        {
            char temp = '\0';
            for (int i = 0; i < strsSize; i++)
            {
                char *obj = strs[i];

                if (strlen(obj)==0)
                {
                    continue;
                }
                
                

                if (temp == '\0')
                {
                    temp = obj[j];
                    continue;
                }else{
                    if (temp == obj[j])
                    {
                        continue;
                    }else{
                        temp = '\0';
                        break;
                    }
                    
                }

            }
            if (temp != '\0')
            {
                prefix[j] = temp;
            }else{
                return prefix;
            }
            
                
        }

        return prefix;
        
        
        
}

// @lc code=end



/*

int main(int argc, const char * argv[]) {
    
    char* a1 = (char*)malloc(sizeof(char)*3);
//    char* a2 = (char*)malloc(sizeof(char)*1);
    char* a3 = (char*)malloc(sizeof(char)*1);

    a1 = "";

//    a1[0] = 'a';
//    a1[1] = 'b';
//    a1[2] = 'b';

//    a2[0] = 'a';
//    a2[1] = 'b';
//    a2[2] = 'x';

    a3[0] = 'b';

    char** p = (char**)malloc(sizeof(char*)*2);

    p[0] = a1;
    p[1] = a3;

    char *ret = longestCommonPrefix(p,2);
    printf("%s",ret);
    return 0;
}



*/