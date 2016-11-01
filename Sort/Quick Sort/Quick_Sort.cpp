
/*

ѡ��һ����׼����ͨ��һ������Ҫ��������ݷָ�ɶ����������֣�
����һ���ֵ��������ݶ�������һ���ֵ��������ݶ�ҪС��
Ȼ���ٰ��˷����������������ݷֱ���п�������
����������̿��Եݹ���У��Դ˴ﵽ�������ݱ���������С�

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
            while(i < j && a[j] > x)    //���������ҵ�һ��С��x����
            {
                j--;
            }
            if(i < j)
            {
                a[i++] = a[j];
            }

            while(i < j && a[i] < x)    //���������ҵ�һ������x����
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


