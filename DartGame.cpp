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


int scoreA=301;
int scoreB=301; 
int firstA=0;
int secondA=0;
int thirdA=0;
int firstB=0;
int secondB=0;
int thirdB=0;
int totalA=0;
int totalB=0;
char teamAname[50]="Vaibhav's Champs";
char teamBname[50]="Nitin's Warriors";
int setxA=42;
int setyA=3;
int setxB=104;
int setyB=3;
int initialposx;
int initialposy;
int newscorey;
int teamAwin=0;


HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);           // to declare variable h for colour changing 

 
int wherex()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.dwCursorPosition.X;
}

int wherey()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.dwCursorPosition.Y;
}
 


void gotoxy(short x, short y)           //definition of gotoxy function                                              
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

possiblescore(int score)
{

  int score1=60;
  int score2=60;
  int score3=60;
  int remainingscore;
  int limit;
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

  if(score==0)
  {
    score1=0;
    score2=0;
    score3=0;
    cout<<" Congrats!";
  }

  if(score==1)
  {
    score1=0;
    score2=0;
    score3=0;
    cout<<" not possible";
  }
 
  if(score==60)
  {
     score1=10;
     score2=50;
     score3=0; 
  }
 
    if(score>=180)
    {
      score1=60;
	  score2=60;
	  score3=60;
	  
	  
	  if(score==181)
      {
          score1=60;
		  score2=60;
		  score3=57;	  
	  }
	
		
	} 



    if(score>=120 && score<180)
    {		    
	 
	     score1=60;
	     remainingscore=score-60;
		  
		  
	         
	               if(remainingscore%2 == 1)   
	               {           
				      
				      score2=57;
			          
		           			  	         
				       score3= remainingscore- score2;
                       
                       
                       
					   for(i=0;i<21;i++)
					   {
					         if(score3 == doublescore[i])
					         { 
							  score3= doublescore[i];
					          break;
						     }
							  					 
					   }                   
                   
          
                        if(score3 != doublescore[i] )
                       {
                             for(i=0;i<21;i++) 
							 {
							    if(triplescore[i]>score3  )
							    {
								    if(((score3-triplescore[i] ) >= 2 ))
									{score3=triplescore[i-1];
									break;
								    }
								    
								    else
								    {score3=triplescore[i-2];
								     break;
								    }
							    }
							    		    
							 } 
							 
							 
							  for(int k=0;k<21;k++)
							  {
							      if(doublescore[k]>score3 && (120-doublescore[k]>=2 ))
							      {
								    score3= doublescore[k];
								    break;
								  }
							  }  
					
					
				        }
				     
				     
				     
				     
                       if(score3==60)
                       score3=57;
				     
				     
				           
				     
				     
				     
				     
				   }                                                                           
				   
				   
				   
				   if(remainingscore%2==0)
				   {
				       score2=60;
				       
				       score3= remainingscore- score2;

                       
					   for(i=0;i<21;i++)
					   {
					         if(score3 == doublescore[i])
					         { 
							  score3= doublescore[i];
					          break;
						     }
							  					 
					   }                   
                   
          
                        if(score3 != doublescore[i] )
                       {
                             for(i=0;i<21;i++) 
							 {
							    if(triplescore[i]>score3  )
							    {
								    if(((score3-triplescore[i] ) >= 2 ))
									{score3=triplescore[i-1];
									break;
								    }
								    
								    else
								    {score3=triplescore[i-2];
								     break;
								    }
							    }
							    		    
							 } 
							 
							 
							  for(int k=0;k<21;k++)
							  {
							      if(doublescore[k]>score3 && (120-doublescore[k]>=2 ))
							      {
								    score3= doublescore[k];
								    break;
								  }
							  }  
							    
		                       
                       }
         
                              
                       if(score3==60)
                       score3=57;
         
				   }
	 
	 	 
	 
	        
	 
	 
	 
	 
	 
	 
	}   


   
   if(score>60 && score<120)
   {
        	
      score1=60;
      
      
      remainingscore= score-score1;
    
      for(i=0 ; i<21 ; i++)
	  {
	        limit= remainingscore-2;
	      if(normalscore[i]== limit || doublescore[i]== limit  || normalscore[i]== limit-1 || doublescore[i]== limit-1 || triplescore[i]== limit || triplescore[i]== limit-1 )
	      { 
             
   	       
	        		limit= remainingscore-3;
	    			  if(normalscore[i]== limit || doublescore[i]== limit || triplescore[i]== limit  )
	      			{ 
	                     
            			score2= 3;
						score3=limit;
						break;   
						
						
								if(triplescore[i]== limit )
								{
			   					   	score2=3;
			  						 score3=limit;
			  				    	 break;
			                    }
						
								  
		  			}
            
            limit= remainingscore-2;
	         
            score2= limit;
			score3=2;
			break;   		  
			
			
			if(triplescore[i]== limit || triplescore[i]== limit-1)
			{
			   score2=limit;
			   score3=2;
			   break;
			}
			
		  }
	   

		  
	      if(remainingscore == normalscore[i] ||remainingscore == doublescore[i]  )  
	      { score2=remainingscore;
	        score3=0;
	        break;
	      }




                   	limit= remainingscore-4;
	    			  if(normalscore[i]== limit || doublescore[i]== limit || triplescore[i]== limit  )
	      			{ 
	                     
            			score2= limit;
						score3=4;
						break;   
			        }
             

	  
	  }  
   
   
   
     
      if(score==61)
      {
	    score1=1;
	    score2=10;
	    score3=50;			  
	  }
	  
   }



   if(score<60)  
  {  
	       for(i=0 ; i<21 ; i++) 
		   		 			 
		{	 if( (score-(20-i) ) %2 ==0 && (score-(20-i) ) > 0  )	            
	         {
			   score1= 20-i;
			   score2=( score- (20-i) )   ;
			   score3=0;
			   break;
			 }
	   }

             for(i=0 ; i<21 ; i++)
	         {    if(score == doublescore[i])  
	             {
		     			score1=score;
				        score2=0;
		                score3=0;
		                break;
		   		 }
	        
	        } 

 }

int flag=0;

 for(int ck=20;ck>=0;ck--)
 { 
    if(score1==doublescore[ck] && score1!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag=1;
	   break;
	} 
	if(score1==triplescore[ck] && score1!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag=1;
	   break;
	} 
		
 }
 if(score1==50)
 cout<<"  bull";

  if(flag==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(score1== normalscore[ck])
	    cout<<"  "<<normalscore[ck];
	  }
  
  }
 
 flag=0;
 

 for(int ck=20;ck>=0;ck--)
 { 
    if(score2==doublescore[ck] && score2!=0 )
    {
	   cout<<"  "<<ds[ck];
	   flag=1;
	   break;
	} 
	if(score2==triplescore[ck] && score2!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag=1;
	   break;
	} 
	
		
 }
 if(score2==50)
 cout<<"  bull";
 
  if(flag==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(score2== normalscore[ck])
	    cout<<"  "<<normalscore[ck];
	  }
  
  }
  
  flag=0;
 
 

 for(int ck=20;ck>=0;ck--)
 { 
    if(score3==doublescore[ck] && score3!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag=1;
	   break;
	} 
	if(score3==triplescore[ck] && score3!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag=1;
	   break;
	} 
		
 }
 if(score3==50)
 cout<<"  bull";
 
  if(flag==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(score3== normalscore[ck])
	    cout<<"  "<<normalscore[ck];
	  }
  
  }
  
  flag=0;
 
 
}


