#include <iostream>
#include <math.h>
#define ll long long
#include <bits/stdc++.h> // thu vien tong hop cua tat ca cac thu vien trong C++
using namespace std ;
// n bit => -2^(n-1) -> 2^(n-1) - 1
// kieu du lieu
// int , long long , float , double , char , bool
// BIEN : Kieu_Du_Lieu  Ten_Bien; => VD float DienTich; ...
/*
- Toan Tu Gan : assignment operator
- a = a + b giong voi a += b tuong tu -, * , / , %
- a++ tang sau ; ++a tang truoc 
- toan tu so sanh == (khi so sanh 2 so) ; != : khac
- toan tu logic && ; || ; ! 

- abs(x) tri tuyet doi ; power(a,b) tinh a^b tra ve double ; sqrt(n) can bac hai tra ve double 
*/

/*
 Cau Truc For : for ( [bt1] ; [bt2] ; [bt3] )
 						lenh ( mot cau lenh or mot khoi lenh ) ;
 
 Cau Truc While : While ( bieu thuc _ bool )
 						lenh ( mot cau lenh or mot khoi lenh ) ;
	
 Cau Truc Do...While : Do 
 						{
						 lenh ( mot cau lenh or mot khoi lenh ) ;
						}
						while ( bieu thuc _ bool ) ;
						
						
										HAM
					[ Kieu Tra Ve ]<Ten_Ham>([ tham so tra ve ])
					{
						Than_Ham
					}
					kieu tra ve cua ham : int , double , bool , void ...
					
					
										MANG
					< Kieu_DuLieu >< TenMang >[ So luong phan tu cua mang ]			
		
*/ 

void nhapmang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void sapxeptang(int *a, int n) {
    for (int i = 0; i < n ; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                int hdoi = a[i];
                a[i] = a[j];
                a[j] = hdoi;
            }
        }
    }
}

void inmang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void chen(int *a , int &n , int vtchen , int sochen) // chen mot phan tu vao mang
{
	for (int i = n ; i >= vtchen ; i--) {
		a[i] = a[i-1] ;
	}
	a[vtchen] = sochen ;
	n++ ;
}

void xoa(int *a , int &n , int vtxoa) // xoa mot phan tu trong mang
{                                                
	for (int i = vtxoa ; i < n ; i++) {
		a[i] = a[i+1] ;
	}
	n-- ;
}

void xoasochan(int *a , int &n) 
{
	for (int i = 0 ; i < n ;) 
		{
		if (a[i] % 2 == 0) 
		{
			xoa(a,n,i) ;
		} 
		else 
		{
			i++ ;	
		}
	}
}


int sl(int *a, int n) {
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= 10 && a[i] <= 20) {
            dem++;
        }
    }
    cout << endl;
    return dem;
}

int main() {
    int n;
    cout << "So luong phan tu: ";
    cin >> n;
	int vtchen , sochen , vtxoa ;
    int*a = new int[n] ;

    nhapmang(a,n);
   	sapxeptang(a,n);
    cout << "Mang sau khi sap xep tang dan: " << endl ;
   	inmang(a,n);
   	
    cout << " nhap vi tri can chen " << endl ; cin >> vtchen ;
    cout << " nhap so can chen " << endl ; cin >> sochen ;
    cout << " mang sau khi chen " << endl ;
	chen(a,n,vtchen,sochen);
	inmang(a,n);
	
	cout << " nhap vao vi tri can xoa " << endl ; cin >> vtxoa ;
	cout << " mang sau khi xoa " << endl ;
	xoa(a,n,vtxoa);
	inmang(a,n) ;
	
	cout << " mang sau khi xoa phan tu chan " << endl ;
	xoasochan(a,n) ;
	inmang(a,n) ;
	
	
    int dem = sl(a,n);
    cout << "So phan tu nam trong [10,20]: " << dem << endl;

    return 0;
}

