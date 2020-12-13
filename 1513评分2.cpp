/*题目描述
歌手大奖赛共有10位评委，为每位选手打分（double型）。预赛部分歌手的分数，为去掉1个最高分、1个最低分后其余8个分数的平均值；决赛部分歌手的分数，为去掉2个最高分、2个最低分后其余6个分数的平均值。通过键盘输入10位评委的打分，以及当前处于哪个阶段（预赛部分用1表示，决赛部分用2表示）。主函数中，只负责输入数据、调用分数计算函数、输出结果，评分计算部分编写独立函数完成。
输入
98.5 88 90 93 94 90.4 89 92 88.6 97 2

输出
91.4*/
#include<iostream>
using namespace std;
double stage1(double num[])
{
	for(int a=1;a<=9;a++)
    {
        for(int b=0;b<=9-a;b++)
        {
            double hold;
            if(num[b]>=num[b+1])
            {
                hold=num[b];
                num[b]=num[b+1];
                num[b+1]=hold;
            }
        }
	}
    double k;
	k=(num[1]+num[2]+num[3]+num[4]+num[5]+num[6]+num[7]+num[8])/8;
	return k;

}
double stage2(double num[])
{
	for(int a=1;a<=9;a++)
    {
        for(int b=0;b<=9-a;b++)
        {
            double hold;
            if(num[b]>=num[b+1])
            {
                hold=num[b];
                num[b]=num[b+1];
                num[b+1]=hold;
            }
        }
	}

    double k;
	k=(num[2]+num[3]+num[4]+num[5]+num[6]+num[7])/6;
	return k;

}
int main()
{
	double num[10];int k;
	for(int i=0;i<=9;i++)
		cin>>num[i];
	cin>>k;
	if(k==1)
		cout<<stage1(num);
    if(k==2)
		cout<<stage2(num);
	system("pause");
	return 0;
}
