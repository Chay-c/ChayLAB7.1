#include <iostream>
using namespace std ;
int main() {
    string sname ;
    int snum ;
    string movie , sday , smess ;
    int x ;
cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
cout << "?????: " ;
getline(cin,sname) ;
cout << "Fahsai: Wow!!! " << sname << " is a really cool name." << endl ;
cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl ;
cout << sname << ": "  ;
cin >> snum ;
 x = ((int) snum / 10000000 )-12 ;
cin.ignore() ;
cout << "Fahsai: I think you may be GEAR " << x << ". I have a free movie ticket for you." << endl ;
cout << "Fahsai: Let's go to the cinema together!!!" << endl ;
cout << "Fahsai: What movie do you want to watch?" << endl ;
cout << sname << ": "  ;
getline(cin,movie) ;
cout << "Fahsai: So....which day are you free to go with me?" << endl ;
cout << sname << ": " << sday  ;
getline(cin,sday) ;
cout << "Fahsai: " << sday << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl ;
cout << sname << ": " << smess  ;
getline(cin,smess) ;
cout << "Fahsai: 555+ see you " << sday << ". Bye Bye \\(^ ^)/" ;
return 0 ;

}
