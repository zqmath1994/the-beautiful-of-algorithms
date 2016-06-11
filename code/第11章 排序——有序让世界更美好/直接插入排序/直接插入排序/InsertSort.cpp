#include "InsertSort.h"

InsertSort::InsertSort(vector<int> _list,int _len)
{
	for (int i=0;i<_len;i++)
	{
		list.push_back(_list[i]);
		this->len=_len;
	}
}

void InsertSort::insert_sort()
{
	int inserNum;
	for(int i=1;i<len;i++)
	{
		inserNum=list[i];
		int j=i;
		while (j>0&& inserNum<list[j-1])
		{
			list[j]=list[j-1];
			j--;
		}
		list[j]=inserNum;


	}
}

void InsertSort::out()
{
	for (int i=0;i<this->len;i++)
	{
		cout<<this->list[i]<<" ";
	}
}