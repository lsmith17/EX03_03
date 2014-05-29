#include<iostream>
#include<cmath>
using namespace std;

class EvenNumber {
private:
	int number;
public:	
	EvenNumber(){
		number = 0;
	}
	EvenNumber(int new_value){
		number = new_value;
	}
	int getValue(){
		return number;
	}
	int getNext(){
		return (getValue() + 2);
	}
	int getPrevious(){
		return (getValue() - 2);
	}
};

int main(){

	EvenNumber N1(16);

	cout << "Next even number is: " << N1.getNext() << endl;
	cout << "Previous even number is: " << N1.getPrevious() << endl;

	return 0;
}

