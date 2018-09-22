# 参考链接

1. “从零开始学算法：高精度计算”：http://www.cnblogs.com/ECJTUACM-873284962/p/6509429.html

   ps：基础解法解析

2. “高精度计算模板”：https://blog.csdn.net/kele52he/article/details/77484529

   ps：常用模板

3. karatsuba算法：http://blog.miskcoo.com/2014/10/karatsuba-multiplication

   ps：个人感觉没啥用，思路比起 FFT 简单点，但是代码量比起 FFT 感觉也没简单到哪儿去，就当扩展视野吧

4. 快速傅里叶：http://blog.miskcoo.com/2015/04/polynomial-multiplication-and-fast-fourier-transform#i-15

   ps：我看过讲的最好的

# 重点突出

1. 压位：尤其需要注意，高精度乘法时，避免爆int
2. 去掉高位无效0：减法
3. 方向存储：数字字符串是“123”，但是我们存储是：321
4. 高精度各种运算可以理解成多项式的相应处理

# 高精度加法

练习题：https://www.luogu.org/problemnew/show/P1601

基础解法：1601-1.cpp

进阶解法-压位：1601-2.cpp

# 高精度减法

练习题：https://www.luogu.org/problemnew/show/P2142

基础解法：2142-1.cpp

进阶解法-压位：2142-2.cpp

# 高精度乘法

练习题目：

* 数据规模：5k  http://blog.miskcoo.com/2014/10/karatsuba-multiplication
* 数据规模：10w  http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1028
* 数据规模：10w http://codevs.cn/problem/3123/

# 高精度除法

练习题目：

* 数据规模：5k https://www.luogu.org/problemnew/show/P1480
* http://codevs.cn/problem/3118/

# 扩展练习

* [HNOI2004]高精度开根：<https://www.luogu.org/problemnew/show/P2293>
* 高精求小数幂：<https://www.luogu.org/problemnew/show/P1517>
* 素数密度：<https://www.luogu.org/problemnew/show/P1835>
* 开根：<http://codevs.cn/problem/3119/>
* 阶乘：<http://codevs.cn/problem/4165/>
* 大实数乘法：<http://codevs.cn/problem/4384/>