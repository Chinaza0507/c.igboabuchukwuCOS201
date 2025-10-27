#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    string student_name;
cout<<"Enter student full name:";
cin>>student_name;
   bool isPaustudent;
cout<<"Are you a student of Pau(1 for true,0 for false)";
int flag;
cin>>flag;
isPaustudent = (flag !=0);
    int course;
cout<<"Enter the number of your course from 1-5;\n" "1 -- Photography\n"<< "2 -- painting \n" <<"3 --fish farming\n" <<"4--Banking \n"<<"5--public speaking\n";
cin>>course;
int location;
cout<<"Enter your location;\n" "1 --camphouseA\n"<<"2--camphouse B\n"<<"3--camphouse C\n"<<"4--camphouse D\n"<<"5--camphouse E\n";
cin>>location;

string courseName;
int days = 0;
double regfee = 0.0;

if (course ==1){
    courseName ="Photography";
    days=3;
    regfee =10000;
}
    else if (course ==2){
    courseName ="Painting";
    days=5;
    regfee =8000;
}
else if (course ==3){
courseName ="Fishfarming";
    days=7;
    regfee =15000;
}
else if (course==4){
    courseName ="Banking";
    days=5;
    regfee =13000;

}
else if (course==5){
    courseName ="Public speaking";
    days=2;
    regfee =5000;

}
else {
    cout<<"Invalid course choice!"<<endl;
    return 5;
}
//Location code
string locName;
double logingperday =0.0;
if (location==1){
    locName ="camp House A";
    logingperday=10000;
}
else if(location==2){
    locName ="camp House B";
    logingperday=5000;
}
else if(location==3){
    locName ="camp House C";
    logingperday=5000;
}
else if(location==4){
    locName ="camp House D";
    logingperday=13000;
}
else if(location==5){
    locName ="camp House E";
    logingperday=5000;
    return 5;
}

//calculating lodging costs
double lodgingcost= logingperday * days;
double total =regfee +lodgingcost;
double lodgingDiscount =0.0;
double regDiscount = 0.0;


if(isPaustudent &&(location ==1||location ==2)){
    lodgingDiscount = 0.05 * lodgingcost;

}
double lodgingcostAfter =lodgingcost - lodgingDiscount;
if((days>5)||(regfee > 12000)){
    regDiscount =0.03 * regfee;

}
double regdiscountAfter = regfee -regDiscount;
 total = regdiscountAfter + lodgingcostAfter;


//random promo
srand(time(0));
int r =(rand()%100) +1;
double promo =0.0;
if (r==7 || r==77){
    promo =500.0;

}
 total= regdiscountAfter + lodgingcostAfter - promo;


cout<<"Name:"<<student_name<<"\n";
cout<<"PAU student:"<<(isPaustudent ? "YES":"NO")<<"\n";
cout<<"Course:"<<courseName<<"\n";
cout<<"Number of days:"<<days<<"\n";
cout<<"Registeration Fee:"<<regfee<<"\n";
cout<<"Location:"<<locName<<"\n";
cout<<"Lodging Fee per day:"<<logingperday<<"\n";
cout<<"Total loging cost:"<<lodgingcost<<"\n";
cout<<"Random number:"<<r<<"\n";



//apply rules using logical operators


}
