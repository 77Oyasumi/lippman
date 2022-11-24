#include <iostream>

using namespace std;

bool fibon_elem(int pos, int &elem);
bool print_sequence(int pos, int &elem);

int main(){
    int pos;
    cout<<"Please enter a position: ";
    cin>>pos;

    int elem;
    if(print_sequence(pos, elem)){
        cout<<"element # "<<pos<<" is "<<elem<<endl;
    }else{
        cout<<"Sorry. Couldn't calculate element # "<<pos<<endl;
    }
}

/*
bool fibon_elem(int pos, int &elem){

    if(pos <= 0 || pos > 1024){
        elem = 0;
        return false;
    }

    int n_2 = 1, n_1 = 1;
    for(int i = 3; i <= pos; i++){
        elem = n_2 + n_1;
        n_2 = n_1; n_1 = elem;
    }
    return true;
}
*/



bool print_sequence(int pos,int &elem){
    if(pos <= 0 || pos > 1024){
        cerr<<"invalid position: "<<pos<<" --cannot handle request!\n";
        return false;
    }

    cout<<"The Fibonacci Sequence for "<<pos<<" position: \n\t";

    switch(pos){
        default:
        case 2 :
            cout<<"1 ";
        case 1 :
            cout<<"1 ";
            break;
    }

    int n_2 = 1, n_1 = 1;
    for(int i = 3; i <= pos; i++){
        elem = n_2 + n_1;
        n_2 = n_1; n_1 = elem;
        cout<<elem<<(!(i % 10) ? "\n\t" : " ");
    }
    cout<<endl;

    return true;
}
