#include <iostream>
#include <string>

using namespace std;

int main(){
    string userName;
    cout<<"What's your name??";
    cin>>userName;

    switch(userName.size()){
        case 0:
            cout<<"Ah, the user with no name. "<<"Well, ok, hi, user with no name.\n";
            break;
        case 1:
            cout<<"No way your name is "<<userName<<endl;
            break;
        default :
            cout<<"Hello, "<<userName<<" my friend.\n";
            break;
    }
    return 0;
}