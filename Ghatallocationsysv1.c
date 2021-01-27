#include <stdio.h>

int main(){
    int gseat[4] = {10,40,20,30};
    int seat, ghat;//seat for taking seats wanted and ghat for choosing ghat number.

    printf("Select an option from the following ghats:\n1)Ghat1\n2)Ghat2\n3)Ghat3\n4)Ghat4\n");
    scanf("%d", &ghat);

    printf("Seat available in Ghat%d is:\t %d\n", ghat, gseat[ghat-1]); //gseat[ghat-1] because input wil be 1 more than the list indexing as indexing starts from 0!

    while(gseat[ghat] > 0){
        printf("\nEnter seats wanted:\t \n");
        scanf("%d", &seat);

        if(seat < gseat[ghat-1] && seat >= 0){
            gseat[ghat - 1] = gseat[ghat - 1] - seat;
            printf("Seat alloted\n");
            printf("Remaining seats:\t%d\n", gseat[ghat - 1]);
        }

        else if(seat == 1 && gseat[ghat - 1] == 1){
            gseat[ghat - 1] -= 1;
            printf("Alloted!\n");
            printf("No remaining seats avialble in Ghat%d!\nRemaining seats: %d", ghat, gseat[ghat - 1]);
        }
        else if(seat > gseat[ghat - 1]){
            printf("Choose from another ghats.\n");

            for (int i = 0; i<4 ; i++){
                if(gseat[i] > 1){
                    printf("Ghat%d has seats: %d\n", i+1, gseat[i]);
                }
                
            }
            printf("Enter Ghat number from above option with appropriate seats:\t\n");
            scanf("%d", &ghat);

            printf("Enter seats required in the selected ghat: \n");
            scanf("%d", &seat);

            gseat[ghat - 1] -= seat;
            printf("Seat Alloted!\n");
            printf("Remaining seats available in Ghat%d: %d\n",ghat, gseat[ghat - 1]);
        }
        else{
            
            printf("Enter valid command.\n");
        }


    }
    // for(int j = 0; j < 4; j++){
    //             if(ghat[j] == 0){
    //                 printf("Ghat%d has seats: %d\n", j+1, ghat[j]);
    //             }
    //             printf("No Seats avilable now!");
    //             break;
    //         }
    return 0;
}