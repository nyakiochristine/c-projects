#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class students{
	private:
		string sname,snumber;
		int test_scores;
		
	public:
		void input(){
			cout<<"Enter student name";
			cin>>sname;
			
			cout<<"Enter student number";
			cin>>snumber;
			
			cout<<"Enter student scores";
			cin>>test_scores;
		}
		
		void display(){
			cout<<sname<<"\t"<<snumber<<"\t"<<test_scores;
		}
		void grade(){
			if (test_scores>60){
				cout<<"Student has passed";
				
			}
			else{
				cout<<"Student has failed";
			}
		}
	};
int main(int argc, char** argv) {
	students s1;
	s1.input();
	s1.display();
	s1.grade();
	students *s3 = new students(); 
	return 0;
}
