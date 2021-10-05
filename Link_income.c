#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void scholar();
void delay();
void display(void);
void family();
void first_member();
void member(int);
void form();
void scholership();
int m=1,k=-1;
int yr,ag,roll_no;
char dept[10];
int s[10],fo=-1;//,cid;
long b;//cin;

struct node
{ int id;
  char name[10];
  long income;
  int age;
  int totalincome;
  struct node *next;
};
    int ft=0;
 struct node *start[100];

struct clg
{
 char name[10];
 long income;
 int id;
}c;






void main()
{ int n,n3;
  ////clrscr();
  do{
  printf("\nHAVE AN ID NUMBER  1.YES 2. NO   ");
  scanf("%d",&n);

  if(n==1 && fo!=-1)
     family();
     else if(n==2)
     {       fo++;
      first_member();

     }
  else  {
    printf("\n\nFirst enter details!!");
    first_member();
    }
   if(fo!=-1){
   printf("\n\n\nWANT TO ENTER MORE MEMBERS 1.YES 2.NO   ");
   scanf("%d",&n3);
  }
  }while(n3==1);

   display();
   form();
   getch();
   //clrscr();

  // //clrscr();
  // scholership();
}

void display()
{ int n2,i;
  struct node *temp;
  printf("\n\n----------------DISPLAY MENU-----------------------\n\nENTER ID NO.   ");
  scanf("%d",&n2);
  for(i=0; i<=ft; i++)
    { temp=start[i];

      if(n2==temp->id)
       {

		  while(temp!=NULL)
		  { printf("\nNAME IS %s \n",temp->name);
		    printf("INCOME IS %d\n",temp->income);
		    printf("Age is %d",temp->age);
		    temp=temp->next;
		   }

	      printf("\n\nTOTAL INCOME OF FAMILY IS  %d\n\n\n",s[i]);
	    //   b=s[i];

	}// else{if(f==0)
	 // printf("\nwrong id no");		      }


     }

     //unsigned int time_to_sleep=5;
     //while(time_to_sleep)
      //	{    time_to_sleep=sleep(time_to_sleep);
       //
     void  delay();
    {  clock_t goal=100+clock();
       while(goal>clock());
    }



}


void family()
{ int i, n1;
  struct node *temp;

  printf("ENTER ID NUMBER      ");
  scanf("%d",&n1);

   for(i=0;i<5;i++)
    { temp=start[i];
      if(n1==temp->id)
	member(i);
    }
}



void first_member()
{

  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("\n\n-----------------CARD DETAILS---------------------\n");
  printf("\nENTER NAME   ");
  scanf("%s",temp->name);

  printf("ENTER INCOME   ");
  scanf("%d",&temp->income);

  printf("enter age  ");
  scanf("%d",&temp->age);

  temp->next=NULL;
   temp->id=m;
   k++;m++;
   start[k]=temp;
	//totalincome=0;
       s[k]=temp->income;

    printf("ID NUMBER IS   %d",temp->id);

  ft++;

}





void  member(int j)
 { int i;
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
     printf("\nENTER NAME   ");
 scanf("%s",temp->name);

  printf("ENTER INCOME   ");
  scanf("%d",&temp->income);

  printf("enter age  ");
  scanf("%d",&temp->age);

  temp->next=NULL;
	  s[j]+=temp->income;

      {  if(start[j]->next==NULL)
		{ start[j]->next=temp;
		}
	 else
	   {   struct node *p;
	       p=start[j];
	       while(p->next!=NULL)
		{ p=p->next;
		}
		 p->next=temp;
	   }
      }
}

void form()
{
 // //clrscr();
// struct clg c;
 printf("\n---------------COLLEGE FORM------------------");
 printf("\n\nEnter Name of the student:");
 scanf("%s",c.name);
 printf("\nEnter current Year of the student: ");
 scanf("%d",&yr);
 printf("\nEnter age of the student: ");
 scanf("%d",&ag);
 printf("\nEnter Department of student: ");
 scanf("%s",dept);
 printf("\nEnter Roll number of the student: ");
 scanf("%d",&roll_no);
 printf("\nEnter Family ID :");
 scanf("%d",&c.id);
 printf("\nFamily income on income certificate :");
 scanf("%d",&c.income);
 //clrscr();
 scholership();


}


void scholership()
{  int i;
  // struct clg c;
  // struct node s;
   struct node *temp;
   int f=0;

   printf("\n\n-----------------------------------------------------");
   for(i=0; i<ft; i++)
     {    temp=start[i];

       if(c.id==temp->id)
	 {     f=2;


	     if(c.income==s[i])
	     {

		 if(s[i]<=2000 )
		 {   f=1;
		   printf("\nScholarship applicable : ABC Scholarship\n");
		    scholar();
		     break;
		  }
		 else if(s[i]>2000 && s[i]<=5000)
		       { f=1;
			 printf("\nScholarship applicable : DEF Scholarship\n");
			scholar();
			 break;
		       }
		 else if(s[i]>5000)
		      {  f=1;
		       printf("\nScholarship applicable : NO Scholarship\n");
		       scholar();
			break;
		      }
		}
	      else{ if(f!=1)
		printf("\nYOU ARE NOT VALID FOR SCHOLERSHIP \n\n");
		}
      }{  if( f==2)
	printf("\n\nENTER VALID ID OR INCOME"); }

   }




}



void scholar()
{     int a;
printf("-----------------------------------------------------\n");
   printf("\nNAME IS %s \n",c.name);
  printf("Department is: %s\n",dept);
  printf("Current Year: %d\n",yr);
  printf("Age of student: %d\n",ag);
  printf("Roll no. is: %d\n",roll_no);
  printf("Family id: %d\n",c.id);
  printf("Family total income is: %d\n",c.income);
  printf("--------------------------------------------------------");
  printf("\n\nFORM SUBMITTED SUCCESSFULLY\n");
  printf("\n--------------------------------------------------------\n");


  printf("\n\nWant to fill more scholarship form????\n1. Yes     2.No     ");
  scanf("%d",&a);
  if(a==1)
   {//clrscr();
    form();
    }
}


