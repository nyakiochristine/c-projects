#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//create an array that is object-oriented
using namespace std;

class scores{
	private:
		int tests[5];
		
	public:
		void insert(){
			cout<<"Enter fivescores";
			for (int i =0; i<5; i++){
				cin>>tests[i];
			}
			
		 
		}
		void display(){
			for (int i =0; i<5; i++){
				cout<<tests[i]<<"  ";
				
			}
		}
		
		int search(){
			int num;
			cout<<"Enter a number to search within the array";
			cin>>num;
			 for(int i=0; i<5; i++){
			 	if(tests[i]==num){
			 		cout<<"The element is at index"<<i;
			 		
			 		return 0;
			 		
				 }
			 }
			 cout<<"Element was not found";
		}
		
		int pass(){
			cout<<"students who passed have a score of"<< "";
			for (int i=0; i<5; i++){
				if (tests[i]>60){
					cout<<tests[i];
				}
			}
		}
};
int main(int argc, char** argv) {
	scores s1;
	s1.insert();
	s1.display();
	s1.search();
	s1.pass();
	
	return 0;
}
