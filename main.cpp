#include "container.h"
#include "sort.h"
#include "selectionSort.h"
#include "ListContainer.h"
#include "BubbleSort.h"
#include "VectorContainer.h"
#include "MergeSort.h"

int main()
{
	//VectorContainer *tester;
	VectorContainer test;
	//tester = &test;
	BubbleSortAlgorithm bubble;
	SelectionSortAlgorithm select;
	MergeSortAlgorithm merge;
	
	test.insert(1);
	test.insert(0);
	for(int j = 0; j < 10; ++j)
	{
		test.insert(j);
	}
	test.insert(22);
	test.insert(2);
	test.insert(15);
	cout << "Vector Container" << endl;
	cout << "Merge Pre-Sort: ";
	test.print();
	//select.sort(tester);
	//bubble.sort(tester);
	//merge.sort(tester);
	SortAlgorithm* sorter = &merge;
	test.set_sort(sorter);
	test.sort();
	cout << "Post-Sort: ";
	test.print();
	
	sorter = &bubble;
	VectorContainer testvc;
	testvc.insert(0);
	testvc.insert(2);
	testvc.insert(12);
	testvc.insert(6);
	testvc.insert(112);
	testvc.insert(1);
	testvc.insert(-8);
	cout << "Bubble Pre-Sort: ";
	testvc.print();
	testvc.set_sort(sorter);
	testvc.sort();
	cout << "Post-Sort: ";
	testvc.print();
	
	sorter = &select;
	VectorContainer testvcs;
	testvcs.insert(10);
	testvcs.insert(2);
	testvcs.insert(1);
	testvcs.insert(67);
	testvcs.insert(-112);
	testvcs.insert(10);
	testvcs.insert(7);
	cout << "Selection Pre-Sort: ";
	testvcs.print();
	testvcs.set_sort(sorter);
	testvcs.sort();
	cout << "Post-Sort: ";
	testvcs.print();
	
	VectorContainer vec;
	cout << "Pre-Sort: ";
	vec.print();
	vec.set_sort(sorter);
	vec.sort();
	cout << "Post-Sort: ";
	vec.print();
	// cout << test.at(3) << endl;
	// cout << "should be 3" << endl;
	// test.swap(0,1);
	// test.print();
	// test.size();
	// test.insert(15);
	// test.print();
	
	
	
	ListContainer testlst;
	for(int j = 0; j < 10; ++j)
	{
		testlst.insert(j);
	}
	testlst.insert(15);
	testlst.insert(0);
	cout << endl;
	cout << "List Container" << endl;
	cout << "Bubble Pre-Sort: ";
	testlst.print();
	// cout << testlst.at(3) << endl;
	// cout << "should be 3" << endl;
	// testlst.swap(0,1);
	// testlst.print();
	// testlst.size();
	testlst.set_sort(sorter);
	testlst.sort();
	cout << "Post-Sort: ";
	testlst.print();
	
	sorter = &select;
	ListContainer lst;
	cout << "Selection Pre-Sort: ";
	lst.print();
	lst.set_sort(sorter);
	lst.sort();
	cout << "Post-Sort: ";
	lst.print();
	
	ListContainer tstlst;
	tstlst.insert(6);
	tstlst.insert(-6);
	tstlst.insert(16);
	tstlst.insert(11);
	tstlst.insert(15);
	tstlst.insert(1);
	tstlst.insert(20);
	tstlst.insert(109);
	cout << "Selection Pre-Sort: ";
	tstlst.print();
	tstlst.set_sort(sorter);
	tstlst.sort();
	cout << "Post-Sort: ";
	tstlst.print();
	
	sorter = &merge;
	ListContainer tstlsts;
	tstlsts.insert(10);
	tstlsts.insert(-70);
	tstlsts.insert(9);
	tstlsts.insert(1);
	tstlsts.insert(63);
	tstlsts.insert(1);
	tstlsts.insert(12);
	tstlsts.insert(25);
	cout << "Merge Pre-Sort: ";
	tstlsts.print();
	tstlsts.set_sort(sorter);
	tstlsts.sort();
	cout << "Post-Sort: ";
	tstlsts.print();
	
	return 0;
}
