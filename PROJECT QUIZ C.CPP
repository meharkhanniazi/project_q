//MEHAR KHAN NIAZI  //KUNAL LALWANI  //HASEEB
//MUHAMMAD AZHAR
#include<stdio.h>
#include<conio.h>
#include<string.h>

void quizc();
void qucc();
void java();
void phy();
void engl();
void again();
void kuha();
void qucc2(void);
//################################################
void score_write_cc(int score, char[]);
void reset_score_cc();
void disp_record_cc();
void score_write_cc2(int score, char[]);
void reset_score_cc2();
void disp_record_cc2();
void score_write_e(int score,char[]);
void reset_score_e();
void disp_record_e();
void score_write_p(int score,char[]);
void reset_score_p();
void disp_record_p();
void score_write_j(int score,char[]);
void reset_score_j();
void disp_record_j();
void score_write_c(int score,char[]);
void reset_score_c();
void disp_record_c();
void scores();
void cdata();
void jdata();
void pdata();
void edata();
void ccdata();
void cc2data();
//################################################
main()
{
int userinp;
clrscr();
printf("\t\t\t--------------------------\n");
printf("\t\t\t|Welcome in Language Quiz|\n");
printf("\t\t\t--------------------------\n");

printf("1) C Quiz");
printf("\n2) C++ QUIZ");
printf("\n3) JAVA QUIZ");
printf("\n4) PHYSICS QUIZ");
printf("\n5) ENGLISH GRAMMER QUIZ");
printf("\n6) C ++ QUIZ 2");
printf("\n7) SCORES");
printf("\n8) Exit");
printf("\n\nENTER: ");
scanf("%d",&userinp);
clrscr();

switch(userinp)
{
 case 1:
 quizc();
 break;

 case 2:
 qucc();
 break;

 case 3:
 java();
 break;

 case 4:
 phy();
 break;

 case 5:
 engl();
 break;

 case 6:
 qucc2();
 break;
 
 case 7:
 scores();
 break;

 case 8:
 break;

 default:
 break;
}
return 0;
}

void quizc(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThere are ______ loops in C.");
		printf("\n\n\t1. 2\n\t2. 3\n\t3. 4\n\t4. 5");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"3\".");
			getch();
			clrscr();
		}
		break;

		case 1:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nC Language has been developed by __________________.");
		printf("\n\n\t1. Martin Richards\n\t2. Bijarne Stroustrup\n\t3. Dennis Ritche\n\t4.KenThompson");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Dennis Ritche\".");
			getch();
			clrscr();
		}
		break;

		case 2:
               
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nPointer holds _________________.");
		printf("\n\n\t1. Value of variable\n\t2. Address of variable\n\t3. Both\n\t4. Ken Always Null");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Address of Variable\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nTo accept 100 different values into the array we require ___________.");
		printf("\n\n\t1. loop\n\t2. if condition\n\t3. function\n\t4. structure");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"loop\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                quizc();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }
		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich of the following is allowed in a C Arithmatic Instruction?");
		printf("\n\n\t1. [ ]\n\t2. { }\n\t3. ( )\n\t4. None of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"( )\".");
			getch();
			clrscr();
		}
		break;

		case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nIs it possible to run program without main() function?");
		printf("\n\n\t1. Yes\n\t2. No\n\t3. I don't know");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"No\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nHow many main() function we can have in our project?");
		printf("\n\n\t1. 1\n\t2. 2\n\t3. No Limit\n\t4. Depends on compiler");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"1\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1: 
                quizc();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;;
                }
                }
		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nIs it true that a function may have several declaration, but only one definition.");
		printf("\n\n\t1. True\n\t2. False\n\t3. I don't know");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"1\".");
			getch();
			clrscr();
		}
		break;
		
		case 8:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich programming language is more faster among these?");
		printf("\n\n\t1. Java\n\t2. PHP\n\t3. C\n\t4. Visual Basic");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"C\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich of the following is executed by Preprocess?");
		printf("\n\n\t1. #include<stdio.h>\n\t2. return 0\n\t3. void main(int argc , char ** argv)\n\t4. None of above");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"#include<stdio.h>\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                quizc();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
		}
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_c(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		quizc();
		clrscr();
		break;
		case 2:
		again();
		break;
		case 3: break;
                default:
                break;
		}
		}
}

