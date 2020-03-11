#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include"Chapter6.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;
/*int f(int val)
{

    return abs(val);
}

int main()
{
    int j = f (-5);
    cout<<"abs(-5) is "<<j<<endl;
    return 0;
}
*/

//exercise 6.10
void swap(int *p, int *q)
{
    cout<<*p<<*q<<endl;
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    cout<<*p<<*q<<endl;
}
/*
int main()
{
    int a = 3,b = 5;
    swap(&a,&b);
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c,
                                string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0; i!=s.size(); ++i)
    {
        if (s[i]==c)
        {
            if(ret == s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;
}
*/
//exercise 6.11
/*
void reset(int &i)
{
    i = 0;
}

int main()
{
    int i =42;
    reset(i);
    cout<<i<<endl;
}
*/

/*
bool hasUppercase(const string& str)
{
    for (auto c:str)
        if(isupper(c))
            return true;
    return false;
}

const string& makeLowercase(string &str)
{
    for(auto& c:str)
        if(isupper(c))
            c=tolower(c);
    return str;
}
int main()
{
    string str("Hello world");
    cout<<hasUppercase(str)<<endl;
    cout<<makeLowercase(str)<<endl;
}
*/
/*
int largeOne(int i, const int* const ip)
{
    return (i>*ip?i:*ip);
}

void swap()

int main()
{
    int c=7;
    cout<<largeOne(6,&c);
}
*/
/*
void print(int* const pi)
{
    if(pi) cout<<*pi<<endl;
}

void print(const char* p)
{
    if(p)
    {
        while(*p)
            cout<<*p++;
        cout<<endl;
    }
}

void print(const int* beg, const int*end)
{
    while(beg != end)
        cout<<*beg++<<endl;
}

void print(const int ia[],size_t size)
{
    for(size_t i=0; i != size; ++i)
    {
        cout<<ia[i];
    }
}

void print(const int (&arr)[2])
{
    for(auto i:arr)
    {
        cout<<i<<" "<<endl;
    }
}
int main()
{
    int i = 0, j[2] = {0, 1};
    char ch[5] = "pezy";

    print(ch);
    print(begin(j), end(j));
    print(&i);
    print(j, end(j) - begin(j));
    print(const_cast<const int(&)[2]>(j));
}
*/
using Iter = vector<int>::iterator;

void print(Iter beg, Iter end)
{
    if(beg != end)
    {
        cout<<*beg<<" ";
        print(std::next(beg),end);
    }
}

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    print(vec.begin(),vec.end());
}


#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << "singual: " << make_plural(1, "success", "es") << " "
         << make_plural(1, "failure") << endl;
    cout << "plural : " << make_plural(2, "success", "es") << " "
         << make_plural(2, "failure") << endl;
}