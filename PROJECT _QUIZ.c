#include<stdio.h>
#include<conio.h>
void login();
void reg();
void strt1();
void strt();
void score();
void a();
void b();
void c();
void quizc();
void quiz();
void java();
void main()
{
int choic10;
clrscr();
printf("\t\t\t|------------------------|\n");
printf("\t\t\t|Welcome In Language Quiz|\n");
printf("\t\t\t|------------------------|\n\n");
printf("1) Login Page\n2) Register page\n3) Exit");
scanf("%d",&choic10);
clrscr();
switch(choic10)
{
case 1: login();
	clrscr();
	break;
case 2: reg();
	clrscr();
	break;
default: break;
}
getch();
}
void reg()
{
FILE *ptr9;
struct principal
{
int ab,bc;
char ch9[10];
};
struct principal cd[5],de[5],ef[5];
int ij;
ptr9=fopen("E:\amk\reg.txt","a");
printf("Name\tRoll no.\tPassword\n");
for(ij=0;ij<6;ij++)
{
scanf("%s%d%d",&cd[ij].ch9,&de[ij].ab,&ef[ij].bc);
}
for(ij=0;ij<7;ij++)
{
fprintf(ptr9,"%s\t%d\t%d\n",cd[ij].ch9,de[ij].ab,ef[ij].bc);
}
getch();
}


void login()
{
FILE *ptr10;
struct regi
{
int fg,hi;
char ch10[10];
};
struct regi jk[5],kl[5],lm[5];
int km,mn,loc=0,loc1=0,nl;
ptr10=fopen("E:\amk\reg.txt","r");
for(km=0;km<7;km++)
{
fscanf(ptr10,"%s%d%d",&jk[km].ch10,&kl[km].fg,&lm[km].hi);
}
printf("Password\n");
scanf("%d",&mn);
clrscr();
for(km=0;km<7;km++)
{
if(mn==lm[km].hi)
{
loc=km+1;
}
}
if(loc!=0)
{
printf("at this loc\n");
 printf("%d",loc);
 clrscr();
 }
else
{
printf("no. is not\n");
clrscr();
}
printf("Roll No.\n");
scanf("%d",&nl);
clrscr();
for(km=0;km<7;km++)
{
if(nl==kl[km].fg)
{
loc1=km+1;
}
}
if(loc1!=0)
{
 printf("%d",loc1);
 clrscr();
 }
else
{
printf("no. is not\n");
clrscr();
}
if(loc==loc1)
{
strt1();
}
else
{
printf("Wrong Entery\n");
}
getch();
}
void strt1()
{
int choice1;
printf("\t\t\t|------------------------|\n");
printf("\t\t\t|Welcome In Language Quiz|\n");
printf("\t\t\t|------------------------|\n\n");
printf("1) Play quiz\n2) Score\n3) Exit\n");
scanf("%d",&choice1);
clrscr();
switch(choice1)
{
case 1: strt();
	clrscr();
	break;
case 2: score();
	clrscr();
	break;
default:break;
}
}
void score()
{
int choic3;
printf("\t\t\t|------------------------|\n");
printf("\t\t\t|Welcome In Language Quiz|\n");
printf("\t\t\t|------------------------|\n\n");
printf("1) C score\n2) C++ score\n3) Java score\n4) Main page\n5) Exit\n");
scanf("%d",&choic3);
clrscr();
switch(choic3)
{
case 1: a();
	clrscr();
	break;
case 2: b();
	clrscr();
	break;
case 3: c();
	clrscr();
	break;
case 4: strt1();
	clrscr();
	break;
default:
	 break;
}
}
void strt()
{
int choice;
printf("\t\t\t|------------------------|\n");
printf("\t\t\t|Welcome In Language Quiz|\n");
printf("\t\t\t|------------------------|\n\n");
printf("\t\t\tWhich Quiz you want to play\n\n1) In C\n2) In C++\n3) In JAVA\n");
scanf("%d",&choice);
clrscr();
switch(choice)
{
 case 1 :
	 quizc();
	 clrscr();
	 break;
 case 2 :
	 quiz();
	 clrscr();
	 break;
 case 3:
	 java();
	 clrscr();
	 break;
 default: break;
 }
 getch();
 }
