#include <iostream>
using namespace std;
#include <cstdlib>   
#include <ctime>

bool verifypin(int correctPin){
  int attempt = 0;
  while (attempt<=3){

  int input;
  cout<<"Enter your pin:"<<endl;
  cin>>input;
  if (input == correctPin){
    return true;  //to check if the pin is correct
  }
 attempt++;
  }
  
return false;
 }
 
void displaymenu(){
   cout<<"========ATM MENU========"<<endl;
    cout<<"1.View Balance"<<endl;
    cout<<"2.Deposit Cash"<<endl;
    cout<<"3.Withdraw Cash"<<endl;
    cout<<"4.Reset PIN"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"Enter your choice:"<<endl;
}
double viewbalance(double balance){
  cout<<"The account balance is:"<<balance<<endl;
return balance;
}
double depositmoney(double balance){
  cout<<"Enter an amount you wish to deposit:"<<endl;
   int depositmoney;
  cin>>depositmoney;
 return  depositmoney +=balance;
}
double withdrawMoney(double balance,double dailylimit){
cout<<"How much do you desire to withdraw:"<<endl;
int withdrawMoney;
cin>>withdrawMoney;

  if (withdrawMoney >= balance || withdrawMoney >= balance){
cout<<"Dear sir/madam you are not eligible to withdraw money thanks for your understanding;CYNTHIA OFORI GO HOME"<<endl;
}
return balance -=withdrawMoney;
}
int resetPin(int currentPin){
  cout<<"Enter old  User PIN:"<<endl;
  int oldPIN;
  cin>>oldPIN;

  if (oldPIN == currentPin){
  cout<<"Enter new User PIN:"<<endl;
  int newPIN;
  cin>>newPIN;

  return newPIN;
  }
  else{
    return currentPin;
  }
}
int main(){ 
  int Accountbalance = 50000;
  int withdrawallimit = 20000;
  int Userpin = 4321;
  
  bool isverified= verifypin(Userpin);
  if(!isverified){
    cout<<"Account Locked.Please contanct you bank";
  }
  bool hasexited=false;
  do{
    displaymenu();
int menuoptions;
cin>> menuoptions;
switch (menuoptions)
{
case 1:
viewbalance(Accountbalance);
  break;

  case 2:
   Accountbalance = depositmoney(Accountbalance);
break;

 case 3:
  Accountbalance =withdrawMoney(Accountbalance,withdrawallimit);
 break;
case 4:
resetPin (Userpin);
 break;

case 5:
cout<<"Thank you for using our ATM"<<endl;
 
return 0;
 
default:
cout<<"oops try once more";
  break;
}





  }while(!hasexited);

}
 