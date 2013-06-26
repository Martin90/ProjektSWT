// download.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <tchar.h>
#include <urlmon.h>
#include <iostream>
#include <fstream> 
#include <Windows.h>
#include <WinInet.h>
#include <stdio.h>
#include <string>  
#include <iostream> 
#include <vector> 
#include <algorithm> 
//#include "Calc.h"
using namespace std;
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Wininet.lib")

bool equal(const std::string& filename1, const std::string filename2) 
{ 
    std::ifstream f1(filename1.c_str()); 
    std::ifstream f2(filename2.c_str()); 
    char c1, c2; 
    while(f1.get(c1)) 
    { 
        if(!f2.get(c2)) 
        { 
            return false; 
        } 
        if(c1 != c2) 
        { 
            return false; 
        } 
    } 
    if(f2.get(c2)) 
    { 
        return false; 
    } 
    return true; 
} 

bool notify(int pos)
{
  //int i = 0;
	do
	{
	
	HRESULT hr = URLDownloadToFile ( NULL, _T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"),_T("C:\\Users\\Elvis\\Desktop\\myfile.json"), 0, NULL );
	DeleteUrlCacheEntry(_T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"));
	Sleep(1000); 
	HRESULT br = URLDownloadToFile ( NULL, _T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"),_T("C:\\Users\\Elvis\\Desktop\\myfile1.json"), 0, NULL );
	DeleteUrlCacheEntry(_T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"));
	
	
	if(equal("C:\\Users\\Elvis\\Desktop\\myfile.json", "C:\\Users\\Elvis\\Desktop\\myfile1.json")) 
    { 
        
		
		return true;//Die Dateien sind gleich.
		
		
    } 
    else 
    { CopyFileA("C:\\Users\\Elvis\\Desktop\\myfile1.json", "C:\\Users\\Elvis\\Desktop\\myfile.json",false);
      
	return false;//Die Dateien sind unterschiedlich.
		
    } 

	
	}while(1);
}
