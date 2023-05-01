#include <iostream>
using namespace std;

int main(){
	short num = rand()%100 + 1;
	short inum = 0;
	cout << "Please enter a number:";
	cin >> inum;
	while (inum != num){
		short cai = 0
		if (inum > num){
			cout << "That's a big number" << endl;
			cai++;
			cin >> inum;
		}
		else{
			cout << "This number is small" << endl;
			cai++;
			cin >> inum;
		}
	}
	cout << "You finally guessed it right!" << endl;
}