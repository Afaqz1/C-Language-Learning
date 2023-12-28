# include<stdio.h>

int main(){
    int rating;
    printf("Enter the rating (1-5) \n")

    switch (rating)
    {
    case 1:
        printf("Your Rating is Number: 1")
        break;
    case 2:
        printf("Your Rating is Number: 2")
        break;
    case 3:
        printf("Your Rating is Number: 3")
        break;
    case 4:
        printf("Your Rating is Number: 4")
        break;  
    case 5:
        printf("Your Rating is Number: 5")
        break;
    default:
        break;
    }
    return 0;
}