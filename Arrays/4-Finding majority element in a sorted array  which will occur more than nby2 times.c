
/*----
# Basic Approach O(n) time to find majority elements that occurs more than n/2 times
#using linear search
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int count;
void majorityelement(int* arr,int size){

    int i;
    if(size==1){
         count+=1;
         printf("Majority element found that occurs more than %d times is %d",size/2,arr[0]);
         exit(1);//add stdlib header file to ignore warning
    }
    for(i=0;i<size/2;i++){
            if(arr[i]==arr[i+size/2]){
                    count+=1;
                printf("Majority element found that occurs more than %d times is %d",size/2,arr[i]);
                printf("\n");
            }

    }
    if(count==0){
        printf("No majority element found that occurs more than %d times \n",size/2);
    }
}

int main()
{
    //initializing
    int arr[100];
    int i,n;
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


    //calling majorityelement find function
    majorityelement(arr,n);





    return 0;
}
