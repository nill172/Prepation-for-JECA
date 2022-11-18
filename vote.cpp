#include<iostream>
using namespace std;
int main(){
    int age;
    char name[50];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
    if(age/age != 1){
        cout<<"Please enter a valid age.";
    }else if(age >= 18){
        cout<<name<<", you are aligible for vote.";
    }else{
        cout<<name<<", you are not aligible for vote."<<endl;
        cout<<"You have to wait "<<18-age<<" years to paticipate in the vote.";
    }
    return 0;
}