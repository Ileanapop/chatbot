#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    printf("Let's chat\n");
    char userInput[20];
    gets(userInput);
    printf("%s to you too. I am Hall, what is your first name?\n",userInput);
    char name[20];
    scanf("%s",name);
    printf("Oh hi, %s. How old are you?\n",name);
    int age;
    scanf("%d",&age);
    printf("Wow, %d is quite something\n",age);
    gets(userInput);
    gets(userInput);
    printf("Sorry, not sure what this \"%s\" means but let's continue.\n",userInput);
    printf("What is your hometown?\n");
    char town[50];
    scanf("%s",town);
    printf("Oh, %s is such a beautiful place!\nI bet 10$ i can guess your favourite number between 0 and 9.\n",town);
    gets(userInput);
    gets(userInput);
    printf("Is it 7? Answer yes or no\n");
    char answer[20];
    scanf("%s",answer);
    if(strcmp(answer,"yes")==0)
        printf("I am a genius!\n");
    else
    {
        printf("Oh, which one was is then?\n");
        scanf("%d",&age);
        printf("Anyway, I was very close, haha\n");
    }
    printf("Do you have any more questions for me?\nPlease answer with yes or no.\n");
    scanf("%s",answer);
    if(strcmp(answer,"yes")==0)
    {
        printf("That's cool. I can tell you the date and the weather\n");
        printf("Please write the number corresponding to the information you want to know from me\n");
        printf("1:date\n2:weather\n");
        int option;
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            {
                time_t t;
                time(&t);
                printf("So you have chosen %d\n",option);
                printf("Today's date and time: %s",ctime(&t));
                gets(userInput);
                gets(userInput);
                printf("I hope that this \"%s\" was a Thank you! It was nice to meet you. Bye!\n",userInput);\
                break;
            }
            case 2:
            {
                printf("So you have chosen %d\n", option);
                printf("The weather does not matter. I'm sure your having a good day so don't stress about the weather!\n");
                gets(userInput);
                gets(userInput);
                printf("I hope that this \"%s\" was a Thank you! It was nice to meet you. Bye!\n",userInput);
                break;
            }
            default: printf("Sorry, I do not recognize this option\n");
        }
    }
    else
    {
        if(strcmp(answer,"no")==0)
            printf("Ok, it was nice to meet you! Bye!\n");
    }
    return 0;
}