void a()
{
FILE *ptr3;
struct record
{
int p;
char ch3[10];
};
int choice3,g;
struct record v[50],s[50];
ptr3=fopen("E:\amk\C.txt","r");
for(g=0;g<5;g++)
{
fscanf(ptr3,"%s%d",&v[g].ch3,&s[g].p);
}
printf("Name\tScore\n");
for(g=0;g<5;g++)
{
printf("%s\t%d\n",v[g].ch3,s[g].p);
}
printf("Press 1 for Back Page\n");
scanf("%d",&choice3);
clrscr();
switch(choice3)
{
case 1:score();
       clrscr();
       break;
default: break;
}
getch();
}
void b()
{
FILE *ptr4;
struct record1
{
int q;
char ch4[10];
};
int choice4,h;
struct record1 t[50],l[50];
ptr4=fopen("E:\amk\C++.txt","r");
for(h=0;h<5;h++)
{
fscanf(ptr4,"%s%d",&t[h].ch4,&l[h].q);
}
printf("Name\tScore\n");
for(h=0;h<5;h++)
{
printf("%s\t%d\n",t[h].ch4,l[h].q);
}
printf("Press 1 for Back Page\n");
scanf("%d",&choice4);
clrscr();
switch(choice4)
{
case 1:score();
       clrscr();
       break;
 default:break;
 }
getch();
}
void c()
{
FILE *ptr5;
struct record2
{
int r;
char ch5[10];
};
int choice5,m;
struct record2 n[50],o[50];
ptr5=fopen("E:\amk\JAVA.txt","r");
for(m=0;m<5;m++)
{
fscanf(ptr5,"%s%d",&n[m].ch5,&o[m].r);
}
printf("Name\tScore\n");
for(m=0;m<5;m++)
{
printf("%s\t%d\n",n[m].ch5,o[m].r);
}
printf("Press 1 for Back Page\n");
scanf("%d",&choice5);
clrscr();
switch(choice5)
{
case 1:score();
       clrscr();
       break;
default:break;
}
getch();
}
void quizc()
{
FILE *ptr;
int i,c[10],sc=0;
int w;
char ch[10];
ptr=fopen("E:\amk\c.txt","a");
printf("\t\t\t\t|------|\n");
printf("\t\t\t\t|C Quiz|\n");
printf("\t\t\t\t|------|\n");
printf("There are 10 Questions \nHow many you want to play?\n");
scanf("%d",&w);
clrscr();
for(i=0;i<w;i++)
{
switch(i)
{
case 0:
       printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("How many loops in C\n1) 2       2) 3\n3) 4       4) 5\n");
       scanf("%d",&c[i]);
       if(c[i]==2)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
  case 1:
       printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("C language has been developed by?\n1) Martin Richards       2) Bijarne Stroustrup\n3) Dennis Ritche         4) Ken Thompson\n");
       scanf("%d",&c[i]);
       if(c[i]==3)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=3\n");
       getch();
       clrscr();
       }
       break;
  case 2:
	  printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("Pointer holds\n1) Value of Varriable       2) Address of variable\n3) Both                     4) Always Null\n");
       scanf("%d",&c[i]);
       if(c[i]==2)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
  case 3:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("To accept 100 different values into the\narray we require\n1) loop       2) If condition\n3) Function   4) Structure\n");
       scanf("%d",&c[i]);
       if(c[i]==1)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=1\n");
       getch();
       clrscr();
       }
       break;
  case 4:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("Which of the foolowing is allowed in\na C Airthmatic Instruction?\n1) []       2) {}\n3) ()       4) None\n");
       scanf("%d",&c[i]);
       if(c[i]==3)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=3\n");
       getch();
       clrscr();
       }
       break;
  case 5:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("Array is\n1) Pri. data type       2) Pointer data type\n3) Heteroge. type       4) Homogeno. type\n");
       scanf("%d",&c[i]);
       if(c[i]==4)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=4\n");
       getch();
       clrscr();
       }
       break;
  case 6:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("C programs are converted into machine language\nwith the help of?\n1) An Editor       2) A compiler\n3) An oper. Sys.   4) None\n");
       scanf("%d",&c[i]);
       if(c[i]==2)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
  case 7:
	printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("Float a[15],What is the size of array?\n1) 17       2) 14\n3) 15       4) 16\n");
       scanf("%d",&c[i]);
       if(c[i]==3)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=3\n");
       getch();
       clrscr();
       }
       break;
  case 8:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("C can be used on\n1) Only MS-DOS operating system\n2) Only Linux operating system\n3) Only Windows operating system\n4) All of the above\n");
       scanf("%d",&c[i]);
       if(c[i]==4)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=4\n");
       getch();
       clrscr();
       }
       break;
  case 9:
	  printf("|-----------|\n");
       printf("|Question %d.|\n",i+1);
       printf("|-----------|\n");
       printf("int[]={5,6,7,8,9}\nWhat is the value of a[3]?\n1) 9       2) 8\n3) 7       4) 6\n");
       scanf("%d",&c[i]);
       if(c[i]==2)
       {
       sc=sc+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
 }
 }
 printf("What is your Name?\n");
 scanf("%s",&ch);
 clrscr();
 fprintf(ptr,"%s\n%d\n",ch,sc);
 printf("What you want?\n1) Play More\n2) Exit\n");
 scanf("%d",&w);
 clrscr();
 switch(w)
 {
 case 1: strt1();
	 clrscr();
	 break;
 case 2: break;
 }
 }
