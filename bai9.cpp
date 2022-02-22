//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//
//int main() {
//	int arr[10][10];
//	int i = 0, j = 0;
//	int n;
//	cout << "moi ban nhap ma tran vuong thu may:";
//	do {
//		cin >> n;
//		if (n < 2 || n>10) {
//			cout << "ma tran thuoc tu 2x2 den 10x10 yeu cau ban nhap lai" << endl;
//		}
//	} while (n<2||n>10);
//	for (int count = 1; count <= n*n; count++) {
//		arr[i][j] = count;
//		if (j % 2 == 0) {
//			if (i == n - 1) {
//				j++;
//			}
//			else {
//				i++;
//			}
//		}
//		else {
//			if (i == 0) {
//				j++;
//			}
//			else {
//				i--;
//			}
//		}
//	}
//	for (int r = 0; r < n; r++) {
//		for (int c = 0; c < n; c++) {
//			cout << setw(4) << arr[r][c];
//		}
//		cout << endl;
//	}
//	return 0;
//}