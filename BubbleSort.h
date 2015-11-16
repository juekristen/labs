#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "sort.h"
class BubbleSortAlgorithm : public SortAlgorithm
{
	public:
    	void sort(Container* c)
    	{
    		bool not_sorted = true;
    	 	int j=0; 
    	 
    		while (not_sorted)  
    		{
    			not_sorted = false;
    			j++;
    			for (int i = 0; i < c->size() - j; i++) 
    			{
    				if (c->at(i) > c->at(i + 1)) 
    				{
    					c->swap(i,i+1);
    					not_sorted = true;
    			    }//end of if
    		  	}//end of for loop
    		 }//end of while loop
    	}//end of bubble_sort
	
};
#endif