void quiz()
{
FILE *ptr1;
int j,b[10],d=0;
int x;
char ch1[10];
ptr1=fopen("E:\amk\c++.txt","a");
printf("\t\t\t\t|--------|\n");
printf("\t\t\t\t|C++ Quiz|\n");
printf("\t\t\t\t|--------|\n");
printf("There are 10 Questions \nHow many you want to play?\n");
scanf("%d",&x);
clrscr();
for(j=0;j<x;j++)
{
switch(j)
{
case 0:
      printf("|-----------|\n");
      printf("|Question %d.|\n",j+1);
      printf("|-----------|\n");
       printf("What is the another name of language C++\n1) PHP        2) JAVA\n3) OOPS       4) C\n");
       scanf("%d",&b[j]);
       if(b[j]==3)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=3\n");
       getch();
       clrscr();
       }
       break;
  case 1:
       printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("What is Data hinding?\n1) It is related with hinding internal\nobjects details\n2) It is related with showing\ninternalobjects details\n3) It is related with datatypes\n4) None\n");
       scanf("%d",&b[j]);
       if(b[j]==1)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=1\n");
       getch();
       clrscr();
       }
       break;
       case 2:
	  printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("What is class in C++?\n1) When you defines a class,\nyou defines a blueprint for a data type\n2) When you defines a class,\nyou make get more functionatially\n3) When you defines a class,\nyou define the logic\n4) When you defines a class,\nyou make debugging\n");
       scanf("%d",&b[j]);
       if(b[j]==1)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=1\n");
       getch();
       clrscr();
       }
       break;
  case 3:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("What is object in C++?\n1) Object is part of syntex of\na class.\n2) Object is datatype of a class\n3) Object is an instance of a class\n4) Object is function of a class.\n");
       scanf("%d",&b[j]);
       if(b[j]==3)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=3\n");
       getch();
       clrscr();
       }
       break;
  case 4:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("What is purpose of abstract class?\n1) to provide help with database connectivity\n2) to provide data input to other classes\n3) to provide security to other classes\n4) to provide an appropriate base\nclass from which other classes\ncan inherit\n");
       scanf("%d",&b[j]);
       if(b[j]==4)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=4\n");
       getch();
       clrscr();
       }
       break;
  case 5:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("Classes that can be used\nto instantiate objects are called\nconcrete classes.\n1) True       2) False\n");
       scanf("%d",&b[j]);
       if(b[j]==1)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=1\n");
       getch();
       clrscr();
       }
       break;
  case 6:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("What is default visibility mode\nfor members of classes\nin C++?\n1) Private       2) Public\n3) Protected     4) Depends\n");
       scanf("%d",&b[j]);
       if(b[j]==1)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=1\n");
       getch();
       clrscr();
       }
       break;
  case 7:
	printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("Which is more memory efficient?\n1) Structure       2) Union\n3) Both            4) Depends on programmer\n");
       scanf("%d",&b[j]);
       if(b[j]==2)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
  case 8:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("Which among following is not a valid\nvisiblty mode in C++ program?\n1) Private\n2) Public\n3) Protected\n4) Limited\n");
       scanf("%d",&b[j]);
       if(b[j]==4)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=4\n");
       getch();
       clrscr();
       }
       break;
  case 9:
	  printf("|-----------|\n");
       printf("|Question %d.|\n",j+1);
       printf("|-----------|\n");
       printf("Even if we defines a function\nin a class,then also we\n need to declare it first\n1) True       2) False\n");
       scanf("%d",&b[j]);
       if(b[j]==2)
       {
       d=d+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
 }
 }
 printf("What is your Name?\n");
 scanf("%s",&ch1);
 clrscr();
 fprintf(ptr1,"%s\n%d\n",ch1,d);
 printf("What you want?\n1) Play More\n2) Exit\n");
 scanf("%d",&x);
 clrscr();
 switch(x)
 {
 case 1: strt1();
	 clrscr();
	 break;
 case 2: break;
 }
 }
