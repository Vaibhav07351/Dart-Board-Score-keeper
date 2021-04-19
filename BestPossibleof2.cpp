
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

possiblescore2(int score)
{
  int scorep1=60;
  int scorep2=60;
  int remainingscore;
  int limit;
  int flag=0;
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


  if(score>=62 && score<=100)
  {
      
      if(score%2==1)         //odd
      {
               scorep1=57;  
			   scorep2= score-scorep1;
			   if(scorep2>40)
			   scorep2=40;
	  }
  
  
      if(score%2==0)         //even
      {
               scorep1=60;  
			   scorep2= score-scorep1;
			
	  }
  

  } 
 
 
   if(score>=2 && score<62)
   {
    
            
			for(int i=20;i>=0;i--)	   
            {
                if(score - triplescore[i]>=2)			
			    {
				   scorep1=triplescore[i];
				   scorep2=score-scorep1;
				   
				   for(int k=0;k<21;k++)
				   {
				     
					  if(scorep2==doublescore[k])
				        { flag=1;
					      break;
				        }
				        
			       }
			       
			       if(flag==1)
			       break;
			    }
	
	
	
	            if(score==doublescore[i] )
	            {
				  scorep1=0;
				  scorep2=score;
				  break;
				}
	
			
			} 	   
	      
   
   }
   
   
   if(score>100)
   {
           
		      if(score%2==1)         //odd
      {
               scorep1=57;  
			   
			   for(int i=20;i>=0;i--)
			   {
			   	      if(score-57-doublescore[i]==2 || score-57-doublescore[i]==0)
			   	      {
					       scorep2=doublescore[i];
						   break;	 
					  }
			   	  
                 	  if(score-57-triplescore[i]>=2 && (score-57-triplescore[i])%2==0)			   
 			       		{
					 		scorep2=triplescore[i];
 			        		break;
				   		}
				   
			   }
			   
			   
	  }
  
  
      if(score%2==0)         //even
      {
               scorep1=60;  
			 
			   for(int i=20;i>=0;i--)
			   {
			   	      if(score-60-doublescore[i]==2 || score-60-doublescore[i]==0)
			   	      {
					       scorep2=doublescore[i];
						   break;	 
					  }
			   	  
                 	  if(score-60-triplescore[i]>=2 && (score-60-triplescore[i])%2==0)			   
 			       		{
					 		scorep2=triplescore[i];
 			        		break;
				   		}
				   
			   }
			   
	  }
  
		       
   
   
   }
   
   
   
   
   
   
   


  if(score==0)
   {
     scorep1=0;
     scorep2=0;
   }


  if(score==1)
   {
     scorep1=0;
     scorep2=0;
   }


  if(score==3)
   {
     scorep1=1;
     scorep2=2;
   }

   if(score==110)
   {
     scorep1=60;
     scorep2=50;
   }


 
  
int flag1=0;

 for(int ck=20;ck>=0;ck--)
 { 
    if(scorep1==doublescore[ck] && scorep1!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag1=1;
	   break;
	} 
	if(scorep1==triplescore[ck] && scorep1!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag1=1;
	   break;
	} 
		
 }
 if(scorep1==50)
 cout<<"  bull";
 
 
  if(flag1==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(scorep1== normalscore[ck])
	    cout<<"  "<<normalscore[ck];
	  }
  
  }
 


  
 flag1=0;

 for(int ck=20;ck>=0;ck--)
 { 
    if(scorep2==doublescore[ck] && scorep2!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag1=1;
	   break;
	} 
	if(scorep2==triplescore[ck] && scorep2!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag1=1;
	   break;
	} 
		
 }
 if(scorep2==50)
 cout<<"  bull";
 
 
  if(flag1==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(scorep2== normalscore[ck])
	    cout<<"  "<<normalscore[ck];
	  }
  
  }


}


possible2score50(int Score)
{

  int Scorep1=0;
  int Scorep2=0;
  int Remainingscore=Score-50;
  int Limitscore;
  int Normalscore[21];
  int Doublescore[21];
  int Triplescore[21];
  char ds[21][10]={ "0","d1" ,"d2" ,"d3" ,"d4"  ,"d5"  ,"d6" ,"d7" ,"d8"  ,"d9" ,"d10"  ,"d11"  ,"d12"  ,"d13" ,"d14","d15","d16","d17","d18","d19","d20" };
  char ts[21][10]={ "0","t1" ,"t2" ,"t3" ,"t4"  ,"t5"  ,"t6" ,"t7" ,"t8"  ,"t9" ,"t10"  ,"t11"  ,"t12"  ,"t13" ,"t14","t15","t16","t17","t18","t19","t20" }; 
 
  int i=0;
     
  for( i=0 ; i<21 ;i++)
  {Normalscore[i] = i ;  
  }
   for( i=0 ; i<21 ;i++)
  {Doublescore[i] = i*2 ;  
  }
  for(i=0 ; i<21 ;i++)
  {Triplescore[i] = i*3 ; 
  }

 
  if(Score>51)
  {
     
	 for(int i=0;i<21;i++)
	 {
	    if(Normalscore[i]==Remainingscore)
	    {
		  Scorep1=Remainingscore;
		  Scorep2=50;
		  break;
		}
		if(Triplescore[i]==Remainingscore)
	    {
		  Scorep1=Remainingscore;
		  Scorep2=50;
		  break;
		}
		if(Doublescore[i]==Remainingscore)
	    {
		  Scorep1=Remainingscore;
		  Scorep2=50;
		  break;
		}
		
		
	 }  
  
  
  }
 
 
  if(Score==100) 
  {
    Scorep1=50;
    Scorep2=50;
  }

  
  if(Score==50) 
  {
    Scorep1=50;
    Scorep2=0;
  }


int flag1=0;

 for(int ck=20;ck>=0;ck--)
 { 
    if(Scorep1==Doublescore[ck] && Scorep1!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag1=1;
	   break;
	} 
	if(Scorep1==Triplescore[ck] && Scorep1!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag1=1;
	   break;
	} 
		
 }
 if(Scorep1==50)
 cout<<"  bull";
 
 
  if(flag1==0 && Scorep1!=0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(Scorep1== Normalscore[ck])
	    cout<<"  "<<Normalscore[ck];
	  }
  
  }
 


  
 flag1=0;

 for(int ck=20;ck>=0;ck--)
 { 
    if(Scorep2==Doublescore[ck] && Scorep2!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag1=1;
	   break;
	} 
	if(Scorep2==Triplescore[ck] && Scorep2!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag1=1;
	   break;
	} 
		
 }
 if(Scorep2==50)
 cout<<"  bull";
 
 
  if(flag1==0 && Scorep1!=0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(Scorep2== Normalscore[ck])
	    cout<<"  "<<Normalscore[ck];
	  }
  
  }



}





int main()
{
	possiblescore2(100);
	cout<<endl;                          
	possible2score50(100);              //won't show if not possible value

return 0;	
}













