#include <stdio.h>

int main()
{
	int location, start, end, mid;
	int data[8] = {1, 3, 5, 9, 10, 21, 33, 100 };
	
	scanf("%d", &location);
	start = 0;
	end = 4;
	
	while (start <= end){
		mid = (start + end) / 2;
		if (location == data[mid]){
			printf("%d", mid);
			return 0;
		}
	else if (location <data[mid]){
		end = mid - 1;
	}
	else if (location > data[mid]){
		start = mid +1;
	}
	}
	
	printf("¾øÀ½");
    return 0; 
	
}
