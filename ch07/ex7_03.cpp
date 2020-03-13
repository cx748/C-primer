#include<iostream>
#include"ex7_02_sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> total.revenue){
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else{
                cout << total.bookNo <<total.units_sold<<total.revenue;
                total = trans;
            }
        }
        cout<<total.bookNo<<total.units_sold<<total.revenue;
    }
    else{
        std::cerr<<"No data?!"<<std::endl;
        return -1;
    }
    return 0;
}