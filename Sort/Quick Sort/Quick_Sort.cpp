
/*

选择一个基准数，通过一趟排序将要排序的数据分割成独立的两部分；
其中一部分的所有数据都比另外一部分的所有数据都要小。
然后，再按此方法对这两部分数据分别进行快速排序，
整个排序过程可以递归进行，以此达到整个数据变成有序序列。

*/

#include <iostream>

using namespace std;

void quickSort(int *a, int l, int r)
{
    if(l < r)
    {
        int i = l;
        int j = r;
        int x = a[i];

        while(i < j)
        {
            while(i < j && a[j] > x)    //从右向左找第一个小于x的数
            {
                j--;
            }
            if(i < j)
            {
                a[i++] = a[j];
            }

            while(i < j && a[i] < x)    //从左向右找第一个大于x的数
            {
                i++;
            }
            if(i < j)
            {
                a[j--] = a[i];
            }
        }
        a[j] = x;
        quickSort(a, l, i);
        quickSort(a, i+1, r);

    }
}


int main()
{
    int a[] = {30, 40, 60, 10, 20,50};
    int length = sizeof(a) /sizeof(a[0]);

    cout << "Before Sort: ";
    for(int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    quickSort(a, 0, length-1);

    cout << "After Sort: ";
    for(int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;

}


