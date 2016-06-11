#include <iostream>
#include <vector>
using namespace std;

class InsertSort
{
public:
	InsertSort(vector<int> _list,int len);
	void insert_sort();
	void out();
protected:
private:
	int len;
	vector<int> list;	
};

