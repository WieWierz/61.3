#include <iostream>
#include <fstream>

using namespace std;

class licz{
	int t[1000];
	int dlugosc;
	ifstream file1;
	ofstream file2;
	
	public:
		void policz();
	private:
		void third_power();
};

void licz::policz(){
	
	file1.open("bledne.txt");
	file2.open("wyniki3.txt");
	while(file1.good()){
        file1 >> dlugosc;
        	for(int i=0;i<dlugosc;i++){
        		file1 >> t[i];
        		file2<< t[i]<<", ";
			} file2<<endl;
		third_power();
}	file1.close();
	file2.close();
}	

void licz::third_power(){
	
	int x;
	for(int i=0;i<dlugosc-1;i++){
		if(i==0)
			x = t[i+1] - t[i];
				if(t[i+2]!=0 && t[i+2]!=21037784){
					if(t[i+2]-t[i+1]!=x){
						file2<<"  Blad: "<<t[i+2]<<endl;
		}
	}
}
	file2<<endl;
}

int main(int argc, char** argv) {
	
	licz l;
	l.policz();

	return 0;
}
