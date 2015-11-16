#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H
#include "container.h"

class ListContainer : public Container
{
	public:
		// ListContainer(list<int> &lst)
		// {
		// 	currlst = lst;
		// }
		int at(int i)
		{
			int is = 0;
			for(list<int>::iterator it = currlst.begin(); it != currlst.end(); ++it)
				{
					if(is == i)
					{
						return *it;
					}
					++is;
				}
			return 0;
		}
		
		void swap(int i, int j)
		{
			list<int>::iterator oneit, twoit;
			int is = 0;
			for(list<int>::iterator it = currlst.begin(); it != currlst.end(); ++it)
				{
					if(is == i)
					{
						oneit = it;
					}
					++is;
				}
			
			is = 0;
			for(list<int>::iterator it = currlst.begin(); it != currlst.end(); ++it)
				{
					if(is == j)
					{
						twoit = it;
					}
					++is;
				}
			
			iter_swap(oneit, twoit);
		}
		
		void insert(int element)
		{
			currlst.push_back(element);
		}
		
		void print()
		{
			for(list<int>::iterator it = currlst.begin(); it != currlst.end(); ++it)
			{
				cout << *it << ' ';
			}
			cout << endl;
		}
		int size()
		{
			return currlst.size();	
		}
		void set_sort(SortAlgorithm* s)
		{
			sorta = s;
		}
		
		void sort()
		{
			sorta -> sort(this);	
		}
		 
		void set(int index, int val)
		{
			int is = 0;
			for(list<int>::iterator it = currlst.begin(); it != currlst.end(); ++it)
				{
					if(is == index)
					{
						*it = val;
					}
					++is;
				}
		}
	private:
		list<int> currlst;
		SortAlgorithm* sorta;
};
#endif


