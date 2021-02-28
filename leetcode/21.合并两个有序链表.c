/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (65.38%)
 * Likes:    1564
 * Dislikes: 0
 * Total Accepted:    480.7K
 * Total Submissions: 734.9K
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：l1 = [1,2,4], l2 = [1,3,4]
 * 输出：[1,1,2,3,4,4]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：l1 = [], l2 = []
 * 输出：[]
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：l1 = [], l2 = [0]
 * 输出：[0]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 两个链表的节点数目范围是 [0, 50]
 * -100 
 * l1 和 l2 均按 非递减顺序 排列
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    if (l1==NULL || l2== NULL)
    {
        return l1==NULL ? l2 : l1;
    }

    struct ListNode* l1Temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* l2Temp = (struct ListNode *)malloc(sizeof(struct ListNode));

    while (l1 != NULL)
    {
        
        if (l2 == NULL)
        {
            return l1;
        }
        

        l1Temp->val = l1->val;
        l1Temp->next = l1->next;



        if (l1->val <= l2->val)
        {
            

            l1->next = l2;

            l2 = l2->next;


        }else{
            
        }
        

    }
    
    

}
// @lc code=end

