
/*----
#Hash approach took O(n) time
#Naive Approach took O(n^2) time
This can be seen on very large inputs
*/

#include <stdio.h>
#include <time.h>
#define MAX 100

int count;
void findpair(int* arr,int size,int sum){
    //hash approach
    int i,temp;
    int hash[MAX]={0};
    for(i=0;i<size;i++){
        temp = sum - arr[i];
        if(temp>=0&&hash[temp]==1){
             count +=1;
            printf("The pair found with given sum using hash approach %d is (%d , %d) ",sum,arr[i],temp);
            printf("\n");
        }
        hash[arr[i]]=1;
    }
    if(count==0){
        printf("No pair found whose sum is = %d \n",sum);
    }else{
        printf("Total pair found whose sum = %d is %d \n",sum,count);

    }
}
//naive approach
void findpairnaive(int* arr,int n,int sum){
        int i,j,arr_sum;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            arr_sum=arr[i]+arr[j];
            if(arr_sum==sum){
                    count +=1;
            printf("The pair found using naive approach is (%d , %d) ",arr[i],arr[j]);
            printf("\n");

        }

     }
    }
    if(count==0){
        printf("No pair found whose sum is = %d\n",sum);
    }else{
        printf("Total pair found whose sum = %d is %d\n",sum,count);

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
    if(n>MAX){
        printf("Array size can't be greater than %d \n",MAX);
        exit(1);
    }
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

    //calling find pair function  using hash approach
    // Calculate the time taken

    // comparison between naive and hash approach
    clock_t t;
    t = clock();
    findpair(arr,n,sum);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("findpair() took %f seconds to execute \n", time_taken);

    clock_t t1;
    t1 = clock();
    findpairnaive(arr,n,sum);
    t1 = clock() - t1;
    double time_taken1 = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("findpairnaive() took %f seconds to execute \n", time_taken1);
    return 0;




    return 0;
}
