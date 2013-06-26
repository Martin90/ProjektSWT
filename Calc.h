// test1.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include "stdafx.h"


//int _tmain(int argc, _TCHAR* argv[])
//{
//  return 0;
//}
/* strtok example */
#include <stdlib.h>
#include <windows.h>
#include <sstream>
#include <string> 
#include <string.h>
//#include "Notify.h"



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
	
   //char line[100];
   char *lineneu[100];
   char *pch;
   char var[100][1000];
   FILE *f;
   unsigned int line = 1;
   char *linenr;
   int x=0;

  
   f=fopen("C:\\Users\\Elvis\\Desktop\\myfile.json","r");
   if(f == NULL)
      {
         //printf("Fehler beim Öffnen");
		 Sleep(10000);
         exit(0);
      }

	
   for(int i = 0;i<=100;i++){
   linenr=getsline_number(line, f);
   if(linenr == NULL)
      {
         //fprintf(stderr, "Fehler beim Lesen der %d-ten Zeile??\n",line);
		 //Sleep(1000000);
         //exit(0);
      }
   
   pch = strtok (linenr,"\"");
			while (pch != NULL)
			{		 
				
				
				pch = strtok (NULL, " \",\n{}");
				
				if (pch != '\0' && pch != ":"){
				
				
					
				
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
	ss >> num;}


return num;



}
