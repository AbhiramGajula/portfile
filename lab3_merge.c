#include <stdio.h>
#include <stdlib.h>
#include <time.h>   


void merge(int a[], int ini, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - ini + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; 
       
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[ini + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    
      
    i = 0; 
    j = 0;    
    k = ini;  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}    
  
void mergeSort(int a[], int ini, int end)  
{  
    if (ini < end)   
    {  
        int mid = (ini + end) / 2;  
        mergeSort(a, ini, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, ini, mid, end);  
    }  
}  


void fillarr(int arr[] , int size){
	for (int i=0 ; i<size ; i++){
		arr[i] = rand();
	}
	return ;
}
  
int main()  {
    int arr[1000];
	clock_t start , end;
	fillarr(arr , 1000);
	// int size = sizeof(arr)/sizeof(arr[0]) ;
    start = clock();
    mergeSort(arr , 0 , 1000-1);
    end =clock();
    double total = (end - start);
    printf("\n\n The time taken to execute the program for the data size 1000 is %lf\n",(total)/1000);

    int brr[5000];
	clock_t start1 , end1;
	fillarr(brr , 5000);
	// int size = sizeof(arr)/sizeof(arr[0]) ;
    start1 = clock();
    mergeSort(brr ,0, 5000-1);
    end1 =clock();
    double total1 = (end1 - start1);
    printf("\n\n The time taken to execute the program for the data size 5000 is %lf\n",(total1)/1000);
    
    int crr[10000];
	clock_t start2 , end2;
	fillarr(crr , 10000);
	// int size = sizeof(arr)/sizeof(arr[0]) ;
    start2 = clock();
    mergeSort(crr ,0, 10000-1);
    end2 =clock();
    double total2 = (end2 - start2);
    printf("\n\n The time taken to execute the program for the data size 10000 is %lf\n",(total2)/1000);

    int drr[20000];
	clock_t start3 , end3;
	fillarr(drr , 20000);
	// int size = sizeof(arr)/sizeof(arr[0]) ;
    start3 = clock();
    mergeSort(drr ,0, 20000-1);
    end3 =clock();
    double total3 = (end3 - start3);
    printf("\n\n The time taken to execute the program for the data size 20000 is %lf\n",(total3)/1000);

    int err[30000];
	clock_t start4 , end4;
	fillarr(err , 30000);
	// int size = sizeof(arr)/sizeof(arr[0]) ;
    start4 = clock();
    mergeSort(err ,0, 30000-1);
    end4 =clock();
    double total4 = (end4 - start4);
    printf("\n\n The time taken to execute the program for the data size 30000 is %lf\n",(total4)/1000);
	return 0;
}
