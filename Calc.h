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

double var(int pos)
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
				pch = strtok (NULL, " \",\n{}");				
				if (pch != '\0' && pch != ":")
				{
					strcpy(var[x],pch);
					x++;			
				}				
			}			
		}
 
		double num;

		std::istringstream source( var[pos]); 
		std::string token;

		while( getline( source, token, ',' ) ) {
			std::istringstream ss( token );
			ss >> num;
		}
		return num;
		}catch(int a){
		MessageBox::Show("Fehler beim öffnen der Quelldateien");
	}
}

std::string gettime()
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
 
	std::string b;
	b=var[5];

	return b;	
	}catch(int a){
		MessageBox::Show("Fehler beim öffnen der Quelldateien");
	}
}
