#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 1; i <= n; i++)
    {
        arr[i-1] = i;
    }
    int k, temp;
    k = temp = 0;
    vector<int> pn;
    do
    {
        pn.push_back(arr[k]);
        for(int i = 0; i < m; i++){
            temp = (k+i)%n;
        }
        k=temp;
    } while (k!=0);

    for(size_t i = 0; i < pn.size(); i++)
        cout << pn[i];
    cout<<endl;
    return 0;
}