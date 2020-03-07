#include <string>
#include<iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;
/*
string s1;
string s2=s1;
string s3="hiya";//拷贝初始化
string s4(10,'c');//直接初始化
string s5 = "hiya";
string s6("hiya");
string s7(10,'c');
string s8 = string(10,'c');//拷贝初始化
*/

/*
OS<<s 将s写到输出流os当中，，返回os
is>>s 从is中读取字符串赋给s，字符串以空白分隔，返回is
getline(is,s) get a line form is to s, return is
s.empty() s is empty return true, otherwise return false
s.size() return the number of the char in s
s[n] return the n'th place in s counting from 0
s1+s2 connect s1 and s2
s1=s2 replace s1 by s2
s1==s2 if s1 is totally same as s2, then they are equal
s1！= s2 equal decsion(upper lower sensitive )
<, <=, >, >= copmare the sequency in the dictionary
*/

/*string 的读写
int main()
{
    string s;
    cin >> s; //When read, string objects will ignore the beginning blank
            //begin with the first real char until the next blank
    cout <<s << endl;
    return 0;
}
*/

/*读取未知数量的string对象
int main()
{
    string word;
    while (cin >> word)
        cout << word << endl;
    return 0;
}
*/

/*使用getline读取一整行
int main()
{
    string line; //每次读入一整行，直到到文件末尾
    while (get(cin,line))//函数从给定的输入流中读入内容，直到遇到换行符为止（换行符也被读入） 
        cout << line << endl;//然后把所读取的内容存入到string对象中去。
    return 0;
} // 触发getline函数返回的那个换行符实际上被丢弃掉了，得到的string对象中并不包括该换行符
*/

/* string 的empty和size操作
 //每次读入一整行，遇到空行直接跳过
 while (get(cin,line))
    if(!line.empty())
        cout<<line<<endl;
 //size 函数返回string对象的长度，是一个string::size_type类型的值
 */

//exercise 3.2
/*int main()
{
    string line;
    while(getline(cin,line))
        cout<<line<<endl;
    string word;
    while(cin>>word)
       cout<<word<<endl; 
}
*/

/*int main()
{
    string s("Hello World!!!!!");
    decltype(s.size()) punct_cnt = 0;
    //统计s中标点符号的数量
    for (auto c:s)
    {
        if(ispunct(c))
            ++punct_cnt;
    }
    cout<<punct_cnt<<" punctuation characters in "<<s<<endl;
}
*/
/*
int main()
{
    string s("Hello World!!!");
    for(auto &c:s) //c是一个引用，所以赋值语句将改变s中字符的值
    {
        c = toupper(c);
    }
    cout << s << endl;
}
*/

/*
int main()
{
    string s("some string");
    if(!s.empty())
    {
        for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
        {
            s[index] = toupper(s[index]);
        }
    }
    cout << s << endl;
}
*/

/*exercise 3.6
int main()
{
    string s("@@@!!!he^^ World");
    for(auto &c:s)
    {
        if(ispunct(c))
            c = 'X';
    }
    cout<<s<<endl;
}
*/

/*exercise 3.10
int main()
{
    string s("He^l^lo W#$orld");
    for(auto c : s)
    {
        if(!ispunct(c))
           cout<<c;
    }
}
*/
