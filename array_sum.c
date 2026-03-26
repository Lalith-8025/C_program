#include<stdio.h>

int main(){

    int n,sum=0,num;

    printf("Enter the size of the Array:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter values to be stored in the Array:\n");
    
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        arr[i]=num;
        sum+=num;

    }
    printf("The Values are :\n");
    for(int j=0; j<n; j++){
        
        
        
        printf("%d\n",arr[j]);
    }
    printf("The Sum is :%d\n",sum);

    
    
    return 0;

}