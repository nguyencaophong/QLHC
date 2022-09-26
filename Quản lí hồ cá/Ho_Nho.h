﻿#pragma once
#include<iostream>
#include<string>
#include"Ho_Ca.h"
using namespace std;

class Ho_Nho:public Ho_Ca
{
private:
   string GiaCanCau;
   string LoaiCanCau;
public:
    void Nhap_Thong_Tin();//PT Nhap_Thong_Tin() bắt buộc phải trùng trên với class cha(Ho_Ca) thì mới có thể đa hình(ghi đè) được, đây là PT ảo (key virtual); 
    void Xuat_Thong_Tin();   
    float TinhTienCauCa();//PT TinhTienCauCa() bắt buộc phải trung tên và phải định nghĩ PT này ở class Ho_Nho vì đây là PT thuần ảo ở class cha(Ho_Ca);

	Ho_Nho();
	~Ho_Nho();
};

