#include <stdio.h>

int binarysearch(int* arr,int j,int n,int x){
        int i;
        int mid=(j + (n-1))/2;

   if(n>=0){
        if(arr[mid]==x){
        return mid;

    }
    if(arr[mid]>x){
       return(binarysearch(arr,j,mid-1,x));
    }
    else{
        return(binarysearch(arr,mid+1,n,x));
    }
   }

return -1;

}
int main()
{
    int arr[100];
    int j=0,i,n,search;
    printf("Enter the number of elements in array in sorted order\n");
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
int position = binarysearch(arr,j,n-1,search);

(position == -1)? printf("The position of element is not found"): printf("The position of element is : %d",position);



    return 0;
}
