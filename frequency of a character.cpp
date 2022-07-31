#include <iostream>


using namespace std;

int main()
{
    char A[10000]; 
    
    cout<<"enter the string"<<endl;
    fgets(A,sizeof(A),stdin);
    
    int k=0;
    char c;
    
    cout<<"enter the character"<<endl;
    cin>>c;
    
    for(int i=0;A[i]!='\0';++i){
        
        if(A[i]==c)
          
          ++k;
    }
    
    cout<<"frequency of the caracter in the string\t"<<k<<endl;
    
    
    
}