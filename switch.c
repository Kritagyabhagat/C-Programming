#include<stdio.h>
int main()
{
    int day;
    printf("enter day(1-7) :");
    scanf("%d", &day);

    switch (day){
        case 1 : printf("monday \n");
        break;
        case 2: printf("Tuesday \n");
        break;
        case 3: printf("Wednesday \n");
        break;
        case 4: printf("Thursday \n");
        break;
        case 5: printf("friday \n");
        break;
        case 6: printf("Saturday \n");
        break;
        case 7: printf("Sunday \n");
        break;
        default : printf("Not valid day \n");
    
    }
        return 0;

    
}