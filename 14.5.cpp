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
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]==a[j])
            {
                cout<<i<<j<<endl;
                return 0;
            }
        }
    }
    return 0;
}
