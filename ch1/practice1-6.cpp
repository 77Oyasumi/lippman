#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> vec;
    int temp = 0;
    int sum = 0;
    cout << "Please enter the Number : " << endl;
    while(cin >> temp && temp > 0){
        vec.push_back(temp);
    }

    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }

    cout<<endl;

    for(int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }

    cout<<"sum of these number is : "<<sum<<endl;

    return 0;
}