#include <iostream>
using namespace std;

int main(){
	short input = 0;
	short num = rand()%100 + 1;
	short inum = 0;
	cout << "挑战猜几次：";
	cin >> input;
	cout << "请输入一个数：";
	cin >> inum;
	while (inum != num){
		short cai = 0
		if (inum > num){
			cout << "大了" << endl;
			cai++;
			cin >> inum;
		}
		else{
			cout << "小了" << endl;
			cai++;
			cin >> inum;
		}
		if (cai >= input){
			cout << "你猜的次数太多了！" << endl;
			break;
			return 0;
		}
	}
	cout << "您终于猜对了！" << endl;
}