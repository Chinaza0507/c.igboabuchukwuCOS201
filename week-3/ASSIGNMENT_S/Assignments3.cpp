#include <iostream>
using namespace std;
int main() {
    double totalamount, saletax;
    cout << " Enter total purchase amount=";
    cin >> totalamount;
    saletax = totalamount * 0.06;
    cout << "salestax="<<saletax<<endl;
    cout <<"Total with sales tax="<<totalamount + saletax<<endl;
    return 0;
}