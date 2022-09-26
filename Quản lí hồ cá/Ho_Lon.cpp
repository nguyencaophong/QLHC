#include "Ho_Lon.h"

Ho_Lon::Ho_Lon()
{
}

void Ho_Lon::Nhap_Thong_Tin() 
{
    int dem = 0;
    Ho_Ca::Nhap_Thong_Tin();
    cout << "\n\tLOAI DICH VU: ";
    cout << "\n     1. vip_20.000d/h (view dep)";
    cout << "\n     2. thuong";
    cout << "\n**Chu y! lua chon bang cach nhan so dau tien**";
    do {
        dem = 0;
        cout << "\n\t=>Ban muon chon: ";
        getline(cin, LoaiDV);
        for (unsigned int i = 0; i < LoaiDV.size(); i++)
        {
            if ((!(LoaiDV[i] >= '1' && (LoaiDV[i]) <= '2') || (LoaiDV[i] == '1' && LoaiDV[i + 1] == '2') || (LoaiDV[i] == '2' && LoaiDV[i + 1] == '1')))
            {
                dem++;
                break;
            }
        }
    } while (dem != 0);
    cout << "\nNHAP LOAI CAN CAU: ";
    cout << "\n   1.Can Cau May_10.000d/h";
    cout << "\n   2.Can Cau Tay_3.000d/h";  
    cout << "\n**Chu y! lua chon bang cach nhan so dau tien**";
    do {
        dem = 0;
        cout << "\n\t=>Ban muon chon: ";
        getline(cin, LoaiCanCau);
        for (unsigned int i = 0; i < LoaiCanCau.length(); i++)
        {
            if ((!(LoaiCanCau[i] >= '1' && (LoaiCanCau[i]) <= '2') || (LoaiCanCau[i] == '1' && LoaiCanCau[i + 1] == '2') || (LoaiCanCau[i] == '2' && LoaiCanCau[i + 1] == '1')))
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
        cin >> GiaCanCau;
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

void Ho_Lon::Xuat_Thong_Tin() 
{
    Ho_Ca::Xuat_Thong_Tin();
    cout << "\nLoai Dich Vu: " ;
    if (LoaiDV=="1")
        cout << " vip_20.000d/h";
    else
        cout << " thuong";

    cout << "\nLoai Can Cau: " ;
    if (LoaiCanCau=="1")
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

float Ho_Lon::TinhTienCauCa() 
{
    float CLoaiDV = 0, CGiaCanCau = 0, CLoaiCanCau = 0;
    if (LoaiDV == "1")
        CLoaiDV = 20000;
    else
        CLoaiDV =0 ;
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
    return CLoaiDV + CGiaCanCau + CLoaiCanCau + 40000 + ((stoi(SuatGio) - 1) * 80000);
}

Ho_Lon::~Ho_Lon() 
{
}