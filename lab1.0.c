#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

  
int bubbleSort(int n, int arr[n]){
  int i, j, k;
  int tmp;
  //printf("\nSorted array:\n");
  for(i = 0; i < n - 1; i++){
    for(j = i + 1; j < n; j++){
      if(arr[j] < arr[i]){
        tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
      }
    }
  }
 /*for(k = 0; k < n; k++){
    printf("[%d]\t", arr[k]);
  }*/
}

void summElem(int n, int arr[n]){
  int i, k;
  if (n != 0) arr[1] += arr[0];
 /* printf("\nArray after summ: \n");
  for(k = 0; k < n; k++){
    printf("[%d]\t", arr[k]);
  }*/
}

int deleteTheSmallest(int n, int arr[n]){
  int i, j;
  int k;
  for(i = 0; i < n - 1; i++){
    arr[i] = arr[i + 1];
  }
  /*printf("\nArray after deleting: \n");
  for(k = 0; k < n; k++){
    printf("[%d]\t", arr[k]);
  }*/
}

void fillArr(int n, int arr[n]){
  int i, k;
  srand(time(NULL)); 
  printf("Your array: \n");
  for(i = 0; i < n; i++){
    arr[i] = rand () % 100;
    printf("[%d]\t", arr[i]);
  }
  int temp = n;
  for(k = 0; k < temp; k++){
    
    printf("\n");
    bubbleSort(n, arr);
    printf("\n");
    summElem(n, arr);
    printf("\n");
    deleteTheSmallest(n, arr);
    n--;
    printf("Step #%d: ", (k+1));
    for(i = 0; i < n; i++){
    printf("[%d]\t", arr[i]);
  }
    if (n == 0) printf("Your element = %d\n",arr[0]);
    
  }
}

int main(){
  int n;
  printf("Enter lenth of array:");
  scanf("%d", &n);
  int arr[n-1];
  fillArr(n, arr);
}
