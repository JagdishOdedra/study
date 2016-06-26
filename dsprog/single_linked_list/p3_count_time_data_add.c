#include<stdio.h>
#include<stdlib.h>
//........................................................................................................................//
typedef struct student					// define structure...
{
unsigned int rollno;
char name[20];
float mark;
struct student *sp;
}ST;
//.......................................................................................................................//
void add_end(ST **);
void display(ST *,unsigned int);
unsigned int count(int);

main()							// main....
{
ST *headptr=0;
char ch;
unsigned int c=0;
do							// get data.....
{
	add_end(&headptr);
	printf("Do you want to add data Y/y \n");
	scanf(" %c",&ch);
	c=count(c);
}while((ch=='Y') || (ch=='y'));

display(headptr,c);
}
//........................................................................................................................//
void add_end(ST **ptr)							// function to get data...
{
ST *nd;
ST *nd1;
	nd=malloc(sizeof(ST));
printf("student rollno=\n");
scanf("%u",&nd->rollno);

printf("student name=\n");
scanf("%s",nd->name);

printf("student mark=\n");
scanf(" %f",&nd->mark);

if(*ptr==0)
{
	nd->sp=*ptr;
	*ptr=nd;
}
else
{
	nd1=*ptr;
	while(nd1->sp)
	nd1=nd1->sp;

nd->sp=nd1->sp;
nd1->sp=nd;
}
}
//........................................................................................................................//
void display(ST *p,unsigned int c)				// function to print the data....
{
int i=1;
	while(p)
	{
	printf("%d >\n rollno=%u\nname=%s\nmark=%f",i++,p->rollno,p->name,p->mark);
	printf("\n\n");
	p=p->sp;
	}
printf("total data =%u\n",c);
}
//........................................................................................................................//
unsigned int count(int c)					// function for count the number of data...
{
	return ++c;
}
