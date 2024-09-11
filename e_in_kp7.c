 #include<stdio.h>
 void main(){
int n=4;
int marks[n];
printf("Enter student marks:\n");
for(int i=0;i<n;i++){
    scanf("%d ",&marks[i]);
}
printf("student marks are: \n");
for(int i=0;i<n;i++){
    printf("%d  ", marks[i]);
}
 }