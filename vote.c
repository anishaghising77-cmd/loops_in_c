#include<stdio.h>
int main(){
    int vote;
    int countA=0, countB=0, countC=0;
    printf("Enter votes (1 for candidateA, 2 for candidateB, 3 for candidateC, 0 to end): \n");
    do {
        printf("Enter your vote: ");
        scanf("%d", &vote);
        if (vote == 1) {
            countA++;
        } else if (vote == 2) {
            countB++;
        } else if (vote == 3) {
            countC++;
        }
        else if (vote != 0) {
            printf("Invalid vote. Please enter 0 to end.\n");
        }
    } while (vote != 0);
    printf("display winner:\n");
    if (countA > countB && countA > countC) { 
        printf("Candidate A wins with %d votes.\n", countA);
    } else if (countB > countA && countB > countC) {
        printf("Candidate B wins with %d votes.\n", countB);
    } else if (countC > countA && countC > countB) {
        printf("Candidate C wins with %d votes.\n", countC);
    } else {
        printf("It's a tie!\n");
    }
    return 0;
}