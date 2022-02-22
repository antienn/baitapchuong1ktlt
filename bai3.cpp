//#include<iostream>
//
//using namespace std;
//
//int sum (int a[10][15],int row,int culumn) {
//	int tong = 0;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < culumn; j++) {
//			tong += a[i][j];
//		}
//	}
//	return tong;
//}
//
//int max(int a[10][15], int row, int culumn) {
//	int maxx = INT_MIN;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < culumn; j++) {
//			if (maxx < a[i][j]) {
//				maxx = a[i][j];
//			}
//		}
//	}
//	return maxx;
//}
//
//int min(int a[10][15], int row, int culumn) {
//	int minn = INT_MAX;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < culumn; j++) {
//			if (minn > a[i][j]) {
//				minn = a[i][j];
//			}
//		}
//	}
//	return minn;
//}
//
//int index_row(int a[10][15], int row, int culumn, int number) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < culumn; j++) {
//			if (number == a[i][j]) {
//				return i+1;
//			}
//		}
//	}
//}
//
//int index_culumn(int a[10][15], int row, int culumn, int number) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < culumn; j++) {
//			if (number == a[i][j]) {
//				return j+1;
//			}
//		}
//	}
//}
//
//int main() {
//
//	int a[10][15];
//	int hang, cot;
//	//input
//	do {
//		cout << "moi ban nhap so hang: ";
//		cin >> hang;
//		cout << endl;
//		cout << "moi ban nhap so cot: ";
//		cin >> cot;
//		cout << endl;
//		if (hang > 10 || hang <= 0 || cot > 15 || cot <= 0) {
//			cout << "loi gioi han bang! toi da 10 hang va 15 cot" << endl;
//		}
//	} while(hang>10||hang<=0||cot>15||cot<=0);
//	//input element arr
//	for (int i = 0; i < hang; i++) {
//		for (int j = 0; j < cot; j++) {
//			cout << "moi ban nhap so cho hang " << i + 1 << " cot " << j + 1 << " : ";
//			cin >> a[i][j];
//			cout << endl;
//		}
//	}
//
//	//output
//	cout << "tong cac gia tri ban vua nhap la: " << sum(a, hang, cot) << endl;
//	cout << "so lon nhat ban vua nhap la: " << max(a, hang, cot) << " tai hang " << index_row(a,hang,cot,max(a, hang, cot)) << " cot " << index_culumn(a,hang,cot,max(a, hang, cot)) << endl;
//	cout << "so nho nhat ban vua nhap la: " << min(a, hang, cot) << " tai hang " << index_row(a,hang,cot,min(a, hang, cot)) << " cot " << index_culumn(a,hang,cot,min(a, hang, cot)) << endl;
//	return 0;
//}