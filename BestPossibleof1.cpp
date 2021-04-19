#include<iostream>              //for cin cout
#include<stdlib.h>              //for  clear screen -> system("CLS")
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include<math.h>
#include<ctype.h>
#include<typeinfo>
#include<limits.h>
#include <cwchar>
#include<iomanip>

using namespace std;

possible1score(int score)
{

  int score1p=0;
  int remainingscore;
  int limit;
  int flag=0;
  int flag2=0;
  int normalscore[21];
  int doublescore[21];
  int triplescore[21];
  char ds[21][10]={ "0","d1" ,"d2" ,"d3" ,"d4"  ,"d5"  ,"d6" ,"d7" ,"d8"  ,"d9" ,"d10"  ,"d11"  ,"d12"  ,"d13" ,"d14","d15","d16","d17","d18","d19","d20" };
  char ts[21][10]={ "0","t1" ,"t2" ,"t3" ,"t4"  ,"t5"  ,"t6" ,"t7" ,"t8"  ,"t9" ,"t10"  ,"t11"  ,"t12"  ,"t13" ,"t14","t15","t16","t17","t18","t19","t20" }; 
 
  int i=0;
     
  for( i=0 ; i<21 ;i++)
  {normalscore[i] = i ;  
  }
   for( i=0 ; i<21 ;i++)
  {doublescore[i] = i*2 ;  
  }
  for(i=0 ; i<21 ;i++)
  {triplescore[i] = i*3 ; 
  }
  
  
  if(score<=40)
  {
   
       for(int i=20;i>=0;i--)
       {
	   
                if(score==doublescore[i])	   
	            {
				  score1p=doublescore[i];
				  flag2=1;
				  break;
				}   
	   
	   }
  
       
	 if(flag2==0)   
     {
	 
	    for(int k=20;k>=0;k--)
	    {
		
		    if(score-normalscore[k]>=2 && ( score-normalscore[k] )%2==0 )
		    {
			  score1p=normalscore[k];
			  break;
			} 
		
		   
		    if(score-triplescore[k]>=2 && ( score-triplescore[k] )%2==0 )
		    {
			  score1p=triplescore[k];
			  break;
			} 
		
		
		}
	 
	 
	 
	 
	 }
  
  
  
  
  
  
  }
  
  
   
  if(score>40 && score<62)
  {
  
     for(int i=20;i>0;i--)
     {
	 
	      if(score - triplescore[i]>=2 && ( score - triplescore[i] )%2==0)
	      {
		     
		    score1p=triplescore[i];
		    break; 
		  }
	  
	 } 
  
  
  }
  
  
  if(score>=62)
  {
    score1p=60;
  }  
  
  
  if(score==50)
  {
    score1p=50;
  }  
  
  



  
int flag1=0;

 for(int ck=20;ck>=0;ck--)
 { 
    if(score1p==doublescore[ck] && score1p!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag1=1;
	   break;
	} 
	if(score1p==triplescore[ck] && score1p!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag1=1;
	   break;
	} 
		
 }
 if(score1p==50)
 cout<<"  bull";
 
 
  if(flag1==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(score1p== normalscore[ck])
	    cout<<"  "<<normalscore[ck];
	  }
  
  }
 

  
}



int main()
{
	
     possible1score(56);        
    	
	
return 0;	
}

