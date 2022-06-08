#include<stdio.h>
#include<string.h>

int main()

{
     int n;
     printf("No of operator/operators:\n");
     scanf("%d",&n);
     getchar();
     while(n--)
     {
          char Fairuz[20];
          fgets(Fairuz,20,stdin);
          Fairuz[strlen(Fairuz)-1]='\0';

          if(strlen(Fairuz)==1)
          {
            if (Fairuz[0]== '+')
            {
                printf("Arithmatic Addition\n");
            }
            else if (Fairuz[0]== '-')
            {
                printf("Arithmatic Substraction\n");
            }
            else if (Fairuz[0]== '*')
            {
                printf("Arithmatic Multiplication\n");
            }
            else if (Fairuz[0]=='/')
            {
                printf("Arithmatic Division\n");
            }
            else if (Fairuz[0]=='%')
            {
                printf("Arithmatic Modulus\n");
            }
            else if (Fairuz[0]=='>')
            {
                printf("Relation Greater than\n");
            }
            else if (Fairuz[0]=='<')
            {
                printf("Relational less than\n");
            }
            else if (Fairuz[0]=='!')
            {
                printf("Logical not\n");
            }
            else if (Fairuz[0]=='=')
            {
                printf("Assignment operator\n");
            }
            else if (Fairuz[0]=='?')
            {
                printf("Conditional true\n");
            }
            else if (Fairuz[0]==';')
            {
                printf("Conditional false\n");
            }
            else if (Fairuz[0]=='!')
            {
                printf("Logical not\n");
            }
            else if (Fairuz[0]=='&')
            {
                printf("Bitwise NOT\n");
            }
            else if (Fairuz[0]=='|')
            {
                printf("Bitwise OR\n");
            }
            else if (Fairuz[0]=='^')
            {
                printf("Bitwise EX-OR\n");
            }
            else if (Fairuz[0]=='~')
            {
                printf("Bitwise complement\n");
            }

          }
          else if(strlen(Fairuz)==2)
          {
           if (Fairuz[0]=='>'&& Fairuz[1]=='=')
            {
                printf("Relational greater or  greater equal\n");
            }
          else if (Fairuz[0]=='<'&& Fairuz[1]=='=')
            {
                printf("Relational less or  less equal\n");
            }

         else if (Fairuz[0]=='='&& Fairuz[1]=='=')
            {
                printf("Relational equal\n");
            }
            else if (Fairuz[0]=='!'&& Fairuz[1]=='=')
            {
                printf("Relational not equal\n");
            }
            else if (Fairuz[0]=='&'&& Fairuz[1]=='&')
            {
                printf("Logical AND\n");
            }
            else if (Fairuz[0]=='|'&& Fairuz[1]=='|')
            {
                printf("Logical NOT\n");
            }
            else if (Fairuz[0]=='+'&& Fairuz[1]=='+')
            {
                printf("Increment\n");
            }
           else if (Fairuz[0]=='-'&& Fairuz[1]=='-')
            {
                printf("Decrement\n");
            }
            else if (Fairuz[0]=='<'&& Fairuz[1]=='<')
            {
                printf("Left shift\n");
            }
            else if (Fairuz[0]=='>'&& Fairuz[1]=='>')
            {
                printf("Right shift\n");
            }


     }
     else
        printf("Invalid");
     }
}
