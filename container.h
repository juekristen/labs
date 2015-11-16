#ifndef CONTAINER_H
#define CONTAINER_H
#include <vector>
#include <list>
#include <iostream>

using namespace std;

#include "sort.h"
class Container
{
	
    public:
        virtual int at(int i) = 0;
        virtual void swap(int i, int j) = 0;
        virtual void insert(int elment) = 0;
 		virtual void print() = 0;
		virtual int size() = 0;
		virtual void set_sort(SortAlgorithm* s) = 0;
		virtual void sort() = 0;
		virtual void set(int index, int val) = 0;
};


#endif