void qucc(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\nWhat is the another name of language C++ ?\n");
		printf("\n\n\t1. PHP\n\t2. JAVA\n\t3. OOPS\n\t4. C");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"OOPS\".");
			getch();
			clrscr();
		}
		break;

		case 1:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nC What is data hinding ?\n");
		printf("\n\n\t1. It is related with hinding internal\n\tobjects details\n\t2. It is related with showing\n\tinternal object detail\n\t3. It is relate with data types\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"It is related with hinding internal\n\tobjects details\".");
			getch();
			clrscr();
		}
		break;

		case 2:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nwhat is class in C++?");
		printf("\n\n\t1. when you define a class, \n\t you define a blue print for a data type\n\t2. When you define a class,\n\t you make get more functionatially\n\t3. When you define a class\n\t you define the logic\n\t4. when you define a class\n\t you make debugging");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"when you define a class, \n\t\t you define a blue print for a data type\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhat is object in C++?");
		printf("\n\n\t1. Object is part of syntex of \n\ta class.\n\t2. Object is datatype of a class\\n\t3. Object is an instance of a class\n\t4. Object is function of a class");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Object is an instance of a class\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }

		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhat is purpose of abstract class ?\n");
		printf("\n\n\t1. to provide help with database connectivily\n\t2. to provide help with data input to other classes\n\t3. to provide security to other classes\n\t4. to provide an appropriate base\n\tclass from which other classes \n\t can inherit");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"To provide an appropriate base\n\tclass from which other classes \n\t can inherit\".");
			getch();
			clrscr();
		}
		break;

		case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nClasses that can be used\n\t to instantate objects are called\n\tconcrete classes.");
		printf("\n\n\t1. True\n\t2. False");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"True\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhat is default visibility mode\n\tfor members of classes\n\tin C++?\n");
		printf("\n\n\t1. Private\n\t2. Public\n\t3. Protected\n\t4. Depends");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Private\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }

		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich is more memory efficient?");
		printf("\n\n\t1. Structure\n\t2. Union\n\t3. Both \n\t4. Depend on programmer");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Union\".");
			getch();
			clrscr();
		}
		break;

		case 8:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhichg among following is not a valid\nvisbility mode in C++ program?");
		printf("\n\n\t1. private\n\t2. Public\n\t3. Protected\n\t4. Limited");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Limited\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nEven if we deifnes a function\nin a class, then also we\n need to declare it first");
		printf("\n\n\t1. True\n\t2. False");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"False\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_cc(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                case 3: break;
                default:
                break;
                }
                }
}
void java(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\nHow many types of java language\n");
		printf("\n\n\t1. 2\n\t2. 3\n\t3. 4\n\t4. 5");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"2\".");
			getch();
			clrscr();
		}
		break;

		case 1:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n________Makes java Platform independant.\n");
		printf("\n\n\t1. JVM\n\t2. java syntax\n\t3. Java API\n\t4. Bytecoddes");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Bytecoddes\".");
			getch();
			clrscr();
		}
		break;

		case 2:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nJava's kyword includes NULL");
		printf("\n\n\t1. True\n\t2.False");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"False\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nwhich ocuupies more number\n of bits of memory.");
		printf("\n\n\t1. double\n\t2. long\n\t3. both\n\t4. occupies same");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"both\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                java();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }

		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe object is created with new keyword \n");
		printf("\n\n\t1. at compile time\n\t2. at run time\n\t3. depends on the code\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"at run time\".");
			getch();
			clrscr();
		}
		break;

		case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nint x=0,y=0,z=0,\nx=(++x+y--)*z++;\n What is the value of x after exexcution?\n 1)  2) False");
		printf("\n\n\t1. -2\n\t2. -1\n\t3. 0\n\t3. 1");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"0\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nint 4th house=1234;\n\tsystem.out.println(4th house);\n");
		printf("\n\n\t1. 1234\n\t2. Display error as the value assigned\n\tis more then the range of integer\n\t3. displays error as coding is not\n\tas per java rules\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"displays error as coding is not\n\tas per java rules\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                java();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }

		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich is more memory efficient?");
		printf("\n\n\t1. Structure\n\t2. Union\n\t3. Both \n\t4. Depend on programmer");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Union\".");
			getch();
			clrscr();
		}
		break;

		case 8:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nHow many primitive data types java defines?");
		printf("\n\n\t1. 6\n\t2. 8\n\t3. 10\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"8\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nFinal methods cannot be overhidden\n\t but over loaded?");
		printf("\n\n\t1. True\n\t2. False");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"True\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                java();
	        clrscr();
	        break;
                case 2:
                again();
		break;
		default:
                break;
		}
		}
	}
 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_j(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                java();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                case 3: break;
                default:
                break;
                }
                }
}
 void phy(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
	        printf("|--------------|");
                printf("\nThe SI unit of Heat is________?\n");
                printf("\n\n\t1)Watt. \n\t2) volt. \n\t3)joule \n\t4)None\n");
                printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"joule\".");
			getch();
			clrscr();
		}
		break;
