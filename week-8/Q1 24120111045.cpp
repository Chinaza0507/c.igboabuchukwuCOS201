#include <iostream>
#include <string>//for the string 
#include <cstdlib>
using namespace std;
int main(){
    string name;
    int JAMBscore,age;
    double WAEC;
    bool firstChoice, disciplinary;
    int hostelChoice;
    
    cout<<"Enter Full name:"<<endl;
    getline(cin,name);
     cout<<"Enter JAMBscore:"<<endl;
     cin>>JAMBscore;
     cout<<"Enter WAEC Average:"<<endl;
     cin>>WAEC;
     cout<<"Enter your age:"<<endl;
     cin>>age;
     cout << "First choice PAU? (1/0): "<<endl;
    cin >> firstChoice;
    cout << "Any disciplinary record? (1/0): "<<endl;
    cin >> disciplinary;
    cout << "Hostel (1=Main, 2=Annex, 3=Day): "<<endl;
    cin >> hostelChoice;


double baseTuition = 1500000;
    double hostelfees ;
    string hostelname ;
    string admissionstatus ;

    //Admission decision (multiway+logival operators)
    if (disciplinary == true || age < 15) {
        admissionstatus = "Rejected";   //no accutr
    }
    else if ((JAMBscore >= 220 && WAEC >= 60 && firstChoice == true) ||
    (JAMBscore>= 200 && WAEC >= 70)) {
        admissionstatus = "Admitted";
    }
    else {
        admissionstatus = "Pending";
    } 

    
    //Scholarship(only if admitted)
 int scholarshippercent = 0;
 

  if (admissionstatus =="Admitted"){
    if ( JAMBscore >= 320){
        scholarshippercent = 30;
    }
   else if (JAMBscore >=280 ){
    scholarshippercent = 20;
   }

   else if (JAMBscore >= 240){
    scholarshippercent = 10;
    
   }

   else {
    scholarshippercent = 0;
    
   }
}

// bonus rule
  if (WAEC>=80 && firstChoice==1)
  scholarshippercent += 5;

//to cap total schorplarship at 35%
  if (scholarshippercent > 35)
     scholarshippercent = 35;


     //hostel assignment
     if( admissionstatus == "Admitted" && !disciplinary){
        switch(hostelChoice){
        
            case 1:
        hostelname ="main hostel";
        hostelfees = 180000;
        break;

        case 2:
        hostelname = "Annex hostel";
        hostelfees = 120000;
        break;

        case 3:
        hostelname = "Day student";
        hostelfees = 0;
        break;
     }
    }
     else if(admissionstatus == "Rending") {
        hostelname = "onhold";
        hostelfees = 0;
     }
     else if (admissionstatus == "Rejected"){
        hostelname = "Not applicable";
        hostelfees = 0;
     }

     //Random   Merit Grant
     srand(time(0));
     int r = rand()% 100 + 1;
     bool isPrime= r==2 || r==3 || r==5 || r==7 || r==11 || r==13 ||r==17 || r==19 
               ||r==23|| r==29 ||r==31||r==37|| r==41||r==43||r==47||r==53||r==59
               ||r==61||r==67||r==71||r==73|| r==79||r==83||r==89||r==97;

    int grant = 0;
    if ((isPrime && r <=97) && (admissionstatus == "Admitted" )){
        grant = 5000;
    }
     int tuitionafterscholarship = baseTuition - (scholarshippercent * baseTuition/100);
     int totalpayable = tuitionafterscholarship + hostelfees - grant;
      
     if (totalpayable < 0) //to ensure it doesnt go below zero
      totalpayable = 0;


      cout<<"Name :"<<name<<endl;
      cout<<"Admission status:"<<admissionstatus<<endl;
      cout<<"Scholarship:"<<scholarshippercent<<"%"<<" tuitionafterschorlarship:NGN"<<tuitionafterscholarship<<endl;
      cout<<"hostel :"<<hostelname<<" fees:NGN"<<hostelfees<<endl;
      cout<<"Random draw:"<<r<<" Merit grant :"<<grant<<endl;
      cout<<"TOTAL PAYABLE:NGN"<<totalpayable<<endl;
    }





    

