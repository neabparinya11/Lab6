#include <iostream>
using namespace std;
int main() {
	string x,z,a,b;
	int y;
cout <<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
cout<<"?????: ";
getline(cin,x);
cout<<"Fahsai: Wow!!! "<<x<<" is a really cool name."<<endl;
cout<<"Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
cout<<x<<": ";
cin>>y;
cin.ignore();
int year=(y/10000000)-12;
cout<<"Fahsai: I think you may be GEAR "<<year<<". I have a free movie ticket for you."<<endl;
cout<<"Fahsai: Let's go to the cinema together!!!"<<endl;
cout<<"Fahsai: What movie do you want to watch?"<<endl;
cout<<x<<": ";
getline(cin,z);
cout<<"Fahsai: So....which day are you free to go with me?"<<endl;
cout<<x<<": ";
getline(cin,a);
cout<<"Fahsai: "<<a<<"....that is OK!!! I'm looking forward to watching "<<z<<" with you."<<endl;
cout<<x<<": ";
getline(cin,b);
cout<<"Fahsai: 555+ see you "<<a<<". Bye Bye \\(^ ^)/"<<endl;

    return 0;
}
