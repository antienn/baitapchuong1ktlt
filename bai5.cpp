//#include<iostream>
//
//using namespace std;
//
//int tongduongcheochinh (int a[10][10],int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == j) {
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int tongduongcheophu(int a[10][10], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i+j==n-1) {
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int main() {
//	int a[10][10];
//	int n;
//	//input
//	do {
//		cout << "ban muon tao ma tran thu may: ";
//		cin >> n;
//		cout << endl;
//		if (n>10) {
//			cout << "toi da la ma tran thu 10 moi ban nhap lai" << endl;
//		}
//	} while(n>10||n<1);
//	//input element arr
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "moi ban nhap so cho hang " << i + 1 << " cot " << j + 1 << " : ";
//			cin >> a[i][j];
//			cout << endl;
//		}
//	}
//	//output
//	cout << "tong phan tu tren duong cheo chinh cua ma tran bac " << n << " la " << tongduongcheochinh(a, n) << endl;
//	cout << "tong phan tu tren duong cheo phu cua ma tran bac " << n << " la " << tongduongcheophu(a, n) << endl;
//	return 0;
//}