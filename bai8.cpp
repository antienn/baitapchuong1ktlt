//#include<iostream>
//#include<iomanip>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//void inputarr(int arr[10][10], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = rand() % 10 ;
//		}
//	}
//}
//void outputarr(int arr[10][10], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << setw(4) << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	int n;
//	int arr1[10][10];
//	int arr2[10][10];
//	int tongarr[10][10] = { {0} };
//	int ticharr[10][10] = { {0} };
//	cout << "ban muon nhap ma tran vuong thu may" << endl;
//	cin >> n;
//	inputarr(arr1, n);
//	cout << "day la ma tran vuong thu 1" << endl;
//	outputarr(arr1, n);
//	inputarr(arr2, n);
//	cout << "day la ma tran vuong thu 2" << endl;
//	outputarr(arr2, n);
//	cout << "tong 2 ma tran la: " << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			tongarr[i][j] = arr1[i][j] + arr2[i][j];
//		}
//	}
//	outputarr(tongarr, n);
//	cout << "tich 2 ma tran la: " << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = 0; k < n; k++) {
//				ticharr[i][j] += (arr1[i][k] * arr2[k][j]);
//			}
//		}
//	}
//	outputarr(ticharr, n);
//}