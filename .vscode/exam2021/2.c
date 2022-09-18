#include<stdio.h>
  struct emp_rec
    {
        int emp_id;
        char name[20];
        char qual[50];
        int sal;
    };
int main()
{
    int i ;
  struct emp_rec emp[3];
  printf("\n Enter Details \n");
  for(i=0;i<3;i++)
  {
 
  printf("ID: ");
  scanf("%d",&emp[i].emp_id);
  printf("Name: ");
  scanf("%s",&emp[i].name);
  printf("Qualification: ");
  scanf("%s",&emp[i].qual);
  printf("Salary: ");
  scanf("%d",&emp[i].sal);
  char ch = getchar();
  printf("\n");
  
  }
for(i=0;i<3;i++){
  
    if(emp[i].sal>20000)
    {
    printf("%d %s %s %d\n",emp[i].emp_id,emp[i].name,emp[i].qual,emp[i].sal);
  
    }
}
    return 0;
}
