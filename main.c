#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void S0 (int *data);

int main(void)
{
	int d[10];
	S0(d);

}

void S0 (int *data)
{
	int i,j,k;
	srand(time(NULL));
	printf("¤Q­Ó¶Ã¼Æ:");
	for (i=0;i<=9;i++)
	{
		do
		{
			data[i]=(rand()%51)+10;
			k=0;
			for (j=0;j<i;j++)
			{
				if(data[i]==data[j])
				{
					k=1;
					break;
				}
			}
		}while(k==1);
	    printf(" %d ",data[i]);
	}
    printf("\n");
}