possiblescore50(int Score)
{

  int Score1=50;
  int Score2=50;
  int Score3=50;
  int Remainingscore;
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



    
   if(Score>50 && Score<100) 
   {
         for(i=0;i<21;i++)
         { 
		       if(Score-50 == Normalscore[i] ||Score-50 == Doublescore[i] ||Score-50 == Triplescore[i]   )
		       {
			        Score1= Score-50;
			        Score2=50;
			        Score3=0;
					break;    
			   }  
		 	 		 
		 }   
      
      
      
      
         if(Score-50 != Normalscore[i] ||Score-50 != Doublescore[i] ||Score-50 != Triplescore[i]   )
         {
		    
		    for(i=0;i<21;i++)
		    {
			        if(Doublescore[i] > Score-50  )
			        {
					   Score1=Doublescore[i-1];
					   Score2=Score - Score1 -50;
					   Score3=50;
					   break;
					}				
			
			}
		    
		    for(i=0;i<21;i++)
		    {
			        if(Triplescore[i] > Score-50  )
			        {
					   Score1=Triplescore[i-1];
					   Score2=Score - Score1 -50;
					   Score3=50;
					   break;
					}				
			
			}
		 
		  
		 }
            
   
   }


 
  if(Score>100 && Score<170)                                  //only this left now in 50 included
  {
  
         
  
         if(Score-100 != Normalscore[i] ||Score-100 != Doublescore[i] ||Score-100 != Triplescore[i]  ) 
         {
		 
                Score3=50;                                                                                              //just this left for less than 101 to 160
		        Remainingscore=Score-50;
		       
		         if(Score%2==1)   //odd
		         {
				         for(i=0;i<21;i++)
				         {
				         	 	for(int k=0;k<21;k++)
							 {
				         	    if(Score-50-Triplescore[20-i]==Triplescore[k] || Score-50-Triplescore[20-i]==Doublescore[k]  )
				         	    Score1=Triplescore[20-i];
							  }
			
			
			      						 	  		  
							 if(Doublescore[i]==Score-50-Score1)
							 {
			                    Score2=Doublescore[i];          	
								break;	  						 
							 } 
							 
							 
							 if(Triplescore[i]==Score-50-Score1)
							 {
                              	Score2=Triplescore[i];                     	
								break;	  						 
							 } 
							   
							   
					     }
				  
				  
				  
			              				 if(Score2==50)
				           				{
						     				for(int j=0;j<21;j++)
											 {
							       					if(Triplescore[j]>Score-50-Score2)
							       					{Score1=Triplescore[j-1];
							       					break;
													}
							 				}		 
									   }	 		
							           
				 
				 }
		  
		    
		  
                 if(Score%2==0)		  
		         {
				     
				      
				         for(i=0;i<21;i++)
				         {
				         	for(int k=0;k<21;k++)
							 {
				         	    if(Score-50-Triplescore[20-i]==Triplescore[k] || Score-50-Triplescore[20-i]==Doublescore[k])
				         	    Score1=Triplescore[20-i];
							  }
				         	 
				         	 
				         	 
				             		  
							 if(Doublescore[i]==Score-50-Score1)
							 {
                              	Score2=Doublescore[i];
								  break;	  						 
							 } 
							 
							 
							 if(Triplescore[i]==Score-50-Score1)
							 {
                              	Score2=Triplescore[i];
								  break;	  						 
							 } 
				
				        }
				 
				 
				 	 if(Score2==50)
				           				{
						     				for(int j=0;j<21;j++)
											 {
							       					if(Triplescore[j]>Score-50-Score2)
							       					{Score1=Triplescore[j-1];
							       					break;
													}
							 				}		 
									   }	 		
							 
				 
				 
				 } 
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  		  
		 	
			if(Score-100 >60) 
			{
			   Score1=60;
			    
			      
		    for(i=0;i<21;i++)
		    {
			        if(Triplescore[i] >= Score-110 && (Score-110-Triplescore[i-1]>=2 || Score-110-Triplescore[i-1]==0 || Score-110-Triplescore[i-2]>=2 ))
			        {
					   Score2=Triplescore[i-1];
					   Score3=50;
					   if(Triplescore[i]==Score-110 )
					   {
					      Score2=Triplescore[i];
					      Score3=50;
					      break;
					   }
					   if(Score-110-Triplescore[i-1]<2)
					   {
					     Score2=Triplescore[i-2];
					     if(Triplescore[i-2]<50 && Score-110-50 >=2)
					     Score2=50;
					     
					     Score3=50;
					   }
					   break;
					}				
			
			}
		 	
			   
			
			
			}
			
			
         for(i=0;i<21;i++)
         { 
	  	       if(Score-100 == Normalscore[i] ||Score-100 == Doublescore[i] ||Score-100 == Triplescore[i]   )
		       {
			        Score1= Score-100;
			        Score2=50;
			        Score3=50;
					break;    
			   }  
		 	 		 
		 }    	  
		 		  
		 
		 }  
  
  
   
  } 

  
  
   
   if(Score==50)  
   {  
      Score1=50;
      Score2=0;
      Score3=0;
   }

 
   if(Score==100)  
   {  
      Score1=50;
      Score2=50;
      Score3=0;
   }
 
   if(Score==150)  
   {  
      Score1=50;
      Score2=50;
      Score3=50;
   }

   if(Score==170)  
   {  
      Score1=60;
      Score2=60;
      Score3=50;
   }



  
int flag=0;



   if(Score>=50 && Score<=170){
   
  for(int ck=20;ck>=0;ck--)
 { 
    if(Score1==Doublescore[ck] && Score1!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag=1;
	   break;
	} 
	if(Score1==Triplescore[ck] && Score1!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag=1;
	   break;
	} 
		
 }
 
 if(Score1==50)
 cout<<"  bull";
  
  
  if(flag==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(Score1== Normalscore[ck])
	    cout<<"  "<<Normalscore[ck];
	  }
  
  }
 
 flag=0;
  
  
   
   
    for(int ck=20;ck>=0;ck--)
 { 
    if(Score2==Doublescore[ck] && Score2!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag=1;
	   break;
	} 
	if(Score2==Triplescore[ck] && Score2!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag=1;
	   break;
	} 
		
 }
 if(Score2==50)
 cout<<"  bull";


  
  if(flag==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(Score2== Normalscore[ck])
	    cout<<"  "<<Normalscore[ck];
	  }
  
  }
 
 flag=0;
  
  
   
      
    for(int ck=20;ck>=0;ck--)
 { 
    if(Score3==Doublescore[ck] && Score3!=0)
    {
	   cout<<"  "<<ds[ck];
	   flag=1;
	   break;
	} 
	if(Score3==Triplescore[ck] && Score3!=0)
    {
	   cout<<"  "<<ts[ck];
	   flag=1;
	   break;
	} 
		
 }
 if(Score3==50)
 cout<<"  bull";

   
  
  if(flag==0)
  {
      for(int ck=0;ck<21;ck++)
      {
	    if(Score3== Normalscore[ck])
	    cout<<"  "<<Normalscore[ck];
	  }
  
  }
 
 flag=0;
  
  
   
   }


}




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
   gotoxy(32,1);
   SetConsoleTextAttribute(h,14);	
   cout<<"Welcome to Dart Board Score Calculator program!";   	
   gotoxy(5,10);
   SetConsoleTextAttribute(h,3);	 
   cout<<"Name of team A : ";
   gets(teamAname);
   gotoxy(70,10);
   SetConsoleTextAttribute(h,12);
   cout<<"Name of team B : ";
   gets(teamBname);  
   system("CLS");
     system("Color F0");
   
   for(int k =0 ; k<400  ; k++) 
  {
   gotoxy(58,k);
   cout<<"|" ;     
  }
  
   gotoxy(10,0);
   
   SetConsoleTextAttribute(h,241);
   cout<<"Team "<<teamAname;

   gotoxy(70,0);
   
   SetConsoleTextAttribute(h,244);
   cout<<"Team "<<teamBname;	


	
  
 for(scoreA,scoreB; scoreA>0 && scoreB>0 ;       )  
 {  
    
   SetConsoleTextAttribute(h,241);
   
   gotoxy(43,setyA-3);
   cout<<"Score = "<<scoreA;	

   SetConsoleTextAttribute(h,244);


   gotoxy(104,setyB-3);
   cout<<"Score = "<<scoreB;	


   SetConsoleTextAttribute(h,240);

 
 //  setxA=42;     //otherwise wont update
 //  setyA=3; 
	
   gotoxy(setxA,setyA);                                                   //best possible tell of 3  before any input
   SetConsoleTextAttribute(h,240);	
   cout<<"Best Possible";	
   gotoxy(setxA-2,setyA+1);	
   possiblescore(scoreA);
   gotoxy(setxA-2,setyA+2);	
   possiblescore50(scoreA);
	                                                        //ScoreA1
   gotoxy(1,setyA);	
   cout<<"Score 1 :    "; 
   initialposx=wherex();
   initialposy=wherey();	
   cin>>firstA;	

      while(!cin>>firstA || !cin.good() || firstA<0 || firstA>60 || (scoreA-firstA)<0 || (scoreA-firstA)==1 ) 
    {   
		   	cin.clear();
        cin.ignore(INT_MAX ,'\n');
		gotoxy(initialposx,initialposy);
		cout<<"                           ";
        SetConsoleTextAttribute(h,246);
        gotoxy(initialposx+17,initialposy);
		cout<<"Invalid!";		
		SetConsoleTextAttribute(h,240);
		gotoxy(initialposx,initialposy);    
	    cin>>firstA;
    }
	
        gotoxy(initialposx+17,initialposy);        //clearing invalid after correct input 
		cout<<"        ";		
	
	
	    scoreA=scoreA-firstA;                       //new scoreA  after 1 input
	    
	    
	    
        SetConsoleTextAttribute(h,241);            //Updating total score after 1 input
        gotoxy(43,setyA-3);
        cout<<"              ";
        gotoxy(43,setyA-3);
        cout<<"Score = "<<scoreA;	
        SetConsoleTextAttribute(h,240);
	    
	    
	    if(scoreA==0)                             //checking win condition after 1 input
	    {
		   teamAwin=1;
		   break;
		}
	    
	    
        gotoxy(setxA-2,setyA+1);                   //after 1 input calculating best choice for 2 next
		cout<<"                ";
		gotoxy(setxA-2,setyA+1);	
        possiblescore2(scoreA);	

        gotoxy(setxA-2,setyA+2);
		cout<<"                  ";
        gotoxy(setxA-2,setyA+2);	
        possible2score50(scoreA);

	
	                                                        //ScoreA2
   gotoxy(1,setyA+1);	
   cout<<"Score 2 :    "; 
   initialposx=wherex();
   initialposy=wherey();	
   cin>>secondA;	
	
   
      while(!cin>>secondA || !cin.good() || secondA<0 || secondA>60 || (scoreA-secondA)<0 || (scoreA-secondA)==1 ) 
    {   
		   	cin.clear();
        cin.ignore(INT_MAX ,'\n');
		gotoxy(initialposx,initialposy);
		cout<<"                           ";
        SetConsoleTextAttribute(h,246);
        gotoxy(initialposx+17,initialposy);
		cout<<"Invalid!";		
		SetConsoleTextAttribute(h,240);
		gotoxy(initialposx,initialposy);    
	    cin>>secondA;
    }

        gotoxy(initialposx+17,initialposy);              //clearing invalid after correct input
		cout<<"        ";		


  
	    scoreA=scoreA-secondA;                       //new scoreA after 2 input
	    

	    
        SetConsoleTextAttribute(h,241);            //Updating total score  after 2 input
        gotoxy(43,setyA-3);
        cout<<"              ";
  	    gotoxy(43,setyA-3);
        cout<<"Score = "<<scoreA;	
        SetConsoleTextAttribute(h,240);


	    
	    if(scoreA==0)                             //checking win condition after 2 input
	    {
		   teamAwin=1;
		   break;
		}




        gotoxy(setxA-2,setyA+1);                   //after 2 input calculating best choice for 1 next
		cout<<"                ";
		gotoxy(setxA-2,setyA+1);	
        possible1score(scoreA);	

        gotoxy(setxA-2,setyA+2);                   //just clear possible 50 in for only 1 possible   
		cout<<"                  ";
    



	
	                                                        //ScoreA3
   gotoxy(1,setyA+2);	
   cout<<"Score 3 :    "; 
   initialposx=wherex();
   initialposy=wherey();	
   cin>>thirdA;	


      while(!cin>>thirdA || !cin.good() || thirdA<0 || thirdA>60 || (scoreA-thirdA)<0 || (scoreA-thirdA)==1 ) 
    {   
		   	cin.clear();
        cin.ignore(INT_MAX ,'\n');
		gotoxy(initialposx,initialposy);
		cout<<"                           ";
        SetConsoleTextAttribute(h,246);
        gotoxy(initialposx+17,initialposy);
		cout<<"Invalid!";		
		SetConsoleTextAttribute(h,240);
		gotoxy(initialposx,initialposy);    
	    cin>>thirdA;
    }


        gotoxy(initialposx+17,initialposy);              //clearing invalid after correct input
		cout<<"        ";		


  
	    scoreA=scoreA-thirdA;                       //new scoreA after all 3 inputs
                                            

	    
        SetConsoleTextAttribute(h,241);            //Updating total score  after 3 input
        gotoxy(43,setyA-3);
        cout<<"              ";
        gotoxy(43,setyA-3);
        cout<<"Score = "<<scoreA;	
        SetConsoleTextAttribute(h,240);

	    
	    if(scoreA==0)                             //checking win condition after 3 input
	    {
		   teamAwin=1;
		   break;
		}
                                            
                                            
	    
	    
        gotoxy(setxA-2,setyA+1);                   //after All 3 inputs showing to  best posiible 3 to see till next turn
		cout<<"                ";
		gotoxy(setxA-2,setyA+1);	
        possiblescore(scoreA);	

        gotoxy(setxA-2,setyA+2);
		cout<<"                  ";
        gotoxy(setxA-2,setyA+2);	
        possiblescore50(scoreA);

                                            
                                            
                                            
                                            



        
        
               //  Team B input



 //  setxB=104;
 //  setyB=3; 
	
   gotoxy(setxB,setyB);                                                   //best possible tell of 3  before any input
   SetConsoleTextAttribute(h,240);	
   cout<<"Best Possible";	
   gotoxy(setxB-2,setyB+1);	
   possiblescore(scoreB);
   gotoxy(setxB-2,setyB+2);	
   possiblescore50(scoreB);


	                                                        //ScoreB1
   gotoxy(60,setyB);	
   cout<<"Score 1 :    "; 
   initialposx=wherex();
   initialposy=wherey();	
   cin>>firstB;	



      while(!cin>>firstB || !cin.good() || firstB<0 || firstB>60 || (scoreB-firstB)<0 || (scoreB-firstB)==1 ) 
    {   
		   	cin.clear();
        cin.ignore(INT_MAX ,'\n');
		gotoxy(initialposx,initialposy);
		cout<<"                           ";
        SetConsoleTextAttribute(h,246);
        gotoxy(initialposx+17,initialposy);
		cout<<"Invalid!";		
		SetConsoleTextAttribute(h,240);
		gotoxy(initialposx,initialposy);    
	    cin>>firstB;
    }
	
        gotoxy(initialposx+17,initialposy);        //clearing invalid after correct input 
		cout<<"        ";		
	
	
	    scoreB=scoreB-firstB;                       //new scoreB  after 1 input
	    

        SetConsoleTextAttribute(h,244);            //updating total score after 1 input
        gotoxy(104,setyB-3);
        cout<<"              ";
        gotoxy(104,setyB-3);
        cout<<"Score = "<<scoreB;	
        SetConsoleTextAttribute(h,240);

 	    
	    
	    if(scoreB==0)                             //checking win condition after 1 input
	    {
		   break;
		}
                                            
	    
	    
	    
        gotoxy(setxB-2,setyB+1);                   //after 1 input calculating best choice for 2 next
		cout<<"                ";
		gotoxy(setxB-2,setyB+1);	
        possiblescore2(scoreB);	

        gotoxy(setxB-2,setyB+2);
		cout<<"                  ";
        gotoxy(setxB-2,setyB+2);	
        possible2score50(scoreB);




	
	                                                        //ScoreB2
   gotoxy(60,setyB+1);	
   cout<<"Score 2 :    "; 
   initialposx=wherex();
   initialposy=wherey();	
   cin>>secondB;	
	


      while(!cin>>secondB || !cin.good() || secondB<0 || secondB>60 || (scoreB-secondB)<0 || (scoreB-secondB)==1 ) 
    {   
		   	cin.clear();
        cin.ignore(INT_MAX ,'\n');
		gotoxy(initialposx,initialposy);
		cout<<"                           ";
        SetConsoleTextAttribute(h,246);
        gotoxy(initialposx+17,initialposy);
		cout<<"Invalid!";		
		SetConsoleTextAttribute(h,240);
		gotoxy(initialposx,initialposy);    
	    cin>>secondB;
    }

        gotoxy(initialposx+17,initialposy);              //clearing invalid after correct input
		cout<<"        ";		


  
	    scoreB=scoreB-secondB;                       //new scoreB after 2 input
	    

        SetConsoleTextAttribute(h,244);            //updating total score after 2 input
        gotoxy(104,setyB-3);
        cout<<"              ";
        gotoxy(104,setyB-3);
        cout<<"Score = "<<scoreB;	
        SetConsoleTextAttribute(h,240);

	    
	    if(scoreB==0)                             //checking win condition after 1 input
	    {
		   break;
		}
 	    


        gotoxy(setxB-2,setyB+1);                   //after 2 input calculating best choice for 1 next
		cout<<"                ";
		gotoxy(setxB-2,setyB+1);	
        possible1score(scoreB);	

        gotoxy(setxB-2,setyB+2);                   //just clear possible 50 in for only 1 possible   
		cout<<"                  ";
    



	
	                                                        //ScoreB3
   gotoxy(60,setyB+2);	
   cout<<"Score 3 :    "; 
   initialposx=wherex();
   initialposy=wherey();	
   cin>>thirdB;	


      while(!cin>>thirdB || !cin.good() || thirdB<0 || thirdB>60 || (scoreB-thirdB)<0 || (scoreB-thirdB)==1 ) 
    {   
		   	cin.clear();
        cin.ignore(INT_MAX ,'\n');
		gotoxy(initialposx,initialposy);
		cout<<"                           ";
        SetConsoleTextAttribute(h,246);
        gotoxy(initialposx+17,initialposy);
		cout<<"Invalid!";		
		SetConsoleTextAttribute(h,240);
		gotoxy(initialposx,initialposy);    
	    cin>>thirdB;
    }




        gotoxy(initialposx+17,initialposy);              //clearing invalid after correct input
		cout<<"        ";		


  
	    scoreB=scoreB-thirdB;                       //new scoreB after all 3 inputs


        SetConsoleTextAttribute(h,244);            //updating total score after 3 input
        gotoxy(104,setyB-3);
        cout<<"              ";
        gotoxy(104,setyB-3);
        cout<<"Score = "<<scoreB;	
        SetConsoleTextAttribute(h,240);

 	    
	    
	    if(scoreB==0)                             //checking win condition after 1 input
	    {
		   break;
		}
	    
                                            
 	    
	    
        gotoxy(setxB-2,setyB+1);                   //after All 3 inputs showing to  best posiible 3 to see till next turn
		cout<<"                ";
		gotoxy(setxB-2,setyB+1);	
        possiblescore(scoreB);	

        gotoxy(setxB-2,setyB+2);
		cout<<"                  ";
        gotoxy(setxB-2,setyB+2);	
        possiblescore50(scoreB);

                       








    setyA+=8; 
    setyB+=8;






}               //for loop ends of both team's input
	


	
	


   if (teamAwin==1)
   { gotoxy(40,setyA+6);
   	SetConsoleTextAttribute(h,250);
    cout<<endl<<endl<<endl<<endl<<"                                     Congratulations!  Team "<<teamAname <<" WINS!!";
    SetConsoleTextAttribute(h,240);
    cout<<endl<<endl<<endl;
   }

   if (teamAwin==0)
   {  gotoxy(40,setyA+6);
     SetConsoleTextAttribute(h,250);
     cout<<endl<<endl<<endl<<endl<<"                                     Congratulations!  Team "<<teamBname <<" WINS!!";
     SetConsoleTextAttribute(h,240);
     cout<<endl<<endl<<endl;
   }












	
	
return 0;	
}
