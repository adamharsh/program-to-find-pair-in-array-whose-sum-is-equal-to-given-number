#include <iostream>
using namespace std;
int check(int *arr,int size,int no){
	int first=0,last=size-1,ch=0;
	while(first<last){
		if((*(arr+first)+*(arr+last))>no){
			last=last-1;
		}
		else if((*(arr+first)+*(arr+last))<no){
			first=first+1;
		}
		else {
			cout<<"Pair:  "<<*(arr+first)<<"\t"<<*(arr+last)<<endl;
			first=first+1;
			last=last-1;
			ch=1;
		}
	}
}
int main(int argc, char** argv) {
	int size,no,ch;
	cout<<"Enter size of array:";cin>>size;
	int array[size];
	cout<<"\nEnter the elements of array in sorted order and no repeated element:";
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	cout<<"\nEnter the number to check:";cin>>no;
	ch=check(array,size,no);
	if(ch==0){
		cout<<"\nNo Pair found.\n";
	}
	return 0;
}