case 1:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe branch of science which deals with the properties of matter and energy is called__________?\n");
		printf("\n\n\t1. Biology\n\t2. Geography\n\t3. Physics\n\t4. chemistry\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"physcis\".");
			getch();
			clrscr();
		}
		break;
case 2:
               
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nPhysics is one of the branches of___________?");
		printf("\n\n\t1. Physical science\n\t2. social science\n\t3. Biological science\n\t4. life science\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"physical science\".");
			getch();
			clrscr();
		}
		break;
case 3:           
		if(count>=1)
                {
                count=0;
                printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nlinear expansion occurs in_________?");
		printf("\n\n\t1. solid\n\t2.liquid\n\t3. gas\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"solid\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                phy();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }
case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhen body is in motion, ____________ always changes?");
		printf("\n\n\t1.its velocity\n\t2.its acceleration\n\t3.its momentum\n\t4. its position vector\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"its position vector\".");
			getch();
			clrscr();
		}
		break;
case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nArea under velocity time graph represent_____________________?");
		printf("\n\n\t1force\n\t2.displacement\n\t3.distance\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"displacement\".");
			getch();
			clrscr();
		}
		break;
case 6:
		if(count>=1)
                {
                count=0;
                printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n1st law of motion gives the definition of _________________________?");
		printf("\n\n\t1 rest\n\t2.motion\n\t3.force\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"force\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                phy();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }
case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nTime rate of change of momentum is equal to____________________?");
		printf("\n\n\t1force\n\t2.impulse\n\t3.torque\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"force\".");
			getch();
			clrscr();
		}
		break;
case 8:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe trajectory (or path) of a projectile is_________________?");
		printf("\n\n\t1parabola\n\t2.hyberbola\n\t3.ellipse\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"parabola\".");
			getch();
			clrscr();
		}
		break;
