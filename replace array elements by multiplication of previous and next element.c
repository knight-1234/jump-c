/*C prgram to replace array elements by multiplication of previous and next element*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("enter no of elemnts for the array");
    scanf("%d",&n);
    
    int *p;
    p=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        
        printf("enter element %d",i+1);
        scanf("%d",&p[i]);
         }
    int s=p[0];
    p[0]*=p[1];
    for(int i=1;i<n-1;i++){
        
        int v=p[i];
        
        p[i]=s*p[i+1];
        
        s=v;
        
    
        
    }
    p[n-1]=s*p[n-1];
    
    for(int i=0;i<n;i++){
        
        printf("%d\n",p[i]);
    
}
    
    
    
    
    
    
    
    
}
