#include<stdio.h>
#include<stdbool.h>
#define N 5
int minmax();
int search();
int rev();
int arr[N]={1,2,3,4,5};
int ascsort();
void main(){
	int op;

	printf("enter choice");
	scanf("%d",&op);

	minmax();
	search();
	rev();
	ascsort();


	/*while(1){
		switch(op){
			case 1: mx

		}
	}*/


}

int minmax(){
	int smal=arr[0];
	int max=arr[0];

	for(int i=1;i<5;i++){
		if (arr[i]<smal){
			smal=arr[i];
		}

}	for(int i=1;i<5;i++){
		if (arr[i]>max){
			max=arr[i];
		}
}
	printf("largwest element is %d\n",max);
	printf("Smallest element is %d",smal);	

}
int search(){
	int key;
	bool flag=false;
	printf("\nenter element to search");
	scanf("%d",&key);

	for(int i =0; i < N;i++){
		if (arr[i]==key){
			printf("found st %d",i+1);
			flag=true;
		}	}
	if(flag==false){
			printf("element not found");
		}

}
int rev(){
	int revarr[N];
	for (int i=0;i<N;i++){
		revarr[i]=arr[N-i-1];
	}
	for(int k=0;k<N;k++){

		printf("%d",revarr[k]);
	}
}
int ascsort(){
	int temp=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int k=0;k<N;k++){
		printf("%d",arr[k]);
	}
}






