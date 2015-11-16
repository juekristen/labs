#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H
#include "container.h"
class VectorContainer : public Container
{
    public:
		// VectorContainer(vector<int> &vctr)
		// {
		//     currvctr = vctr;
		// }
	
		int at(int i)
		{
		    return currvctr.at(i);
		}
	
		void swap(int i, int j)
		{
		    int temp;
	 	    temp = currvctr.at(j);
		    currvctr.at(j) = currvctr.at(i);
		    currvctr.at(i) = temp;	     
		}
		
		void insert(int element)
		{
			currvctr.push_back(element);
		}
		
		void print()
		{
			for(int i = 0; i < currvctr.size(); ++i)
			{
				cout << currvctr.at(i) << ' ';
			}
			cout << endl;
		}
		
		int size()
		{
			return currvctr.size();
		}
		
		void set_sort(SortAlgorithm* s)
		{
			sorta = s;
		}
		
		void sort()
		{
			sorta -> sort(this);	
		}
		
		void set(int index,int val)
		{
			currvctr.at(index) = val;
		}
	
    private:
		vector <int> currvctr;
		SortAlgorithm* sorta;
		
};
#endif