#include <iostream>

using namespace std;

int main()
{
    int n,r;
    cout<<"permutation nPr"<<endl;
    
    cin>>n;
    cin>>r;
    
    int p1=1;
    for(int i=1;i<=n;++i){
        
        p1*=i;
        
        
    }
    
    int r1=1;
    for(int i=1;i<=(n-r);++i){
        
        r1*=i;
    }
    
    
    
    cout<<"permutation of a and b will be"<<endl;
    cout<<p1/r1;
    
    
    
    
    
    
}