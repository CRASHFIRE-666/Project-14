#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout<<"Введите N"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Введите массив"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int k=0;
    for (int i=1; i<n-1; i++)
    {
        if ((a[i]>a[i-1]) and(a[i]>a[i+1]))
        {
            k=i;
        }
    }
    if (k==0)
    {
        cout<<"Ошибка"<<endl;
    }
    else
    {
        cout<<"Локальный максимум="<<k<<endl;
    }
    return 0;
}