void java()
{
FILE *ptr2;
int k,f[10],e=0;
int z;
char ch2[10];
ptr2=fopen("E:\amk\java.txt","a");
printf("\t\t\t\t|---------|\n");
printf("\t\t\t\t|JAVA Quiz|\n");
printf("\t\t\t\t|---------|\n");
printf("There are 10 Questions \nHow many you want to play?\n");
scanf("%d",&z);
clrscr();
for(k=0;k<z;k++)
{
switch(k)
{
case 0:
      printf("|-----------|\n");
      printf("|Question %d.|\n",k+1);
      printf("|-----------|\n");
       printf("How many types of java language\n1) 2       2) 3\n3) 4       4) 5\n");
       scanf("%d",&f[k]);
       if(f[k]==1)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       getch();
       clrscr();
       }
       break;
  case 1:
       printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("_________________makes Jav platform-independent.\n1) JVM       2) Java syntex\n3) Java API   4) Bytecodes\n");
       scanf("%d",&f[k]);
       if(f[k]==4)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=4\n");
       getch();
       clrscr();
       }
       break;
  case 2:
	  printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("Java's keywords includes NULL.\n1) True       2) False\n");
       scanf("%d",&f[k]);
       if(f[k]==2)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
  case 3:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("Which occupies more number\nof bits of memory.\n1) double       2) long\n3) both         4) occupies same\n");
       scanf("%d",&f[k]);
       if(f[k]==3)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=3\n");
       getch();
       clrscr();
       }
       break;
  case 4:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("The object is created with new keyword.\n1) at compile time       2) at run time\n3) depends on the code   4) None\n");
       scanf("%d",&f[k]);
       if(f[k]==2)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
  case 5:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("int x=0,y=0,z=0;\nx=(++x+y--)*z++;\nwhat is the value of x after execution?\n1) -2       2) -1\n3) 0       4) 1\n");
       scanf("%d",&f[k]);
       if(f[k]==3)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=3\n");
       getch();
       clrscr();
       }
       break;
  case 6:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("int 4thhouse=1234;\nsystem.out.println(4thhouse);\n1) 1234\n2) Display error as the value assigned\nis more than the range\nof integer\n3) displays error as coding is not\nas per java rules\n4) None\n");
       scanf("%d",&f[k]);
       if(f[k]==3)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=3\n");
       getch();
       clrscr();
       }
       break;
  case 7:
	printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("Java supports unsigned data types\n1) True       2) False\n");
       scanf("%d",&f[k]);
       if(f[k]==2)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
  case 8:
	 printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("How many primitive data types java defines?\n1) 6       2) 8\n3) 10       \n4) None\n");
       scanf("%d",&f[k]);
       if(f[k]==2)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=2\n");
       getch();
       clrscr();
       }
       break;
  case 9:
	  printf("|-----------|\n");
       printf("|Question %d.|\n",k+1);
       printf("|-----------|\n");
       printf("Final methods cannot be overridden\nbut overloaded?\n1) True      2)False\n");
       scanf("%d",&f[k]);
       if(f[k]==1)
       {
       e=e+1;
       printf("Correct\n");
       getch();
       clrscr();
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=1\n");
       getch();
       clrscr();
       }
       break;
 }
 }
 printf("What is your Name?\n");
 scanf("%s",&ch2);
 clrscr();
 fprintf(ptr2,"%s\n%d\n",ch2,e);
 printf("What you want?\n1) Play More\n2) Exit\n");
 scanf("%d",&z);
 clrscr();
  switch(z)
 {
 case 1: strt1();
	 clrscr();
	 break;
 case 2: break;
 }
 }
//DONE
//CONTRIBUTERS
//MEHAR KHAN NIAZI ,KUNAL LALWANI,MUHAMMAD AZHAR, HASEEB 
