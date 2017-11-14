#include <stdio.h>

void linearsearch(int* arr,int n,int x){
        int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            printf("The position of element is %d",i+1);
            printf("\n");
            break;
        }

    }
    if(i==n){
        printf("No element found with no. %d",x);
    }

}
int main()
{
    int arr[100];
    int i,n,search;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter all %d  elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    printf("Entered elements are \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }
    printf("Enter the element to search \n");
    scanf("%d",&search);

    //calling the searching function
    linearsearch(arr,n,search);



    return 0;
}
