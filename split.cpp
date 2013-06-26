#include "stdafx.h"
#include <windows.h>
#define BUF 255

char temp[BUF];
char puffer[BUF];

/*Auslesen der nten Zeile*/
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

int main(int argc, char **argv)

{
   char lineneu[100];
   char *pch;
   char *var[100];
   FILE *f;
   unsigned int line = 1;
   char *linenr;
   int x=0;
  
   f=fopen("C:\\Users\\Elvis\\Desktop\\hochrechnungen.json","r");
   if(f == NULL)
      {
         
      }
	
   for(int i = 0;i<=100;i++){
   linenr=getsline_number(line, f);
   if(linenr == NULL)
      {
         
      }
   pch = strtok (linenr,"\"");
			while (pch != NULL)
			{		 				
				pch = strtok (NULL, " \",\n{}");				
				if (pch != '\0' && pch != ":"){				
				var[x] = pch;
				x++;
				pch++;
				}
      }			
   }      
}
