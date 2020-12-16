/*题目描述
.编写一个函数，函数的功能是移动字符串中的内容。移动的规则如下：把第1到第m个字符，平移到字符串的最后；再把第m+1到最后的字符移动到字符串的前部。

输入
手动输入字符串和m 例如： ABCDEFGHIJK 3

输出
DEFGHIJKABC

样例输入
ABCDEFGHIJK 3
样例输出
DEFGHIJKABC*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    char arr[100]="" ;int num=0;cin >>arr>>num;
    int max =(int) strlen(arr);
    int index=0;
    char temp1[100]="";
    for(int i=0;i<num;i++)
    {
        temp1[max-num+i]=arr[i];
    }
    for(int i=num;i<max;i++)
    {
        temp1[index]=arr[i];
        index++;
    }
    cout<< temp1;
	system("pause");
    return 0;
}
