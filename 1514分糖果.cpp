/*题目描述
有10个小朋友围成一圈分糖果，老师顺次分给每人一定数量糖果（初始值为偶数）然后按照下列规则调整，所有小朋友同时把自己的糖果分一半给右边的人，糖果数变为奇数的人，向老师补要一块糖果，问经过多少次调整后，大家糖果数一样多，且每人多少块。建立两个函数，一个负责传递糖果，一个负责判断所有人的糖果是否相等。
输入
12 2 8 22 16 4 10 6 14 20

输出
16 18

样例输入
样例输出
提示*/
#include <iostream>
using namespace std;
static int a[10];
int pass()
{
    int temp = a[9];
    for(int i = 9; i > 0; i--)
    {
        a[i] = a[i] / 2 + a[i - 1] / 2;

    }
    a[0] = a[0] / 2 + temp / 2;

    for(int i = 0; i < 10; i++)
        if(a[i] % 2 != 0)
            a[i]++;
}
int judge()
{
    int sum = 0, n = 0;
    while(1)
    {
        for(int i = 0; i < 10; i++)
            sum += a[0] - a[i];
        if(sum == 0)
        {
            cout << n << " " << a[0] << endl;

            return 0;
        }
        pass();
        n++;
        sum = 0;
    }
}
int main()
{
    for(int i = 0; i < 10; i++)
        cin >> a[i];

    judge();
	system("pause");




    return 0;
}
