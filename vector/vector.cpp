#include <bits/stdc++.h>


using namespace std;


int main(){


	vector<int> a(100000000);
//	int *p = &a[100000000];
	
	vector<int>::iterator it=a.begin();
	cout<<&(*(it))<<endl;
	a.resize(200000000);
	it=a.begin();

	cout<<&(*(it))<<endl;

//	for(auto it ->a)
//		{
//			a.pushback(1);
//		}


	return 0;

}
