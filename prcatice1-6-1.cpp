#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() 
{
	string data;
	vector<int> records;
	stringstream ss("");
    
	int number = 0;
    int sum = 0;

	getline(cin, data); 
	ss << data;

	while (ss >> number) 
	{
    
		records.push_back(number); 
	}

	ss.clear();
	ss.str("");

    cout<<"your number is : ";

    for (size_t i = 0; i < records.size(); ++i) {
        cout << records[i] << " ";
    }

    cout<<endl;

    for(int i = 0; i < records.size(); i++){
        sum += records[i];
    }

    cout<<"sum of these number is : "<<sum<<endl;

    return 0;
}