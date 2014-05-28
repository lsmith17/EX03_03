#include<iostream>
#include<cmath>
using namespace std;

class EvenNumber {
public:	
	int number;
	EvenNumber(){
		number = 0;
	}
	EvenNumber(int stu_number){
		number = stu_number;
	}
	int getValue(){
		return number;
	}
	int getNext(){
		return (number + 2);
	}
	int getPrevious(){
		return (number - 2);
	}
};

int main();

EvenNumber N1(16);

N1.getValue();
