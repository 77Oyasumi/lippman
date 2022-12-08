#include <iostream>
#include <vector>

using namespace std;

#include<iostream>
using namespace std;

int main()
{
    long long fib[75];
    int n, i;

    fib[1] = 1;
    fib[2] = 1;
    for( i=3 ; i<=70 ; i=i+1 )
        fib[i] = fib[i-1] + fib[i-2];

    while( cin >> n )
    {
        cout << fib[n] << endl;
    }

    return 0;
}
/*
bool is_size_ok(int size);
const vector<int> * fibon_seq(int size);
bool fibo_elem(int pos, unsigned int &elem);



int main(){
    int pos;
    cout<<"Please enter a position: ";
    cin>>pos;

    unsigned int elem;
    if(fibo_elem(pos, elem)){
        cout<<"element #"<<pos<<" is "<<elem<<endl;
    }else{
        cout<<"Sorry. Couldn't calculare element # "<<pos<<endl;
    }
    return 0;
}

bool is_size_ok(int size){
    const int max_size = 1024;
    if(size <= 0 || size > max_size){
        cerr<<"Oops: requested size is not supported : "<<size<<" -- can't fulfill request.\n";
        return false;
    }
    return true;
}
    
const vector<int> * fibon_seq(int size){
    const int max_size =1024;
    static vector<int> elems;

    if(!is_size_ok(size)){
        return 0;
    }

    for(int ix = elems.size(); ix < max_size; ix++){
        if(ix == 0 || ix ==1){
            elems.push_back(1);
        }else{
            elems.push_back(elems[ix - 1] + elems[ix - 2]);
        }
    }
    return &elems;
}

bool fibo_elem(int pos, unsigned int &elem){
    const vector<int> * pseq = fibon_seq(pos);

    if(!pseq){
        elem = 0; return false;
    }
    elem = (*pseq)[pos - 1];
    return true;
}
*/