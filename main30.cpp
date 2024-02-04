#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class link{
	public:
		string name;
		int age;
		double height;
		link *pnext;
		
		link(string n,int m, double o){
			name = n;
			age = m;
			height = o;
			pnext = NULL;
		}
		void display(){
			cout << "{" << name << "," << age << "," << height << "}-->";
		}
};


class linked_list{
	private:
		link *pfirst;
		link *plast;
	public:
		linked_list(){
			pfirst = NULL;
			plast = NULL;
			
			while(pfirst != NULL){
			link *temp = pfirst;
			pfirst = pfirst ->pnext;
			delete temp;
		}
	}
		
	
   void enqueue(string n,int m, double o){
		link *pnewlink = new link(n, m, o);
		if(pfirst == NULL)
		pfirst = pnewlink;
		else
		plast -> pnext = pnewlink;
		plast=pnewlink;
	}
   
   
   void displaylist(){
		link *pcurrent = pfirst;
		while(pcurrent != NULL){
			pcurrent -> display();
			pcurrent = pcurrent -> pnext;
		}
		
	}
	
	void peek() {
        if (pfirst != NULL)
            pfirst->display();
        else
            cout << " the queue is empty" << endl;
    }

	  void dequeue(){ 
	  if (pfirst != NULL){
	  	link *temp = pfirst;
	  	pfirst = pfirst -> pnext;
	  	delete temp;
	  }
      else{
      	cout<<"Queue is empty" << endl;
      }
  }
  
  void getAverageHeight() {
   double sum = 0;
    int count = 0; 
	link* pcurrent = pfirst;
	 while (pcurrent != NULL)
	  { sum += pcurrent->height; 
	  count++;
	   pcurrent = pcurrent->pnext;
	    } 
	    
	
		
		 }
		 
		 
   void above30() {
        link* pcurrent = pfirst;

        while (pcurrent != NULL) {
            if (pcurrent->age > 30) {
                pcurrent->display();
            }
            pcurrent = pcurrent->pnext;
        }
    }
	 
};


int main(int argc, char** argv) {
	linked_list   l1;
	l1.enqueue("Fred", 34, 1.7);
	l1.enqueue("Sue", 27, 1.2);
	l1.enqueue("Joe",48, 1.4);
	l1.enqueue("Zoe", 30, 1.3);
	l1.displaylist();
       	cout << endl;
	l1.dequeue();
	l1.dequeue();
	l1.enqueue("Tom", 44, 1.1);
	l1.dequeue();
	l1.enqueue ("Mark", 34, 1.4);
	l1.enqueue ("Mark", 24, 1.0);
	l1.displaylist();
//	l1.peek();
cout<<"The average height is"<<endl;
    l1.getAverageHeight();

    l1.displaylist();
    cout<<endl<<"Athletes above 30 are: ";
    l1.above30();
    return 0;
    
	

	


}
