/*题目描述
JOBDU最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，但却读不懂它的意思。例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？

输入
每个测试案例为一行，表示一句英文句子。
我们保证一个句子的单词数不会超过600，每个单词的长度也不会超过30。但是需要注意的是Fish是个不拘小节的人，有时候两个单词中间可能会有很多空格。为了方便起见，你可以认为一行的字符总数不会超过50000个，标点符号可以和普通字母一样处理。
输出
对应每个测试案例，把翻转后的正确的句子单独输出一行。

样例输入
student. a am I
样例输出
I am a student.*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string arr[600]={" "};
    int i=0;
    while ( cin>>arr[i] )
        i++;
    for(int j=0;j<i;j++)
    {
        if(j<i-1)
            cout<<arr[i-1-j]<<" ";
        else
            cout<<arr[i-1-j];
    }
	system("pause");
    return 0;
}
//结束需要ctrl+z
