
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






int main()
{    	
   possiblescore(100);
   cout<<endl;
   possiblescore50(100);


return 0;	

}
