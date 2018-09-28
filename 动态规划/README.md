# 重点突出

1. 动态规划是什么？

   借用胡能尧大佬的话：动态规划是一种思想

   动态规划的两大要素：状态 、 转移

   算法中的每一个状态能否表示出来？状态间的转移方程是否可以给出？能解决这两个问题，那么就可以使用动态规划。

# 参考链接

1. 《背包九讲》

   绝对的经典，我存储的是老的版本，个人觉得这一版本比起新版好一点，地址在本目录下。

2. 

# 练习题

题目全部存放在problem文件夹下

## 0.经典练习题

1. 最长下降子序列：[noip2004 合唱队形](https://vijos.org/p/1098)
2. 最长公共子序列：[hdu1159 Common Subsequence](http://acm.hdu.edu.cn/showproblem.php?pid=1159)
3. 环形dp：[NOIP2006 能量项链](https://vijos.org/p/1312)
4. 区间dp：[Sdoi2008 石子合并](https://www.lydsy.com/JudgeOnline/problem.php?id=3229)
5. 树形dp：[NOIP2003 加分二叉树](https://vijos.org/p/1100)

## 1.背包dp

1. 01背包：[51nod1085 背包问题](http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1085)

   解法：1082-1.cpp

2. 多重背包：[51nod 1086 背包问题 V2](http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1086)

   基础解法-O(w*Σc[i])：

   进阶解法-二进制优化 O(w*Σlog c[i]) ：

   进阶解法-单调队列优化 O(w*n)：

3. 有依赖的背包：[vijos1313 金明的预算方案](https://vijos.org/p/1313)



# 扩展练习

1. 有依赖的背包：[vijos1180 选课](https://vijos.org/p/1180)
2. [vijos1059 积木城堡](https://vijos.org/p/1059)