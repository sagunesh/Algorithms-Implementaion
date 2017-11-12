
#include <stdio.h>
int count;
void findpair(int* arr,int n,int sum){
        int i,j,arr_sum;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            arr_sum=arr[i]+arr[j];
            if(arr_sum==sum){
                    count +=1;
            printf("The pair found is (%d , %d) ",arr[i],arr[j]);
            printf("\n");

        }

     }
    }
    if(count==0){
        printf("No pair found whose sum is = %d",sum);
    }else{
        printf("Total pair found whose sum = %d is %d",sum,count);

    }

}
int main()
{
    //initializing
    int arr[100];
    int i,n,sum;
    //scanning the elements in an array
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("Enter all %d  elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    //displaying scanned elements in an array
    printf("Entered elements are \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }
    //enter the number whose sum we need to find
    printf("Enter the element for which pair sum we need to find\n");
    scanf("%d",&sum);

    //calling find pair function
    findpair(arr,n,sum);



    return 0;
}
