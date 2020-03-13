//类的基本思想是数据抽象和封装（data abstraction and encapsulation）
//抽象依赖于接口(interface)和实现(implementation) 接口包括用户能执行的操作；类的实现
                //包括累的数据成员，负责接口实现的函数体以及定义类所需的各种私有函数
//封装实现了类的接口和实现的分离。封装后的类隐藏了他的细节，类的用户只能使用接口而
//无法访问实现部分 

//想要实现数据抽象和封装。需要首先定义一个抽象数据类型

//设计Sales_data类
#include<iostream>
#include<vector>
#include<string>
#include"Sales_data.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;



/*Sales_data total;
if (read(cin,total))
{
    Sales_data trans;
    whilel(read(cin,trans)){
        if(total.isbn()==tans.isbn())
            total.combine(trans);
        else{
            print (cout,total)<<endl;
            total = trans;
        }
    }
    print(cout,total) << endl;
}else{
    cerr <<"No data!"<<endl;
}
*/

int main()
{
    Sales_data total;
    if(std::cin>>total.bookNo>>total.units_sold>>total.revenue){
        Sales_data trans;
        while(std::cin>>trans.bookNo>>trans.units_sold>>trans.revenue){
            if(total.bookNo==trans.bookNo)
                total.AddData(trans);
            else{
                total.Print();
                total = trans;
            }
        }
        total.Print();
    }
    else{
        std::cerr << "No data?!" <<endl;
        return -1;
    }
    return 0;
}