#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//using unoredered insert, linearsearch and remove functions
class score{
	private:
		int test[100];
		int size= 0;
		public:
			void unorderedinsert(){
				cout<<"Enter any 5 numbers";
				cout<<endl;
				for (int i=0; i<5;i++){
					cin>>test[i];
				}
			}
			
			void display(){
				for(int i=0; i<5; i++){
					cout<<test[i]<<" ";
				}
			}
			
			// linear search is the same as basic search
			
			int linearsearch(){
				int num;
				cout<<"Enter a number  to be searched"<<"\n";
				cin>>num;
				for (int i=0; i<5; i++){
					if(test[i]==num){
						cout<<"The number has been found"<<"\n";
						return 0;
					}
				}
				cout<<"Element was not found";
			}
			
			int remove(){
				int num;
				cout<<"Enter a number  to be searched"<<"\n";
				cin>>num;
				for (int i=0; i<5; i++){
					if(test[i]==num){
						cout<<"The number has been found"<<"\n";
						
				for(int k=i; k<5; k++){
					test[k]= test[k+1];
					
				}
				size= size -1;
					}
				}
				cout<<"Element not found";
				
				
		}
		
		int binarysearch(){
			int num;
			cout<<"Key number to search";
			cin>>num;
			//intro
			int low=0, up=5,mid;
			while(1){
				mid = (low+up)/2;
				if (test[i]==num){
					cout<<"Found!";
					return 0;
				}
				
				else if(low>up){
					cout<<"Number not found";
					return 0;
				}
				
				else{
					if (test[i]> num){
						break
					}
					
					else{
						low - mid+1;
					}
				}
			}
		}
		
		//ordered insert
		void ordered insert(){
			int num;
		cout<<"Enter a number to be searched";
		cin>>num;
		for (int i=0;i<size; i++){
			if (test[i]>num)
			break
		}
		for (int k=size;k>i ; k--){
			test[k]= test[k-1];
		}
		test[i]= num;
		size = size+i;
		
			
		}
			
			
};
int main(int argc, char** argv) {
	score s1;
	s1.unorderedinsert();
	s1.display();
	s1.linearsearch();
	
	return 0;
}
