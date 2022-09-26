#include "Ho_Nho.h"

Ho_Nho::Ho_Nho()
{
}
void Ho_Nho::Nhap_Thong_Tin() 
{
	Ho_Ca::Nhap_Thong_Tin();
    cout << "\nNHAP LOAI CAN CAU (gom): ";
    cout << "\n   1.Can Cau May";
    cout << "\n   2.Can Cau Tay";
    cout << "\n**Chu y! lua chon bang cach nhan so dau tien**";
    int dem = 0;
    do {
        dem = 0;       
        cout << "\n\t=>Ban muon chon: ";
        getline(cin, LoaiCanCau);
        for (unsigned int i = 0; i < LoaiCanCau.length(); i++)
        {
            if ((!(LoaiCanCau[i]>='1' && (LoaiCanCau[i])<= '2') || (LoaiCanCau[i] == '1' && LoaiCanCau[i + 1] == '2') || (LoaiCanCau[i] == '2' && LoaiCanCau[i + 1] == '1')))
            {             
                dem++;
                break;
            }          
        }
    } while (dem != 0);
    cout << "\nBan co muon mua can cau khong ?";
    cout << "\n  1.Can Cau May: Gia 226.000d";
    cout << "\n  2.Can Cau Tay: 690.000d";
    cout << "\n  0.Ket Thuc";
    cout << "\n**Chu y! lua chon bang cach nhan so dau tien**";
    do {
        dem = 0;
        cout << "\n\t=>Ban muon chon: ";
        getline(cin, GiaCanCau);
        for (unsigned int i = 0; i < GiaCanCau.length(); i++)
        {
            if ((!(GiaCanCau[i] >= '0' && (GiaCanCau[i]) <= '2') || (GiaCanCau[i] == '1' && GiaCanCau[i + 1] == '2') || (GiaCanCau[i] == '2' && GiaCanCau[i + 1] == '1')))
            {
                dem++;
                break;
            }
        }
    } while (dem != 0);
}
void Ho_Nho::Xuat_Thong_Tin() 
{
	Ho_Ca::Xuat_Thong_Tin();
    cout << "\nLoai Can Cau: ";
    if (LoaiCanCau == "1")
        cout << "Can Cau May";
    else
        cout << "Can Cau Tay";
    cout << "\nCan Cau Mau Them: ";
    if (GiaCanCau == "1")

        cout << "1 Can Cau May";
    else if (GiaCanCau == "2")
        cout << "1 Can Cau Tay";
    else
        cout << "0";
        
}

float Ho_Nho::TinhTienCauCa() 
{
    float CGiaCanCau = 0, CLoaiCanCau = 0;
    if (LoaiCanCau == "1")
        CLoaiCanCau = 20000;
    else
        CLoaiCanCau = 5000;
    if (GiaCanCau == "1")

        CGiaCanCau = 226000;
    else  if (GiaCanCau == "2")
        CGiaCanCau = 690000;
    else
        CGiaCanCau = 0;
    return  CGiaCanCau + CLoaiCanCau + 30000 + ((stoi(SuatGio) - 1) * 50000);
}

Ho_Nho::~Ho_Nho() 
{
}

