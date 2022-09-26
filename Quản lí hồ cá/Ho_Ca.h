#pragma once// tránh tình trạng đụng độ thu viện- trong mọi tình huống chỉ có 1 thư viện được tạo ra ở tât cả file
#include<iostream>
#include<string>
using namespace std;

class Ho_Ca
{
protected:
    string HoTen;
    string NgayCau;
    string BuoiCau;
    string SuatGio;
public:
    virtual void Nhap_Thong_Tin(); //phuong thuc ao-Nhap thong tin nguoi cau ca;
    virtual void Xuat_Thong_Tin(); //phuong thuc ao-Xuat thong tin nguoi ca ca;
    virtual float TinhTienCauCa() = 0;//phuong thuc thuan ao- tinh tien cau ca;
	Ho_Ca();
	~Ho_Ca();
};
