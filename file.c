#include<stdio.h>
#include<stdlib.h>

/*struct student
    {
        char *c;
        struct student *point;
    };

int main()
{
	int n;
   
   printf("Enter an integer\n");
   scanf("%d", &n);
   
   if ((n/2)*2 == n)
      printf("Even\n");
   else
      printf("Odd\n");
      
      if()
      
        
printf("\n\n");
return 0;
}*/

// structure A 
struct structa_tag 
{ 
char    c; 
short int  s; 
}__attribute__((packed)); 

// structure B 
struct structb_tag 
{ 
short int  s; 
char    c; 
int     i; 
} __attribute__((packed)); 

// structure C 
struct structc_tag 
{ 
char    c;  
int 	s;
char	x;


}__attribute__((packed)); 

// structure D 
struct structd_tag 
{ 
double   d; 
int 	 s; 
char    c; 
} __attribute__((packed)); 


int main() 
{ 
printf("\n");

struct structa_tag  structa_t;
struct structb_tag  structb_t;
struct structc_tag  structc_t;
struct structd_tag  structd_t;


	printf("(structure A) sizeof(structa_t) = %d\n", sizeof(structa_t)); 
	printf("(structure B) sizeof(structb_t) = %d\n", sizeof(structb_t)); 
	printf("(structure C) sizeof(structc_t) = %d\n", sizeof(structc_t)); 
	printf("(structure D) sizeof(structd_t) = %d\n", sizeof(structd_t)); 


printf("\n\n");
return 0; 
} 






















































