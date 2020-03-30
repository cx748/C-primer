#ifndef ch_15_11_Bulk_h
#define ch_15_11_Bulk_h

#include "ch15_11_Quote.h"
#include <string>

namespace EX11{
    using std::string;

class Bulk_quote : public Quote{
public:
    Bulk_quote() = default;
    Bulk_quote(string const& book, double p, size_t qty, double disc):
        Quote(book,p), min_qty(qty), discount(disc) {}
    
    virtual double net_price(size_t cnt) const override{
        if (cnt >= min_qty)
            return cnt*(1-discount)*price;
        else
        {
            return cnt*price;
        } 
    }

    virtual void debug() const override{
        Quote::debug;
        cout<<"\t minqty"<<min_qty<<"\t discount"<<discount<<endl;
    }

protected:
    size_t min_qty = 0;
    double discount = 0.0;
};
}
#endif