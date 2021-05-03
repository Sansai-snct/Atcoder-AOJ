#include<iostream>
using namespace std;
 
const int maxn=100000;
 
int n,s[maxn];
 
int partition(int p,int r)
{
    int x=s[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(s[j]<=x){
            i++;
            swap(s[i],s[j]);
        }
    }
    swap(s[i+1],s[r]);
    return i+1;
}
 
int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    int q=partition(0,n-1);
    for(int i=0;i<n;i++){
        if(i){
            cout << " ";
        }
        if(i==q){
            cout << "[";
        }
        cout << s[i];
        if(i==q){
            cout << "]";
        }
    }
    cout << endl;
    return 0;
}
