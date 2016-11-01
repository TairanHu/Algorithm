

#include <iostream>

using namespace std;

void maxHeapDown(int *a, int start, int end)
{
    int c = start;
    int l = 2*c +1;
    int tmp = a[c];

    for(; l <= end; c = l, l = 2*l+1)
    {
        if(l < end && a[l] < a[l+1])
        {
            l++;
        }
        if(tmp >= a[l])
        {
            break;
        }
        else
        {
            a[c] = a[l];
            a[l] = tmp;
        }
    }
}


void heapSortAsc(int* a, int n)
{
    int tmp;

    for(int i = n/2-1; i >= 0; i--)
    {
        maxHeapDown(a, i, n-1);
    }

    for(int i = n-1; i > 0; i--)
    {
        tmp = a[0];
        a[0] = a[i];
        a[i] = tmp;

        maxHeapDown(a, 0, i-1);
    }
}

void minHeapDown(int* a, int start, int end)
{
    int c = start;
    int l = 2*c + 1;
    int tmp = a[c];

    for(; l <= end; c = l, l = 2*l+1)
    {
        if(l < end && a[l] > a[l+1])
        {
            l++;
        }
        if(tmp <= a[l])
        {
            break;
        }
        else
        {
            a[c] = a[l];
            a[l] = tmp;
        }
    }
}

void heapSortDesc(int* a, int n)
{
    int tmp;

    for(int i = n/2-1; i >= 0; i--)
    {
        minHeapDown(a, i, n-1);
    }

    for(int i = n-1; i > 0; i--)
    {
        tmp = a[0];
        a[0] = a[i];
        a[i] = tmp;

        minHeapDown(a, 0, i-1);

    }
}

int main()
{
    int a[] = {20,30,90,40,70,110,60,10,100,50,80};
    int ilen = (sizeof(a)) / (sizeof(a[0]));

	cout << "before sort: ";
	for (int i=0; i < ilen; i++)
		cout << a[i] << " ";
	cout << endl;

	//heapSortAsc(a, ilen);			// ÉýÐòÅÅÁÐ
	heapSortDesc(a, ilen);		// ½µÐòÅÅÁÐ

	cout << "after  sort: ";
	for (int i=0; i < ilen; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}

