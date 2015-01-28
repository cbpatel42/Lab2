//The driver is using non pointers to complete the task
//when we have setup completed, we need to convert to pointers
//which probably means one (or both) of us needs to visit Boshart
//-KEB 1/27/2015
#include "ReadFile.h"
#include "WriteFile.h"
#include "String.h"
#include "Tokens.h"

#include <iostream>
int main()
{
	/*
   ReadFile rf ("cds.txt");
   WriteFile wf ("out.txt");

   
   while(!rf.eof())
   {
      String* line = rf.readLine();
      wf.writeLine(line);
      delete line;
   }

   rf.close();
   wf.close();
   //delete rf;
   //delete wf;*/
   
   ReadFile* rf = new ReadFile("cds.txt");
   WriteFile* wf = new WriteFile("out.txt");

   
   while(!rf->eof())
   {
      String* line = rf->readLine();
      wf->writeLine(line);
      delete line;
   }

   rf->close();
   wf->close();
   delete rf;
   delete wf;

   return 0;
}