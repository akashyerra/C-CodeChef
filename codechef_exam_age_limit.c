#include <stdio.h>

int main(void) {
    int n,i,j;
    scanf("%d", &n);
    int age[n][3];
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &age[i][j]);
        }
    }
    
    for(i=0; i<n; i++)
    {
        if(age[i][2]>=age[i][0] && age[i][2]<age[i][1])
        {
            printf("\nYES");
        }
        else
        {
            printf("\nNO");
        }
    }
	return 0;
}

