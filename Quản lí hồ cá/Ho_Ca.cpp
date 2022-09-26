
#include "Ho_Ca.h"
//<Kieu du lieu> <Ten lop>::<Thuoc tinh hay phuong thuc can goi ra>
Ho_Ca::Ho_Ca()
{
}
void Ho_Ca::Nhap_Thong_Tin() 
{
    //cin.ignore();
    while (getchar() != '\n');// lenh xoa bo nho dem or: fflush(stdin) or cin.ignore();
    //cout << "\n Nhap thong tin nguoi thue: ";
    cout << "\n Nhap Ho_va_ten: ";
    getline(cin, HoTen);
    cout << "\n Nhap Ngay Cau: ";
    getline(cin, NgayCau);
    cout << "\n Nhap Buoi Cau: ";
    getline(cin, BuoiCau);  
    int dem = 0;
    do {   
        dem = 0;
          cout << "\n Nhap So Gio Cau (don vi h): ";
          getline(cin, SuatGio);
          for (int i = 0; i < SuatGio.length(); i++)
          {
              if (!((SuatGio[i])>='1' && (SuatGio[i]) <= '9'))
              {
                  dem++;

                  break;
              }              
          }
          if (dem != 0) {             
              cout << "\n\t**Chu y! chi nhap so**";
          }
    } while (dem!=0);    
}
void Ho_Ca::Xuat_Thong_Tin() 
{
    cout << "\nHo va ten: " << HoTen;
    cout << "\nNgay cau (dd/mm/yy): " << NgayCau;
    cout << "\nBuoi cau: " << BuoiCau;
    cout << "\nSuat gio(don vi h): " << SuatGio << "h";
}

Ho_Ca::~Ho_Ca() 
{
}