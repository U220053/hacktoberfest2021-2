 #include <stdio.h>
int main()
{
    char name[100];
    int size=-1;
	int spaces=0;
	int i=-1;
    printf("Enter full name : ");
	gets(name);
	printf("Abbreviated name: ");
	while(name[++size]!='\0')
	{
		if(name[size]==' ')
		spaces++;
	}
	printf("%c. ",name[0]);
	while(++i<size)
	{
		if(name[i]==' ')
		{
			if(spaces == 1)
				break;
			printf("%c. ",name[i+1]);
			spaces--;
		}
	}
	while(i++<size)
	{
		printf("%c",name[i]);
	}
    
    return 0;
}
