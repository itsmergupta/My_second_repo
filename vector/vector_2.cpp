#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main(){

	vector <int> a={1,2,3,4,5,6,7,8,9};
	
	vector <int>::iterator it = a.begin();

	for(auto e : a)
	{
		cout << (e) <<",";
	}
	cout << endl;
	a.insert(a.end() ,4,99);
	for(auto e : a)
	{
		cout << (e) <<",";
	}
	cout << endl;
	
	
	return 0;
}


