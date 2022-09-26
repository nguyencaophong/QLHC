#pragma once
#include<iostream>
#include<vector>
#include"Ho_Lon.h"
#include"Ho_Nho.h"
#include<vector>
#include<string>
using namespace std;

class Quan_Li_Ho_Cau
{
private:
	//vector<Ho_Ca *> ds_Ho_Cau;//khai bao mang 1 chieu chua lop cha-vi co virtual cho nen no se da hinh sang duoc class con;
	vector<Ho_Lon> ds_Ho_Lon;
	vector<Ho_Nho> ds_Ho_Nho;
public:
	Quan_Li_Ho_Cau();
	void Menu();
	void Nhap_Thong_Tin();
	void Xuat_Thong_Tin();
	float TinhTienCauCa();
	~Quan_Li_Ho_Cau();
};







