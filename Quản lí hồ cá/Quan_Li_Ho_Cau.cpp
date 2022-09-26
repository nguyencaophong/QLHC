#include "Quan_Li_Ho_Cau.h"
Quan_Li_Ho_Cau::Quan_Li_Ho_Cau()
{
}
void Quan_Li_Ho_Cau::Menu()
{
    int luachon;
    string chon;
    while (true)
    {
        system("cls");
        cout << "\n\n\t\t=============~QUAN LI HO CAU~============\n\t";
        cout << "\n        --------------------------------------------------------\n";
        cout << "       ||";
        cout << " 1. Nhap danh sach nguoi cau ho lon va nho\n";
        cout << "        --------------------------------------------------------\n";
        cout << "       ||";
        cout << " 2. Xuat tat ca thong tin nguoi cau gom ho lon va nho\n";
        cout << "        --------------------------------------------------------\n";
        cout << "       ||";
        cout << " 3. Tinh tong tien cua nguoi cau ho lon va ho nho\n";
        cout << "        --------------------------------------------------------\n";
        cout << "       ||";
        cout << " 0.Ket Thuc\n";
        cout << "        --------------------------------------------------------\n";
        cout << "\n\n\t\t ===================END==================";
        cout << "\n\n=>Nhap lua chon (bang cach nhan vao so dau tien): ";
        cin >> luachon;
        if (luachon == 1)
        {

            while (true)
            {
                int dem = 0;
                do {

                    dem = 0;
                    system("cls");
                    cout << "\n\n\t\tNHAP THONG TIN";
                    cout << "\n         -------------------\n";
                    cout << "       ||";
                    cout << " 1.HO NHO\n";
                    cout << "         -------------------\n";
                    cout << "       ||";
                    cout << " 2.HO LON\n";
                    cout << "         -------------------\n";
                    cout << "       ||";
                    cout << " 0.Ket Thuc\n";
                    cout << "         -------------------\n";
                    cout << "**Chu y! lua chon bang cach nhan so dau tien**";
                    cout << "\n\nCHON HO BAN MUON CAU: ";
                    cin >> chon;
                    for (unsigned int i = 0; i <= chon.length() - 1; i++)
                    {
                        if (!((chon[i]) >= '0' && (chon[i]) <= '2'))
                        {
                            dem++;
                            break;
                        }
                    }
                } while (dem != 0);
                int choose = stoi(chon);
                if (choose == 1)
                {
                    Ho_Nho x;
                    cout << "\n\n\t\tNHAP THONG TIN  NGUOI CAU HO NHO\n";
                    x.Nhap_Thong_Tin();
                    ds_Ho_Nho.push_back(x);
                }
                else if (choose == 2)
                {
                    Ho_Lon x;
                    cout << "\n\n\t\tNHAP THONG TIN NGUOI CAU HO LON\n";
                    x.Nhap_Thong_Tin();
                    ds_Ho_Lon.push_back(x);
                }
                else if (choose == 0)
                {
                    break;
                }
            }
        }
        else if (luachon == 2)
        {
            while (true) {
                int dem = 0;
                do
                {
                    dem = 0;
                    system("cls");
                    cout << "\n         -------------------\n";
                    cout << "       ||";
                    cout << " 1.HO NHO\n";
                    cout << "         -------------------\n";
                    cout << "       ||";
                    cout << " 2.HO LON\n";
                    cout << "         -------------------\n";
                    cout << "       ||";
                    cout << " 0.Ket Thuc\n";
                    cout << "         -------------------\n";
                    cout << "**Chu y! lua chon bang cach nhan so dau tien**";
                    cout << "\n\nCHON HO BAN MUON XUAT THONG TIN: ";
                    cin >> chon;
                    for (unsigned int i = 0; i < chon.length(); i++)
                    {
                        if (!((chon[i]) >= '0' && (chon[i]) <= '2'))
                        {
                            dem++;
                            break;
                        }
                    }
                } while (dem != 0);
                int choose = stoi(chon);
                if (choose == 1)
                {
                    cout << "\n\n\t\t THONG TIN  NGUOI CAU HO NHO\n";
                    for (int i = 0; i < ds_Ho_Nho.size(); i++)
                    {
                        cout << "\n\n\tNGUOI CAU THU " << dem++;
                        ds_Ho_Nho[i].Xuat_Thong_Tin();
                        cout << "\nTong tien cau= " << ds_Ho_Nho[i].TinhTienCauCa();
                        cout << "\n\n";
                    }
                    system("pause");
                }
                else if (choose == 2)
                {
                    cout << "\n\n\t\t THONG TIN NGUOI CAU HO LON\n";
                    for (int i = 0; i < ds_Ho_Lon.size(); i++)
                    {
                        cout << "\n\n\tNGUOI CAU THU " << dem++;
                        ds_Ho_Lon[i].Xuat_Thong_Tin();
                        cout << "\nTong tien cau= " << ds_Ho_Lon[i].TinhTienCauCa();
                        cout << "\n\n";
                    }
                    system("pause");
                }
                else if (choose == 0)
                {
                    break;
                }
            }
        }
        else if (luachon == 3)
        {
            float s = 0, s1 = 0, sum = 0;
            while (true)
            {
                int dem = 0;
                do
                {
                    system("cls");
                    cout << "\n\n\tDOANH THU HO CAU ";
                    cout << "\n         ----------------------------------\n";
                    cout << "       ||";
                    cout << " 1.HO NHO\n";
                    cout << "         ----------------------------------\n";
                    cout << "       ||";
                    cout << " 2.HO LON\n";
                    cout << "         ----------------------------------\n";
                    cout << "       ||";
                    cout << " 3. TONG DOANH THU (gom ho lon va ho nho)\n";
                    cout << "         ----------------------------------\n";
                    cout << "       ||";
                    cout << " 0.Ket Thuc\n";
                    cout << "         ----------------------------------\n";
                    cout << "**Chu y! lua chon bang cach nhan so dau tien**";
                    cout << "\n=>Ban Muon Xem Ho Nao: ";
                    cin >> chon;
                    for (unsigned int i = 0; i < chon.length(); i++)
                    {
                        if (!((chon[i]) >= '0' && (chon[i]) <= '3'))
                        {
                            dem++;
                            break;
                        }
                    }
                } while (dem != 0);
                int choose = stoi(chon);
                if (choose == 1)
                {
                    float s = 0;
                    //duyet danh sach nguoi cau ho lon
                    for (int i = 0; i < ds_Ho_Lon.size(); i++)
                    {
                        s += ds_Ho_Lon[i].TinhTienCauCa();
                        sum += ds_Ho_Lon[i].TinhTienCauCa();
                    }
                    cout << "\n\nDoanh Thu Ho lon= " << (size_t)s << "\n";
                    system("pause");
                }
                else if (choose == 2)
                {
                    float s1 = 0;
                    //duyet danh sach nguoi cau ho lon
                    for (int i = 0; i < ds_Ho_Nho.size(); i++)
                    {
                        s1 += ds_Ho_Nho[i].TinhTienCauCa();
                        sum += ds_Ho_Nho[i].TinhTienCauCa();
                    }
                    cout << "\n\nDoanh Thu Ho Nho= " << (size_t)s1 << "\n";
                    system("pause");
                }
                else if (choose == 3)
                {
                    float s2 = s + s1;
                    cout << "\n\nTong Doanh Thu Cua Ca Ho= " << (size_t)sum << "\n";
                    system("pause");
                }
                else if (choose == 0)
                    break;
            }
        }
        else if (luachon == 0)
            break;
    }
}

Quan_Li_Ho_Cau::~Quan_Li_Ho_Cau()
{
}