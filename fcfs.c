
#include <stdio.h>

void main(){
    
   int n,h,ar[20],i,seek,b[20],s=0;
 
   printf("Enter the number of requests and head position");
  
   scanf("%d %d", &n,&h);
   
   b[0]=h;
    
   for(i=0;i<n;i++){
    
      printf("Enter the requests: ");
      
      scanf("%d",&ar[i]);
      
      b[i+1]=ar[i];
    
   }
  
   printf("MOVEMENT: \n (");
   
   for(i=0;i<=n;i++){
      
      printf("%d, ",b[i]);
  
      if (i!=0 && b[i]>b[i-1]) 
          s=s+(b[i]-b[i-1]);
       
  
    else if(i!=0 && b[i-1]>b[i])
  
          s=s+(b[i-1]-b[i]);
        

    }
    
   printf(")\nThe seek time is: %d",s);
      
    


}
