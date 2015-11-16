#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include "sort.h"

class SelectionSortAlgorithm : public SortAlgorithm
{
    public:
    	void sort(Container* c)
    	{
    		int i, j, minIndex;    
    		for (i = 0; i < c -> size() - 1; i++) 
    		{
    		    minIndex = i;
    		    for (j = i + 1; j < c -> size(); j++)
    		          if (c -> at(j) < c->at(minIndex))
    		                minIndex = j;
    		    if (minIndex != i) 
    		    {
    		          c ->swap(i,minIndex);
    		    }
    		}
    	}
	
};
#endif