case 9:
		if(count>=1)
                {
                count=0;
                printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWaves transmit ________________ from one place to another?");
		printf("\n\n\t1energy\n\t2.mass\n\t3.weight\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"energy\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                phy();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }
        }

}
}
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_p(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                case 3: break;
                default:
                break;
                }
                }
}
void engl(void)
{
 int userquiz,i,m,w,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\nAntonym of FALLACIOUS is _____?\n");
		printf("\n\n\t1. credit\n\t2. Truthful\n\t3. Dishonest\n\t4. Clean");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Truthful\".");
			getch();
			clrscr();
		}
		break;

		case 1:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nCantonym of FOREMOST is _____?\n");
		printf("\n\n\t1.Disposed\n\t\n\t2. Mature\n\t\n\t3. Unimportant\n\t4. hindmost");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Unimportant");
			getch();
			clrscr();
		}
		break;

		case 2:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of QUIESCENT");
		printf("\n\n\t1. Fallow\n\t2. DEactivated\n\t3. Aslpeep\n\t4. Active");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Active\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of PHILISTINE?");
		printf("\n\n\t1. Uncultured\n\t2.Smutty\\n\t3. Uncultured\n\t4. Cultured");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Cultured\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                engl();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }
		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of NIGGARDLY is _____?\n");
		printf("\n\n\t1.CLoseFriend\n\t2. Skimpy\n\t3. Chintzy\n\t4. Generous");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Generous.");
			getch();
			clrscr();
		}
		break;

		case 5:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of GARBLED is _____?");
		printf("\n\n\t1. Unscramble\n\t2.Obscure");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Unscramble\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of SENILE is _____?\n");
		printf("\n\n\t1. Alert\n\t2. Ancient\n\t3.Doting\n\t4. Anile");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Alert\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                engl();
	        clrscr();
	        break;
                case 2:
                again();
                break;
                default:
                break;
                }
                }
		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of INORDINATE is _____?");
		printf("\n\n\t1. Moderate\n\t2. Wasteful\n\t3. Wanton \n\t4. dizzying");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Moderate\".");
			getch();
			clrscr();
		}
		break;

		case 8:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of LUCID is _____?");
		printf("\n\n\t1.Obvious\n\t2.Vague\n\t3. Evident\n\t4. Explicit");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Vague\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of INGEST is _____?");
		printf("\n\n\t1. Disgorge\n\t2. Devour");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Disgorge\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		engl();
		clrscr();
		break;
		case 2:
		again();
		break;
		default:
                break;
		}
		}
	}

}
}
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_e(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		engl();
		clrscr();
		break;
		case 2:
		again();
		break;
		case 3: break;
                default:
                break;
		}
		}
}
//#######################################################################
void qucc2(void)
{
  int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
  char ch[10],playernm[20];
  printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
  printf("\n\n\tThere are 10 Questions. How many you want to play?");
  printf("\n\tEnter here please: ");
  scanf("%d",&userquiz);
  clrscr();
  printf("\n\n\n\t\t\tResister your name:");
  scanf("%s",playernm);

 for( i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n For what values of the expression is an if-statement block not executed?");
		printf("\n\n\t1. 0 and all negative value\n\t2. 0 and -1\n\t3. 0\n\t4. 0, all negative values, all positive values");
		printf("\n\nEnter: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"0\".");
			getch();
			clrscr();
		}
		break;

		case 1:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <iostream>\n using namespace std; \n int f(int p, int q) {if (p > q)\n return p;\n else \n return q; }\n main() { \n int a = 5, b = 10;int k; \n bool x = true; \n bool y = f(a, b); \n k =((a * b) + (x + y));c");
		printf("\n\n\t1. 55\n\t2.62\n\t3. 52\n\t4. 75");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"52\".");
			getch();
			clrscr();
		}
		break;

		case 2:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <iostream> using namespace std;\n int main() {int p;\n bool a = true;\n bool b = false;\n int x = 10;\n int y = 5;\n p = ((x | y) + (a + b));\n cout << p; return 0; }");
		printf("\n\n\t1.0\n\t2. 16\n\t3. 12\n\t4. 2");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"16\".");
			getch();
			clrscr();
		}
		break;

		case 3:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n Which of the following correctly declares an array?");
		printf("\n\n\t1. int array[10];\n\t2. int array\n\t3. array[10];\n\t4. array array[10];");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"int array[10];\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		qucc2();
		clrscr();
		break;
		case 2:
		again();
		break;
		default:
		break;;
		}
		}

		case 4:

                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhat is the index number of the last element of an array with 9 elements?");
		printf("\n\n\t1. 9\n\t2. 8\n\t3. 0\n\t4. None of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"8\".");
			getch();
			clrscr();
		}
		break;

		case 5:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n    #include <stdio.h>\n #include<iostream>\n using namespace std; \n int array1[] = {1200, 200, 2300, 1230, 1543}; \n int array2[] = {12, 14, 16, 18, 20}; \n int temp, result = 0;\n int main() { \n for (temp = 0; temp < 5; temp++) { \n result += array1[temp]; } \n for (temp = 0; temp < 4; temp++) { \n result += array2[temp];} \n cout << result;return 0; }");
		printf("\n\n\t1. 6553\n\t2. 6533\n\t3. 6522");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"6533\".");
			getch();
			clrscr();
		}
		break;

		case 6:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n    #include <stdio.h>\n #include<iostream>\n using namespace std;\n int main () { \n int array[] = {0, 2, 4, 6, 7, 5, 3}; \n int n, result = 0; \n for (n = 0; n < 8; n++) { \n  result += array[n]; } \n cout << result;\n return 0; }");
		printf("\n\n\t1. 25\n\t2. 26\n\t3. 27\n\t4. 21");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"27\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		qucc2();
		clrscr();
		break;
		case 2:
		again();
		break;
		default:
		break;;
		}
		}

		case 7:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <stdio.h>\n #include<iostream> \n using namespace std;\n int main() { \n int a = 5, b = 10, c = 15; \n int arr[3] = {&a, &b, &c}; \n cout << *arr[*arr[1] - 8]; \n return 0; }");
		printf("\n\n\t1. 15\n\t2. 18\n\t3. Compile time  error ");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Compile time error\".");
			getch();
			clrscr();
		}
		break;

		case 8:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nHow many characters are specified in the ASCII scheme?");
		printf("\n\n\t1. 64\n\t2. 128\n\t3.256\n\t4.24");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"128\".");
			getch();
			clrscr();
		}
		break;

		case 9:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n What will be the output of the following C++ code?  \n #include <iostream> \n using namespace std; \n int main() { \n char c = 74; \n cout << c; \n return 0; }");
		printf("\n\n\t1. A\n\t2. N\n\t3. J\n\t4.I");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"J\".");
			getch();
			clrscr();
		}
		break;
		 }
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		qucc2();
		clrscr();
		break;
		case 2:
		again();
		break;
		default:
		break;
		}
		}
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_cc2(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		qucc2();
		clrscr();
		break;
		case 2:
		again();
		break;
		case 3: break;
                default:
                break;
		}
		}
}
////////////////######################################################
void again()
{
int userinp;
clrscr();
printf("\t\t\t--------------------------\n");
printf("\t\t\t|WELCOME|\n");
printf("\t\t\t--------------------------\n");

printf("1) C Quiz");
printf("\n2) C++ QUIZ");
printf("\n3) JAVA");
printf("\n4) Physics");
printf("\n5) ENGLISH");
printf("\n6) C ++ QUIZ 2");
printf("\n7) SCORES");
printf("\n8) Exit");
printf("\n\nENTER: ");
scanf("%d",&userinp);
clrscr();

switch(userinp)
{
 case 1:
 quizc();
 break;

 case 2:
 qucc();
 break;

 case 3:
 java();
 break;

 case 4:
 phy();
 break;

 case 5:
 engl();
 break;

 case 6:
 qucc2();
 break;
 
 case 7:
 scores();
 break;

 case 8:
 break;


 default:
 break;
}
getch();
}
///////########################################################################

