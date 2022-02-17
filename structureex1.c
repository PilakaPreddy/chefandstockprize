#include<stdio.h>
struct book
{
	char bookname[30];
	int year;
	char author;
}s[3];

int main()
{
	int i;
	printf("enter the information about books\n");
	for(i=3;i>0;i--)
	{
		printf("enter the book name\n");
		scanf("%s",&s[i].bookname);
		printf("enter the year of publication\n");
		scanf("%d",&s[i].year);
		printf("enter the author name\n");
		scanf("%s",&s[i].author);
	}
	printf("displaying the information\n");
	
	for(i=3;i>0;i--)
	{
	printf("book name is %s\n",s[i].bookname);
	printf("year of publition is %d\n",s[i].year);
	printf("writer is %s\n",s[i].author);
	printf("\n");
}
	return 0;
}

