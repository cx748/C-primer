#include <vector> //c++既有类模板，也有函数模板，vector是一个类模板
#include<iostream>
#include<string>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

//实例化instantiation： 编译器根据模板创建类或者函数的过程

// vector<int> ivec; //ivec保存int类型的对象
// 定义和初始化vector对象
/* 
vector<T> v1;      //v1是一个空的vector，它的潜在元素是T类型，执行默认初始化
vector<T> v2(v1); //v2中包含有v1所有元素的副本
vector<T> v2 = v1; // 等价于v2(v1)
vector<T> v3(n,val) // v3包含了n个重复的元素，每个元素的值都是val
vector<T> v4(n) //v4包含了n个执行了值初始化的对象
vector<T> v5{a,b,c...} //v5包含了初始值个数的元素，每个元素被赋予相应的初始值
vector<T> v6={a,b,bc..} //等价于v5
*/

/*列表初始化
vector<string> articles = {"a","an","the"}; //提供的是初始元素值的列表则只能用花括号
圆括号构造vector对象，花括号列表初始化
*/

/* push_back() 把一个值当成vector对象的尾元素push到vector对象的尾端
vector<int> v2;
for(int i=0; i!=100; i++)
    v2.push_back(i); //循环结束后v2有100个元素，值从0到99

//从标准输入中读取单词，将其作为vector对象的元素存储
string word;
vector<string> text;
while(cin >> word) //不能使用范围for循环
{
    text.push_back(word);
}   //除了所有元素的值都一样的情况下，先定义一个空的vector对象，再在运行时添加具体值
*/

//exercise 3.14
/*
int main()
{
    vector<int> v1;
    int i;
    while(cin >> i)
    {
        v1.push_back(i);
    }
    return 0;
}
*/

//exercise 3.15
/*
int main()
{
    vector<string> vec;
    string s;
    while(cin >> s)
    {
        vec.push_back(s);
    }
    return 0;
}
*/

//以10分一档统计成绩的数量
/*
int main()
{
    vector<int> scores(11,0);//11个分数段，全部初始化为0
    int grade;
    while(cin >> grade)
    {
        if(grade <= 100)  //只处理有效成绩
            ++scores[grade/10];
    }
}
*/

//vector对象的下标运算可用于访问已存在的元素，而不能用于添加元素

//exercise 3.17
/*
int main()
{
    vector<string> vec;
    string word;
    while(cin>>word)
        vec.push_back(word);
    for(auto &str : vec)
    {
        for(auto &c : str)
            c = toupper(c);
    }
    for(decltype(vec.size()) i = 0; i < vec.size(); ++i)
    {
        if(i != 0 && i % 8 == 0)
            cout<<endl;
        cout << vec[i]<<" ";
    }
    cout << endl;
    return 0;
}
*/

/*
int main()
{
    vector<int> vec1(10, 42);
    vector<int> vec2={42,42,42,24,24,24,24,42,42,42};
    vector<int> vec3;
    int i = 0;
    while(i < 10)
    {
        vec3.push_back(42);
        i++;
    }
    cout <<"The first one is better"<<endl;
}
*/

/*
int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    for(decltype(vec.size()) i=0; i<vec.size();i++)
    {
        int sum = vec[i] + vec[vec.size()-i-1];
        cout << sum << " " ;
    } 
}
*/