void disp_record_c()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorec.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
	 getch();
}

void reset_score_c()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorec.txt","w");
	fprintf(f,"%s\n%d",nm,sc);
	fclose(f);
      }
void score_write_c(int score, char playernm[20])//score_write_c(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorec.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorec.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}

///////########################################################################
void disp_record_j()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorej.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
	 getch();
}
void reset_score_j()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorej.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
      }
void score_write_j(int score, char playernm[20])//score_write_j(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorej.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorej.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////########################################################################
void disp_record_p()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorep.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
	 getch();
}
void reset_score_p()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorep.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
      }
void score_write_p(int score, char playernm[20])//score_write_p(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorep.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorep.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////########################################################################
void disp_record_e()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scoree.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
	 getch();
}
void reset_score_e()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scoree.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
      }
void score_write_e(int score, char playernm[20])//score_write_e(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scoree.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scoree.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////########################################################################
void disp_record_cc()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorecc.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
	 getch();
}

void reset_score_cc()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorecc.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
      }
void score_write_cc(int score, char playernm[20])//score_write_cc(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorecc.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorecc.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////########################################################################
void disp_record_cc2()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorecc2.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}

void reset_score_cc2()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorecc2.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
      }
void score_write_cc2(int score, char playernm[20])//score_write_cc(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorecc2.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorecc2.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}



//#####################################################
void scores()
{
int userinp;
clrscr();
printf("1) C QUIZ HIGHEST SCORE");
printf("\n2) C++ QUIZ HIGHEST SCORE");
printf("\n3) JAVA QUIZ HIGHEST SCORE");
printf("\n4) PHYSICS QUIZ HIGHEST SCORE");
printf("\n5) ENGLISH QUIZ HIGHEST SCORE");
printf("\n6) C QUIZ 2 HIGHEST SCORE");
printf("\n7) MAIN MENU");
printf("\n8) EXIT");
printf("\n\nENTER: ");
scanf("%d",&userinp);
switch(userinp)
{
 case 1:
 cdata();
 break;

 case 2:
 ccdata();
 break;

 case 3:
 jdata();
 break;

 case 4:
 pdata();
 break;

 case 5:
 edata();
 break;

 case 6:
 cc2data();
 break;

 case 7:
 again();
 break;

 case 8:
 break;

 default:
 break;
}
getch();
}
//#####################################################
void cdata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_c();
		clrscr();
		break;
		case 2:
		reset_score_c();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void jdata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_j();
		clrscr();
		break;
		case 2:
		reset_score_j();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void pdata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_p();
		clrscr();
		break;
		case 2:
		reset_score_p();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void edata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_e();
		clrscr();
		break;
		case 2:
		reset_score_e();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void ccdata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_cc();
		clrscr();
		break;
		case 2:
		reset_score_cc();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void cc2data()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_cc2();
		clrscr();
		break;
		case 2:
		reset_score_cc2();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void kuha()         //JUST LIKE AGAIN FUNCTION
{
int w;
printf("\n\n\tWHAT YOU WANT?\n\n\t1) BACK\n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
                case 1:
		scores();
		break;

		case 2:
		again();
		break;

		case 3: 
                break;
                default:
                break;
		}

getch();
}
//#####################################################
