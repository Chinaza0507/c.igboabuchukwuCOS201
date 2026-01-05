#include <iostream>
using namespace std;



int main(){

int count;
cout<<"How many items do you have : "<<endl;
cin>>count;

const int size = count;
string itemnames[size];
int itemprices[size];
for(int i =0;i<count;i++){

    string item;
    
     cout<<"Enter item"<<endl;
     cin>>item;
      int price;
     cout<<"Enter price"<<endl;
      cin>>price;

      itemnames[i]=item;
       itemprices[i]=price;

}
int lowest= itemprices[0] ;
 int indexlowest=0;
  

for(int i = 0;i<count;i++){
    int price= itemprices[i];
   
    
if(price < lowest){
    lowest= itemprices[i];
    indexlowest=i;
}
    


}
cout<<"Lowest itemname"<<itemnames[indexlowest]<<endl;
cout<<"Lowest price :"<<itemprices[indexlowest]<<endl;


}