#include <iostream>
using namespace std;

int main(){
	short input = 0;
	short num = rand()%100 + 1;
	short inum = 0;
	cout << "��ս�¼��Σ�";
	cin >> input;
	cout << "������һ������";
	cin >> inum;
	while (inum != num){
		short cai = 0
		if (inum > num){
			cout << "����" << endl;
			cai++;
			cin >> inum;
		}
		else{
			cout << "С��" << endl;
			cai++;
			cin >> inum;
		}
		if (cai >= input){
			cout << "��µĴ���̫���ˣ�" << endl;
			break;
			return 0;
		}
	}
	cout << "�����ڲ¶��ˣ�" << endl;
}