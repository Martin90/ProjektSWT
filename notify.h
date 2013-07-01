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
using namespace System::Windows::Forms;

using namespace std;
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Wininet.lib")

bool equal(const std::string& filename1, const std::string filename2) //Dateien vergleichen
{ 
    std::ifstream f1(filename1.c_str()); //Datei 1
    std::ifstream f2(filename2.c_str()); //Datei 2
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

bool notify() //Diese Methode ist zur sätndigen vergleich der Dateien zuständig
{
	bool loopabort = true;
	try{
		do{
			//Download der Datei
			HRESULT hr = URLDownloadToFile ( NULL, _T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"),_T("myfile.json"), 0, NULL );
			DeleteUrlCacheEntry(_T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"));
			Sleep(1000); 
			//nach 1 Sekunde Abstand wird eine 2te Datei zur überprüfung heruntergeladen
			HRESULT br = URLDownloadToFile ( NULL, _T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"),_T("myfile1.json"), 0, NULL );
			DeleteUrlCacheEntry(_T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"));
	
	
			if(equal("myfile.json", "myfile1.json")) 
			{  
				loopabort = true;//Die Dateien sind gleich.	
			} 
			else 
			{ 
				CopyFileA("myfile1.json", "myfile.json",false);
				loopabort = false;//Die Dateien sind unterschiedlich.	
					
			} 
		}while(loopabort != false);
		return loopabort;	

	}catch(int a){
		MessageBox::Show("Fehler beim Download der Quelldateien");
	}
}

bool fileload()//Methode zum ersten Laden der Dateien
{
	
	try{		
		HRESULT hr = URLDownloadToFile ( NULL, _T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"),_T("myfile2.json"), 0, NULL );
		DeleteUrlCacheEntry(_T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"));
		Sleep(1000); 
		HRESULT br = URLDownloadToFile ( NULL, _T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"),_T("myfile1.json"), 0, NULL );
		DeleteUrlCacheEntry(_T("http://tk-labor.iem.thm.de/bti-swt-pa-ss13/hochrechnungen.json"));
		
		if(equal("myfile.json", "myfile1.json")) 
		{  
			return true;//Die Dateien sind gleich.	
		} 
		else 
		{ 
			CopyFileA("myfile1.json", "myfile.json",false);
			 return false;//Die Dateien sind unterschiedlich.	
					
		} 		
			

	}catch(int a){
		MessageBox::Show("Fehler beim Download der Quelldateien");
	}
}

void fileDelete()
{
	std::remove("myfile1.json");
	std::remove("myfile.json");
}
