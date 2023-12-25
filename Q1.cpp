#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n,q;
    vector< vector<int> > v;
    cout<<"Enter the rows and columns"<<endl;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        vector<int> v1;
        for(int j=0; j<n; j++){
            cout<<"Enter value of q"<<endl;
            cin>>q;
            v1.push_back(q);
        }
        v.push_back(v1);
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]==0){
                for(int k=0; k<n; k++) v[i][k]=0;
                for(int f=0; f<m; f++) v[f][j]=0;
                j=n-1;
                i=m-1;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}