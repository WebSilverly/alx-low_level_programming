#include <stdio.h>

int main()
{
        int guess;
        int a = 12, b;
        for(int b = 1;  b < a; ++b){
                printf("%d, ", b);

        }

        printf("Pick a number\n");
        scanf("%d", &guess);
        if ( guess <= 6 ){
                printf("try again\n");
        }
        else if( guess <= 12 ){
                printf(" its your lucky day\n");
        }
        else{
                printf("pick from the above numbers\n");
        }
        return 0;
}
