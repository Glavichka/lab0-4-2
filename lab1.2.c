#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n = 0, k, index, tmpValue, tmpInd = 0;
  	int *size = (int*)calloc(n, sizeof(int));
  	int *tmpsize;
  	printf("Enter lenth of array:");
  	scanf("%d", &n);
  	while(1){
   		printf("1)Add item\n");
    		printf("2)Insert(index, item)\n");
    		printf("3)Size\n");
    		printf("4)Remove(index)\n");
    		printf("5)Set(index, item)\n");
    		printf("6)Get(index)\n");
    		printf("7)Print ArrayList\n");
    		printf("0)Exit\n");
    		scanf("%d", &k);
    	switch(k){
      		case 0:
      			return 0;
      		break;
      		case 1:
        		printf("Enter new value:\n");
        		scanf("%d", &tmpValue);
        		for(i = 0; i < n; i++){
          			if(i == n - 1 && size[i] != 0){
            				n = n * 2;
            				tmpsize = (int*)calloc(n, sizeof(int));
            				for(i = 0; i < n/2; i++){
              					tmpsize[i] = size[i];
            				}
            			size=(int*)calloc(n, sizeof(int));
            			for(i = 0; i < n; i++){
              				size[i] = tmpsize[i];
            			}
            			break;
          			}
        		}
        		for(i = 0; i < n; i++){
          			if(size[i] == 0 && i >= tmpInd){
            				size[i] = tmpValue;
            				tmpInd = i;
            				break;
          			}
        		}
		break;
      		case 2:
        		printf("Enter index for swith:\n");
        		scanf("%d", &index);
        		printf("Enter new value:\n");
        		scanf("%d", &tmpValue);
        		//int tmps;
        		for(i = 0; i < n; i++){
          			if(i == n - 1 && size[i] != 0){
            			n = n * 2;
            			tmpsize = (int*)calloc(n, sizeof(int));
            			for(i = 0; i < n/2; i++){
              				tmpsize[i] = size[i];
            			}	
            			size=(int*)calloc(n, sizeof(int));
            			for(i = 0; i < n; i++){
              				size[i] = tmpsize[i];
            				}
            			break;
          			}
        		}
        		for(i = n; i > index; i--){
          			size[i] = size[i-1];
        		}
        		size[index] = tmpValue;
        	break;
      		case 3:
        		printf("The size of ArrayList: %d\n", n);
        	break;
      		case 4:
        		printf("Enter index for removing:\n");
        		scanf("%d", &index);
        		size[index]=0;
        		break;
      		case 5:
        		printf("Enter index for make new value\n");
        		scanf("%d", &index);
        		printf("Enter new value\n");
        		scanf("%d", &tmpValue);
        		size[index] = tmpValue;
        	break;
      		case 6:
        		printf("Enter index which you want to see\n");
        		scanf("%d", &index);
        		printf("%d: %d\n", index, size[index]);
        	break;
      		case 7:
      			printf("Your array list:\n");
        		for(i=0; i<n; i++){
          			printf("%d: [%d]\n", i, size[i]);
        		}
      		break;
      		default: 
      			printf("Default. Exit...\n");
      			return 0;
    	}
	}
}
