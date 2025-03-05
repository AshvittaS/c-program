#include <stdio.h>
extern int o=9;
struct cars
{
    char name[100];
    char l_num[100];
    int am;
    
} car[100];
void main()
{
    struct cars g={"HAR","56",456};
    printf("%s\n%s\n%d",g.name,g.l_num,g.am);
    int n;
    printf("Enter no of car:");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("Enter name:");
        fgets(car[i].name, 100, stdin);
        printf("Enter id:");
        fgets(car[i].l_num, 100, stdin);
        printf("Enter amount:");
        scanf("%d", &car[i].am);
        getchar();
    }
    for (int i = 0; i < n; i++)
    {

        
        printf("%s%s%d",car[i].name,car[i].l_num,car[i].am);
        
    }
}