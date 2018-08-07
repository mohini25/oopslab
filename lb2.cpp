#include<iostream.h>
void main()
{
	char *s[20];
	char name[20];
	int m;
	cout<<"enter no. of students";
	cin>>m;
	int *a;
	a=&m;
	for(int i=0;i<*a;i++)
	cout<<"enter name";
	cin>>name;
	int length=strlen(name);
	str[i]=new char[length+1];
	strcpy(*(s+i),name);
	cout<<str[i];
	print menu();
cout<<"choice=?"
cin>>ch;
switch (ch)
{
	case 1: 
	printlist(char s*[], int*a)
	{
		for(int i=0;i<*a;i++)
		cout<<*s[i];
		*(s+1)
	}break;
	case 2:
		insertlist(char *s[],int*a)
		{
			int pos;
			char name[20];
			cout<<"enter position at which name is to be inserted";
			cin>>pos;
			cout<<"enter name";
			cin>>name;
			for(int i=(*a)-1;i>=pos-1;i--)
			*(s+i+1)=*(s+i)
			*(s+pos-1)=name;
			*a++;
			cout<<"insertion successful";
          
		}break;
   case 3: 
   delete(char *s[],int *m)
   char name[20];
   cout<<"enter ABCD";
   cin>>name;
   for(i=0;i<=*a;i++)
   {
   	if(strcmp(*(s+i),name==0))
   	for(int j=i;j<=(*a)-1;j++)
   	*(s+j)=*(s+j+1);
   	(*a)--
   }
}
}
