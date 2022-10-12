#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
	int n = 7, arr[n];
	int i = 0, summ = 0, theBiggest = 0, middle = 0, neg = 0;
  	//printf("Enter the lenth of array:");
  	//scanf("%d", &n);
  	srand(time(NULL));
  	for(i = 0; i < n; i++){
    		arr[i] = rand () % 201 - 100;
    		middle = middle + arr[i];
    		printf("[%d]\t", arr[i]);
  	}
 	printf("\n");
 	middle = middle / n;
 	for(i = 0; i < n; i++){
    		if(arr[i] > middle){
    			theBiggest++;
		}
  		if(arr[i] < 0 && neg == 0){
    			neg = 1;
  			}
  		if(neg == 1){
    			summ = summ + abs(arr[i]);
  		}
  	}
  	printf("Average number: %d\n", middle);
  	printf("Number of elements larget than middle value: %d\n", theBiggest);
  	printf("Sum after first negative: %d\n", summ);
}
