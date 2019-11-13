#include<stdio.h>
#include<stdlib.h>

int main ()
    {
        int i,n,num;
        int * my_array;
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);

       printf("Input %d elements in the array :\n",n);
        my_array = (int*) calloc ( n,sizeof(int) );
        if (my_array==NULL)
        {
            printf (" Requested memory allocation is wrong.");
            exit (1);
        }
        for ( i=0; i<n; i++ )
        {
            printf (" element %d : ",i+1);
            scanf ("%d",&my_array[i]);
        }
        printf (" Values entered in the array are : \n");
        for ( i=0; i<n; i++ )
            printf (" %d ",my_array[i]);
        free (my_array);
        return 0;
    }
