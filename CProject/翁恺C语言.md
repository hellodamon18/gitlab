# 翁恺C语言

[TOC]

### P1 1.1.1 计算机和编程语言

* 计算机如何解决问题

  > 按指令执行

* 程序+算法



### P2 1.1.2 计算机的思维方式

* 解释
* 编译

* 解释语言vs编译语言



### P3 1.2.1 为什么是C

[Tiobe榜单](https://www.tiobe.com/tiobe-index/)

* 现代编译语言的语法差异小



### P4 1.2.2 简单历史

* C语言从B语言发展，B语言是BCPL发展，BCPL是从fortran发展而来
* `K&R the C`
* 1989年 ANSI C
* 1990年ISO——C89
* `C95`和 `C99`



### P5 1.2.3 编程软件

* 操作系统
* 嵌入式系统
* 驱动程序
* 底层驱动
* `开发效率`

> 编辑器+编译器



### P6 1.3.1 第一个C程序

```C
#include <stdio.h>

int main()
{
    printf("hello world!\n");
    return 0;
}
```

### P7 1.3.2 详解第一个程序

* 库
* 打印输出

* 不用中文

### P8 1.3.3 做点计算

```C
#include <stdio.h>

int main()
{
    printf("%d\n", 12+34);
    return 0;
}
```

### P9 1.3.4 Mac OS X如何在命令行编辑、编译和运行C程序

```C
#include <stdio.h>

int main (int argc, char const *argv[])
{
    printf("hello damon!\n");
    return 0;
}
```



### P10 2.1.1 第二周



### P11 2.2.1 变量定义

* 变量定义

  > <类型名称><变量名称>
  >
  > int price;

```C
#include <stdio.h>

int main()
{
    int price = 0;

    printf("Please input price: ");
    scanf("%d", &price);

    int change = 100 - price;
    printf("The remain is: %d\n", change);
    
    return 0;
}
```

* 变量名字 `标识符`

  > 由字母、数字、下划线组成，排除保留字

### P12 2.1.3 变量赋值和初始化

* 赋值和初始化

  `int price = 0`

​		`a=b`和`b=a`的区别

> 变量最好初始化
>
> 变量在初始化之前必须声明或定义
>
> 变量需要有明确的数据类型



### P13 2.1.4 变量输入

`scanf`用户输入类型不是制定类型的思考



### P14 2.1.5 常量vs变量

```C
#include <stdio.h>

int main()
{
    const int AMOUNT = 100;
    int price = 0;

    printf("Please input price: ");
    scanf("%d", &price);

    int change = AMOUNT - price;
    printf("The remain is: %d\n", change);
    
    return 0;
}

// const int AMOUNT = 100; // C99 常量，一般全大写
// 方便理解数字含义
// 方便修改常量赋值

// const修饰符，放在int前面，表述变量初始化之后不能再修改了


#include <stdio.h>

int main()
{
    int amount = 0;
    int price = 0;

    printf("Please input price total: ");
    scanf("%d %d", &price, &amount);

    int change = amount - price;
    printf("The remain is: %d\n", change);
    
    return 0;
}
```

### P15 2.1.6 浮点数

```C
#include <stdio.h>

int main()
{
    int foot = 0;
    int inch = 0;

    printf("Please input foot inch: ");
    scanf("%d %d", &foot, &inch);

    printf("The height is: %f\n", (foot + inch/12)*0.3048);		// 整形运算
    
    return 0;
}

// 整数运算的结果只能为整数
// 解决方法：使用浮点数或者浮点强制转换符

// 浮点数与整数运算，整数先转换为浮点型然后参与计算

#include <stdio.h>

int main()
{
    double foot = 0;		// 输入浮点型数据
    double inch = 0;

    printf("Please input foot inch: ");
    scanf("%lf %lf", &foot, &inch);

    printf("The height is: %f\n", (foot + inch/12)*0.3048);

    return 0;
}
```



### P16 2.2.1 表达式

* 运算符 `operator`

  > 进行运算的动作，例如加减乘除等
  >
  > `+` `-` `*` `/` `%` `()`

* 算子 `operand`

  > 参与运算的值

```C
// 计算时间差
#include <stdio.h>

int main()
{
    int hour1, hour2;
    int minute1, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    if (hour1 > hour2) 
    {
        printf("case1: %d %d\n", hour1, hour2);
        if (minute1 > minute2) {
            printf("%d %d\n", hour1-hour2, minute1-minute2);
        } else {
            printf("%d %d\n", hour1-hour2-1, minute1+60-minute2);
        }
    } 
    else if (hour1 < hour2)
    {
        printf("case2: %d %d\n", hour1, hour2);
        if (minute1 > minute2) {
            printf("%d %d\n", hour2-hour1-1, minute2+60-minute1);
        } else {
            printf("%d %d\n", hour2-hour1, minute2-minute1);
        }       
    } 
    else 
    {
        printf("case3: %d %d\n", hour1, hour2);        
        if (minute1 > minute2) {
            printf("%d %d\n", hour2-hour1, minute1-minute2);
        } else {
            printf("%d %d\n", hour2-hour1, minute2-minute1);
        } 
    }
    int t1 = hour1*60 + minute1;
    int t2 = hour2*60 + minute2;

    // 其他方法  
    // if (t1 > t2) 
    {
        printf("The time diff is: %d %d\n", abs(t1-t2)/60, abs(t1-t2)%60);
    }
    // else
    // {
    //     printf("The time diff is: %d %d\n", (t2-t1)/60, (t2-t1)%60);

    // }
    return 0;
}
```



### P17 2.2.2 运算符优先级

| 优先级 | 运算符 |   运算   | 结合关系 | 举例 |
| :----: | :----: | :------: | :------: | :--: |
|   1    |   +    | 单目不变 | 自右向左 | a*+b |
|   1    |   -    | 单目取负 | 自右向左 | a*-b |
|   2    |   *    |    乘    | 自左向右 | a*b  |
|   2    |   /    |    除    | 自左向右 | a/b  |
|   2    |   %    |   取余   | 自左向右 | a%b  |
|   3    |   +    |    加    | 自左向右 | a+b  |
|   3    |   -    |    减    | 自左向右 | a-b  |
|   4    |   =    |   赋值   | 自右向左 | a=b  |



### P18 2.2.3 交换变量

> 利用中间变量



### P19 2.2.4 复合赋值和递增递减

* `+=` `-=` `*=` `/=` `%=`

```C
// 中间不能有空格

// 右边式子算完才参与计算
total *= sum + 12;
// total = total * (sum + 12)
```

* `++` `--`

```c
// 前缀形式 ++a  a=a+1, a+1以后的值
// 后缀形式 a++  a=a+1, a+1以前的值
#include <stdio.h>

int main()
{
    int a = 10;

    printf("a++ = %d\n", a++);
    printf("a = %d\n", a);

    a = 10;
    printf("++a = %d\n", ++a);
    printf("a = %d\n", a);

    return 0;
}

// output
++ = 10
a = 11
++a = 11
a = 11
```



### P20 2.2.5 如何使用PAT系统来做编程练习题

`浙大 PAT`

[乙级](https://pintia.cn/problem-sets/994805260223102976/problems/type/7)

[甲级](https://pintia.cn/problem-sets/994805342720868352/problems/type/7)

[顶级](https://pintia.cn/problem-sets/994805148990160896/problems/type/7)

[other](https://pintia.cn/problem-sets/dashboard)

### P21 3.0.1 PAT再解释

> PAT系统输入输出需要规范



### P22 3.0.2 第二周习题解析



### P23 3.0.3 0的故事

> `0`



### P24 3.1.1 做判断

* `if`

```C
if(条件成立) {
  ...
}
```



### P25 3.1.2 判断的条件

| 运算符 | 意义       |
| ------ | ---------- |
| ==     | 相等       |
| !=     | 不相等     |
| >      | 大于       |
| >=     | 大于或等于 |
| <      | 小于       |
| <=     | 小于或等于 |

> 两个值的关系符合关系运算符，结果为1，否则为0

 <u>**关系运算符的的优先级比算术运算的低，比赋值运算高**</u>

<u>**判断是否相等的优先级比其他的低，连续的关系运算是从左到右进行**</u>



### P26 3.1.3 找零计算器

`if`



### P27 3.1.4 否则的话

```C
if () {
  ...
} else {
  ...
}
```

### P28 3.1.5 if语句再探

> 注意`if`后面没有`;`



### P29 3.2.1 嵌套的if-else

* `else`总是和最近的那个`if`匹配
* 缩进格式不能暗示`else`的匹配
* 在`if`或`else`后面总是用`{}`

### P30 3.2.2 级联的if-else if

```C
if () {
  ...
} else if () {
  ...
} else if () {
  ...
}
...
  else {
    
  }
```



### P31 3.2.3 if-else的常见错误

* 忘记大括号

  > if/else后面加上大括号，即便只有一条语句

* `if`后面多加`;`

* 错误使用`==`和`=`，`if`只要求`()`里面是零或者非零

* 注意代码风格，注意缩进



### P32 3.2.4 多路分支

```C
// 控制表达式只能是整数类型
// 常量可以是常数，也可以是常数计算的表达式
// debug 直接进入对应常量的case里面，前面的不判断，不同于if-else if
switch( 控制表达式 ) {
  case 常量:
    ...;
    break;
  case 常量:
    ...;
    break;
  default:
    ...;
    break;
}
```

[]()
