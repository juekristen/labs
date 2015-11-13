#include <vector>
#include <list>
#include <iostream>
using namespace std;

class SortAlgorithm;
class Container
{
    public:
        virtual int at(int i) = 0;
        virtual void swap(int i, int j) = 0;
        virtual void insert(int elment) = 0;
 		virtual void print() = 0;
		virtual int size() = 0;
		//virtual void set_sort(SortAlgorithm* s) = 0;
		//virtual void sort();
};

class VectorContainer : public Container
{
    public:
		VectorContainer(vector<int> &vctr)
		{
		    currvctr = vctr;
		}
	
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
		
		// void set_sort(SortAlgorithm* s)
		// {
		// 	sorta = s;
		// }
		
		// void sort()
		// {
		// 	sorta -> sort(currvctr);	
		// }
	
    private:
		vector <int> currvctr;
		//SortAlgorithm* sorta;
		
};

class ListContainer : public Container
{
	public:
		ListContainer(list<int> &lst)
		{
			currlst = lst;
		}
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
		// void set_sort(SortAlgorithm* s)
		// {
		// 	sorta = s;
		// }
		
		// void sort()
		// {
		// 	sorta -> sort(currvctr);	
		// }
	private:
		list<int> currlst;
		//SortAlgorithm* sorta;
};

class SortAlgorithm
{
	virtual void sort(Container* c) = 0;	
};

// class BubbleSortAlgorithm : public SortAlgorithm
// {
// 	void sort(Container* c)
// 	{
		
// 	}
// }

int main()
{
	vector<int> k;
	for(int j = 0; j < 10; ++j)
	{
		k.push_back(j);
	}
	VectorContainer test (k);
	test.print();
	cout << test.at(3) << endl;
	cout << "should be 3" << endl;
	test.swap(0,1);
	test.print();
	test.size();
	test.insert(15);
	test.print();
	
	cout << "break" << endl;
	list <int> l;
	for(int j = 0; j < 10; ++j)
	{
		l.push_back(j);
	}
	ListContainer testlst (l);
	testlst.print();
	cout << testlst.at(3) << endl;
	cout << "should be 3" << endl;
	testlst.swap(0,1);
	testlst.print();
	testlst.size();
	testlst.insert(15);
	testlst.print();
	return 0;
}
