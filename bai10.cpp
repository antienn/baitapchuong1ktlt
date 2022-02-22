#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int arr[10][10] = { {0} };
	int i = 0, j = 0;
	int n;
	bool chargerow = false;
	bool incresing = true;
	int dem = 0;
	int demincresing = 0;
	int demcharge = 0;
	cout << "moi ban nhap ma tran vuong thu may:";
	do {
		cin >> n;
		if (n < 2 || n>10) {
			cout << "ma tran thuoc tu 2x2 den 10x10 yeu cau ban nhap lai" << endl;
		}
	} while (n<2||n>10);
	int n1 = n;
	for (int count = 1; count <= n1 * n1; count++) {
		arr[i][j] = count;
		dem++;
		if (chargerow == false && incresing == true) {
			j++;
		}
		if (chargerow == true && incresing == true) {
			i++;
		}
		if (chargerow == false && incresing == false) {
			j--;
		}
		if (chargerow == true && incresing == false) {
			i--;
		}
		if (dem == n - 1) {
			chargerow = !chargerow;
			dem = 0;
			demincresing++;
			demcharge++;
		}
		if (demincresing == 2) {
			incresing = !incresing;
			demincresing = 0;	
		}
		if (demcharge == 3) {
			n--;
			demcharge = 1;
		}
	}
	for (int r = 0; r < n1; r++) {
		for (int c = 0; c < n1; c++) {
			cout << setw(4) << arr[r][c];
		}
		cout << endl;
	}
	return 0;
}