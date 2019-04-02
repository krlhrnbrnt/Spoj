#include <stdio.h>
#include <math.h>

int Prime(int n);
int main()
{
    int rows;
    scanf("%d", &rows);
    
    int n1, n2, i, flag;
	for (int k=0;k<rows;k++){
	    scanf("%d %d", &n1, &n2);
	    if (n1 < 2){
	    	n1 = 2;
	    }
	    for(i=n1; i<=n2; ++i)
	    {
	        if (i%2==0 && i!=2){
	        	flag = 0;
	        }
	        else{
	        	flag = Prime(i);
	        }
	        if(flag == 1)
	            printf("%d\n",i);
	    }
	    if (k < rows-1){
	    	printf("\n");
	    }
	}
}


int Prime(int n)
{
    int j, root,flag = 1;

	root = round(sqrt(n));
    for(j=3; j <= root; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}