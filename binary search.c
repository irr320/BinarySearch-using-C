#include<stdio.h>
void main()
{

	int arr[10]={1,3,5,7,9,11,13,19},d,start=0,stop=8,middle,flag=0;
    printf("enter the element to be searched");
    scanf("%d",&d);
	middle=(start+stop)/2;
	if(d==arr[middle]){
		printf("element found");
		flag++;}
	while(d<=arr[middle-1] && d>=arr[0]){
		start=0;
		stop=middle;
		middle=(start+stop)/2+1;
		if(d==arr[middle]){
		printf("element found");
		flag++;
		break;}}
	while(d>=arr[middle+1] && d<=arr[7]){
		start=middle;
		stop=8;
		middle=(start+stop)/2-1;
		if(d==arr[middle]){
		printf("element found");
		flag++;
		break;}}
		
	if(flag==0){
		printf("element not found");
	}
}
