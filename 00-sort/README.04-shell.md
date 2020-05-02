![](./images/shell-sort.png)

Step1 将n个元素个数列分为5个小组，在每个小组内按直接插入法排序；
step2 在第i步，分组个数取 di+1 =（di +1）/2 {9，5，3，2，1}；相临两组之间的对应元素进行比较，如果ai>aj，则交换它们的位置；
Step3 当dK = 1的循环过程完成后，排序过程结束。

https://baike.baidu.com/item/Shell%E6%8E%92%E5%BA%8F/9796551?fr=aladdin


3 7 4 6 9 1 2
gap = {len/2} =3

3 7 4 | 6 9  1 | 2
2       3        6
  7       9       
    1        4
2 7 1 | 3  9  4| 6

gap = gap/2 =  1

2 | 7 |  1 | 3 |  9 | 4| 2

---------------------------------
8  9  1  7  2  3  5  4  6  0
gap = {len/2} =5
8  9  1  7  2| 3  5  4  6  0
3              8
   5              9
      1              4
         6              7
            0              2
3  5  1  6  0  8  9  4  7  2

gap = {gap/2} = 5/2 = 2
3  5| 1  6| 0  8| 9  4| 7  2|
0     1     3     7     9
   2     4     5     6     8
0  2  1  4  3  5  7  6  9  8

gap = {gap/2} = 2/2 = 1
0  1  2  3  4  5  6  7  8  9