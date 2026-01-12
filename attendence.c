#include<stdio.h>
int main(){
    int total_students,status,present_count=0;
    float percentage;
    printf("enter total number of studnts:");
    scanf("%d",&total_students);
    for (int i=1;i<=total_students ;i++){
        printf("enter status of student %d (1 for present and 0 for absent):",i);
        scanf("%d",&status);
        if (status==1){
            present_count++;
        }
    }
    percentage=(present_count*100)/total_students;
    printf("attendance percentage is %.2f\n",percentage);
}