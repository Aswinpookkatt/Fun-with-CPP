
//This code is written by ASWIN CP
#include<iostream>
using namespace std;
int i,j;
void zero()
{	cout<<"\n\n";
	 for(i=1;i<6;i++)
  {
	for(j=1;j<6;j++)
	 {
	 if(i==1||i==5)
	 cout<<"*";
	 else if((i!=1&&i!=5)&&(j==1||j==5))
	 cout<<"*";
	 else
	 cout<<" ";
	 
	 	
     }
     cout<<"\n";
   } 
}

void one()
{
	cout<<"\n\n";
	for(i=1;i<6;i++) 
	{
		for(j=1;j<=5;j++)
		{
	
		if(i==1)
		{ if(j<4)
		cout<<"*";
		}
		if(i==2||i==3||i==4)//print 1 star after 2 spaces when i=2,3,4
		{
			cout<<"  *";
			break;
		}
		
			if(i==5)
			{
			cout<<"*";	
			}
		 } 
		 cout<<"\n";
	}
}

 void two()
{
		cout<<"\n\n";
  for(i=1;i<6;i++)
  {
	for(j=1;j<6;j++)
	{
    	if(i%2==0)
	  {
	
	   if(i==2)
	   {
	   cout<<"    *";
	   break;
       }
	   else
	   {
	   cout<<"*    ";
	   break;
       }
      } 
	   else
	   cout<<"*";
	}	
	cout<<"\n";
	
  }
}

void three()
{	cout<<"\n\n";
	for(i=1;i<6;i++)
	{
	 for(j=1;j<6;j++)
      {
      	if(i%2==0)
      	{
      	cout<<"    *";
      	break;
		  }
      	else
      	cout<<"*";
	    }	
	    cout<<"\n";
	}
	
}

void four()
{  	cout<<"\n\n";
  for(i=1;i<6;i++)
  {
	for(j=1;j<6;j++)
	{
	if(j==4||i==4)//if j and i either of them become 4 then print *
	{
		cout<<"*";
		}	
		else if((i==2&&j==3)||(i==3&&j==2))
		cout<<"*";
		else
		cout<<" ";
		
		
	}
	cout<<"\n";
  }  

}
void five()
{	cout<<"\n\n";
  for(i=1;i<6;i++)
  {
	for(j=1;j<6;j++)
	 {
	  if(i%2!=0)
	  cout<<"*";
	  else if(i==2)
	  {
	  
	  cout<<"*    ";
	  break;
      }
      else
    {
    	cout<<"    *";
    	break;
	}
     }
     cout<<"\n";
  }
	
}
void six()
{	cout<<"\n\n";
	 for(i=1;i<6;i++)
  {
	for(j=1;j<6;j++)
	 {
	 if(i%2!=0)
	 cout<<"*";
	 else if(i==2&&j==1)
	 cout<<"*";
	 else if((i==4&&j==1)||(i==4&&j==5))
	 cout<<"*";
	 else
	 cout<<" ";
	 
	 
	 
	 } 
	 cout<<"\n";
  }
	
	
}

void seven()
{	cout<<"\n\n";

	 for(i=1;i<6;i++)
  {
	for(j=1;j<6;j++)
	 {
	 	if(i==1||j==5)
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 	
	 	
     }
     cout<<"\n";
   } 
}

void eight()
{	cout<<"\n\n";

	 for(i=1;i<6;i++)
  {
	for(j=1;j<6;j++)
	 {
	 	if(i%2!=0)
	 	cout<<"*";
	 	else if(j==1||j==5)
	 	cout<<"*";
	 	else
	 	cout<<" ";
     }
     cout<<"\n";
   } 
}
void nine()
{	cout<<"\n\n";

	 for(i=1;i<6;i++)
  {
	for(j=1;j<6;j++)
	 {
	 	if((i==1||i==3) ||(j==5))
	 	cout<<"*";
	 	else if((i==2&&j==1) ||(i==2&&j==5))
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 	
     }
     cout<<"\n";
   } 
}
 int main()
 {   int number=0;
 int repeat=1;
 
 
while(repeat!=0)
{

 cout<<"ENTER ANY NUMBER BETWEEN 0 AND 9";
 cin>>number;
 switch (number)
 { case 0:
 	{
	 zero();
	 break;
	}
	case 1:
	{
	 one();
	 break;
	 }
	 case 2:
	 {
	 two();//fix
	 break;
     }
	 case 3:
	 {
	 three();//fix
	 break; 
     }
	 case 4:
	 {
	 four();
	 break;}
	 
	 case 5:
	 {
	 five();//fix
	 break;
	 }
	 case 6:
	 {
	 six();
	 break;
    }
	case 7:
	{
	 seven();
	 break;
    }
	 case 8:
	 {
	 eight();
	 break;
     }
     case 9:
    {
	 nine();
	 break;
     }
}
	 
cout<<"To continue press 1 ,press 0 to exit" ;
cin>>repeat;
}

return 0;  
//written by ASWIN CP.
 } 

