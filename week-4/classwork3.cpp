#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main(){
    srand(time(0));
int number1=rand();
int number2 = rand();
if (number1 <number2){
    int temp = number1;
    number1=number2;
    number2=temp;
}
int difference=(number1-number2) % 10;
cout<<"what is number1-number2: ";
int input; //to input any random number of the user chioce
cin>>input;
if (input==difference){
    cout<<"Your guess is correct";
    
}else{
    cout<<"your guess is wrong"<<endl;
    cout << "the correct number is: " << difference;
    return 0;
}

}