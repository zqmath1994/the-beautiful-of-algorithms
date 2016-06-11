#include <iostream>
#include "InsertSort.h"

using namespace std;


int main()
{
	vector<int> test(8,-1);
	for(int i=0;i<8;i++)
	{
		cin>>test[i];
	}
	InsertSort testexample(test,8);
	testexample.insert_sort();
	testexample.out();
	return 0;
}