    
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char input[100];
    int i=0;
    
    printf("請輸入要轉換的字串:\n");
    scanf("%s",&input[i]);
	while((i<=100)&&(input[i]>='A'))
	{
    	if((input[i]>='A')&&(input[i]<='Z'))
		{        
    	    input[i]+=32;
    	    printf("%c",input[i]);
    	}
		else if((input[i]>='a')&&(input[i]<='z'))
		{
    	    input[i]-=32;
    	    printf("%c",input[i]);
    	}
    	i++;
	}
	printf("\n");
    system("pause");
	return 0;
}

