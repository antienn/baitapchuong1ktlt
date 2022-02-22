//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//
//int main() {
//	int d1, d2, c1, c2;
//	int matran1[10][10], matran2[10][10], tongmatran[10][10] = { {0} }, tichmatran[10][10] = { {0} };
//	do {
//		cout << "moi ban nhap so dong ma tran thu nhat" << endl;
//		cin >> d1;
//		cout << "moi ban nhap so cot ma tran thu nhat" << endl;
//		cin >> c1;
//		if (d1 > 10 || c1 > 10) {
//			cout << "gioi han so dong va cot la 10 yeu cau nhap lai " << endl;
//		}
//	} while (d1>10||c1>10);
//	
//	for (int i = 0; i < d1; i++){
//		for (int j = 0; j < c1; j++) {
//			cout << "moi ban nhap so cho hang " << i + 1 << " cot " << j + 1 << " : ";
//			cin >> matran1[i][j];
//			cout << endl;
//		}
//	}
//	
//	do {
//		cout << "moi ban nhap so dong ma tran thu hai" << endl;
//		cin >> d2;
//		cout << "moi ban nhap so cot ma tran thu hai" << endl;
//		cin >> c2;
//		if (d2 > 10 || c2 > 10) {
//			cout << "gioi han so dong va cot la 10 yeu cau nhap lai " << endl;
//		}
//	} while (d2 > 10 || c2 > 10);
//	
//	for (int i = 0; i < d2; i++) {
//		for (int j = 0; j < c2; j++) {
//			cout << "moi ban nhap so cho hang " << i + 1 << " cot " << j + 1 << " : ";
//			cin >> matran2[i][j];
//			cout << endl;
//		}
//	}
//	if (d1 == d2 && c1 == c2) {
//		for (int i = 0; i < d1; i++){
//			for (int j = 0; j < c1; j++) {
//				tongmatran[i][j] = matran1[i][j] + matran2[i][j];
//			}
//		}
//		cout << "tong 2 ma tran la: " << endl;
//		for (int i = 0; i < d1; i++) {
//			for (int j = 0; j < c1; j++) {
//				cout << setw(3) << tongmatran[i][j];
//			}
//			cout << endl;
//		}
//	}
//	else {
//		cout << "do ma tran ban vua nhap la ma tran " << d1 << "x" << c1 << " va " << d2 << "x" << c2 << " nen khong the tinh tong" << endl;;
//	}
//
//	if (c1 == d2) {
//		cout << "tich 2 ma tran la: " << endl;
//		for (int i = 0; i < d1; i++) {
//			for(int j = 0; j < c2; j++){
//				for (int k = 0; k < c1; k++) {
//					tichmatran[i][j] += (matran1[i][k] * matran2[k][j]);
//				}
//			}
//		}
//		for (int i = 0; i < d1; i++) {
//			for (int j = 0; j < c2; j++) {
//				cout << setw(3) << tichmatran[i][j];
//			}
//			cout << endl;
//		}
//	}
//	else {
//		cout << "loi do ma tran "<< d1 << " x " << c1 << " va " << d2 << " x " << c2 << " khong the nhan voi nhau " << endl;
//	}
//	return 0;
//}