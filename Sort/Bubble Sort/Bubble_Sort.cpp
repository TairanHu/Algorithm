

#include <iostream>

using namespace std;

void bubbleSort1(int *a, int n)
{
    int tmp;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
}


void bubbleSort2(int *a, int n)
{
    int tmp;

    for(int i = 0; i < n-1; i++)
    {

        for(int j = n-1; j > i; j--)
        {
            if(a[j-1] > a[j])
            {
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }

    }
}

void bubbleSort3(int *a, int n)
{
    int tmp;
    bool flag;

    for(int i = 0; i < n-1; i++)
    {
        flag = 0;

        for(int j = n-1; j > i; j--)
        {
            if(a[j-1] > a[j])
            {
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;

                flag = 1;
            }
        }

        if(flag == 0)
            break;
    }
}

int main()
{
    int a[] = {20, 40, 30, 10, 60, 50};
    int length = sizeof(a)/sizeof(a[0]);

    cout << "Before Sort: ";
    for(int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    bubbleSort2(a, length);

    cout << "After Sort: ";
    for(int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

}



