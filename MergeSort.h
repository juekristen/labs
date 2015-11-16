class MergeSortAlgorithm : public SortAlgorithm
{
    public:
        void sort(Container* c)
        {
            
            mergesort(c,0,c->size()-1);
        }
    private:
        void merge(Container* a, int low, int pivot, int high)
        {
            vector <int> b(high + 1);
            //cout << "size " << b.size() << endl;
            int h,i,j,k;
            h=low;
            i=low;
            j=pivot+1;
         
            while((h<=pivot)&&(j<=high))
            {
                //cout << 1 << endl;
                if(a -> at(h) <= a -> at(j))
                {
                    b.at(i) = (a -> at(h));
                    ++h;
                }
                else
                {
                    b.at(i) = (a -> at(j));
                    ++j;
                }
                i++;
            }
            if(h>pivot)
            {
                //cout << 2 << endl;
                for(k=j; k<=high; k++)
                {
                    b.at(i) = (a -> at(k));
                    //b[i]=a[k];
                    i++;
                }
            }
            else
            {
                //cout << 3 << endl;
                for(k=h; k<=pivot; k++)
                {
                    b.at(i) = (a -> at(k));
                    //b[i]=a[k];
                    i++;
                }
            }
           //cout << 4 << endl;
            for(k=low; k<=high; k++)
            {
                //cout << 4.1 << ' '<< k <<endl;
                a -> set(k,b.at(k));
            }
            //cout << 5 << endl;
            //a[k]=b[k];
        }
        void mergesort(Container *a, int low, int high)
        {
            int pivot;
            if(low<high)
            {
                //cout << 5 << endl;
                pivot=(low+high)/2;
                mergesort(a,low,pivot);
                mergesort(a,pivot+1,high);
                merge(a,low,pivot,high);
            }
        }
        
         
};