//数组维度必须是常量表达式
#include <cstddef>
#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::vector;
using std::iterator;
using std::endl;
using std::begin;
using std::end;

/*
int main()
{
    int ia[10];
    for(size_t i = 0; i<10; ++i)
        ia[i] = i;
    for(auto i : ia)
        cout<<i<<" ";
    cout<<std::endl;
    int ib[10];
    for(size_t i=0; i<10; ++i)
    {
        ib[i]=ia[i];
    }
        for(auto i : ib)
        cout<<i<<" ";
    cout<<std::endl;
    //use vector
    vector<int> iv(10);
    for(auto iter = iv.begin();iter!=iv.end();++iter)
    {
        *iter = iter-iv.begin();
    }
    vector<int> iv2(iv);
    for(auto i :iv2){
        cout<<i<<" ";
    }
    return 0;
}
*/
/*
int main()
{
    int arr[10];
    int *b = begin(arr);
    int *e = end(arr);
    for(int *i=b; i != e ; ++i)
        *i = 0;
    for(auto c : arr)
        cout << c << " ";
    cout << endl;
    return 0;
}
*/

// pb point to begin of the array, pe point to end of the array.
/*
bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2)
{
    if ((pe1 - pb1) != (pe2 - pb2)) // have different size.
        return false;
    else {
        for (int *i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j)
            if (*i != *j) return false;
    }

    return true;
}

int main()
{
    int arr1[3] = {0, 1, 2};
    int arr2[3] = {0, 2, 4};

    if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
        cout << "The two arrays are equal." << endl;
    else
        cout << "The two arrays are not equal." << endl;

    cout << "==========" << endl;

    vector<int> vec1 = {0, 1, 2};
    vector<int> vec2 = {0, 1, 2};

    if (vec1 == vec2)
        cout << "The two vectors are equal." << endl;
    else
        cout << "The two vectors are not equal." << endl;

    return 0;
}
*/

//要使用范围for语句处理多维数组，除了最内层的循环外，其他所有循环的控制变量都
//应该是引用类型
/*
for(const auto &row : ia) //对于外层元素的每一个元素
    for(auto col: row)
        cout <<col<< endl;


for(auto row : ia)
    for(auto col : row) //程序将无法通过编译，因为row不是引用类型，所以编译器会转换成首元素指针

*/

//因为多维数组实际上是数组的数组，所以有多维数组名转换来的指针实际是指向多维数组的第一个内层数组
int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // a range for to manage the iteration
    for (const int(&p)[4] : ia)
        for (int q : p) cout << q << " ";
    cout << endl;

    // ordinary for loop using subscripts
    for (size_t i = 0; i != 3; ++i)
        for (size_t j = 0; j != 4; ++j) cout << ia[i][j] << " ";
    cout << endl;

    // using pointers.
    for (int(*p)[4] = ia; p != ia + 3; ++p)
        for (int* q = *p; q != *p + 4; ++q) cout << *q << " ";
    cout << endl;

    return 0;
}