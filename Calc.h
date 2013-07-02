#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>
#include <sstream>
#include <string> 
#include <string.h>

using namespace System::Windows::Forms;

#define BUF 255

char temp[BUF];
char puffer[BUF];

/*Auslesen der n-ten Zeile*/
char *getsline_number(int n, FILE *file)
{
   int i;
   for(i=0; i<n-1; i++)
      if(fgets(temp, BUF, file) == NULL)
         /*Bis zur n-ten Zeile lesen*/
         return NULL; /*Zeile scheint nicht zu existieren*/
   /*Stream ist jetzt in der n-ten Zeile*/
   if(fgets(puffer,BUF,file) == NULL)
       return NULL; /*Zeile scheint nicht zu existieren*/
   return puffer; /*Zeile an Aufrufer zurück*/
}

double readnumber(int pos)
{	   
	char *lineneu[100];
	char *pch;
	char var[100][1000];
	FILE *f;
	unsigned int line = 1;
	char *linenr;
	int x=0;
	try{  
		f=fopen("myfile.json","r"); // Datei myfile.json öffnen
	if(f == NULL)
		{       
			MessageBox::Show("Fehler beim öffnen der Quelldateien");
			exit(0);
		}
	
		for(int i = 0;i<=100;i++){					// For schleife die die ersten 100 zeilen einliest
			linenr=getsline_number(line, f);		// Hier werden die Zeilen gewechselt 
			pch = strtok (linenr,"\"");				// Hier werden die Wörter
			while (pch != NULL)						// und zahlen zwischen " und 
			{										// ",Enter,Komma,Leer und
				pch = strtok (NULL, " \",\n{}");	// den geschweiften Klammern
				if (pch != '\0' && pch != ":")		// rauskopiert
				{
					strcpy(var[x],pch);				//Den String in einem Array speichern
					x++;							//
				}				
			}			
		}
 
		double num;
		// Umwandlung der Werte von String in double:
		std::istringstream source( var[pos]); 
		std::string token;

		while( getline( source, token, ',' ) ) {
			std::istringstream ss( token );
			ss >> num;
		}
		//Rückgabe der double Werte
		return num;
		}catch(int a){
		MessageBox::Show("Fehler beim öffnen der Quelldateien");
	}
}

std::string getstring(int postime)//Gibt den String des Labels zurueck
{	
	char *lineneu[100];
	char *pch;
	char var[100][1000];
	FILE *f;
	unsigned int line = 1;
	char *linenr;
	int x=0;
	try{
		f=fopen("myfile.json","r"); 
		if(f == NULL)
		{ 
			MessageBox::Show("Fehler beim öffnen der Quelldateien");
			exit(0);
		}

	
		for(int i = 0;i<=100;i++){
			linenr=getsline_number(line, f);	
			pch = strtok (linenr,"\"");
			while (pch != NULL)
			{	
				pch = strtok (NULL, "\",\n{}");				
				if (pch != '\0' && pch != ":")
				{	
					strcpy(var[x],pch);
					x++;				
				}				
			}			
		}
