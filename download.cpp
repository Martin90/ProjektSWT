// download.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <tchar.h>
#include <urlmon.h>
#include <iostream>
#include <Windows.h>
#include <WinInet.h>
#include <stdio.h>
using namespace std;
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Wininet.lib")
int main()
{
  do
	{
	cout << "downloading jsonfile...";
	HRESULT hr = URLDownloadToFile ( NULL, _T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"),_T("C:\\Users\\Elvis\\Desktop\\myfile.json"), 0, NULL );
	DeleteUrlCacheEntry(_T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"));
	cout << "Done!" << endl;
	Sleep(80000);
	//remove("C:\\Users\\Elvis\\Desktop\\myfile.json");
	//cout<<"file removed"<<endl;
	//system("PAUSE");
	}while(1);
}
