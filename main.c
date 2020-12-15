#include<iostream>

using namespace std;
int main(){
		int menu = 1;
		int Maths = 1;
		int Physics =1;
		int Biology = 1;
		int Chemistry =1 ;
		int English = 1;
		bool check = false;
		 int new1;
    	int new2; 
    	int new3;
    	int new4;
    	int new5;
		int n;
		float avg;
		int num;
		cout<<"   ---------------"<<endl;
		cout<<"       MENU    "<<endl;
		cout<<"        1. Input marks   "<<endl;
		cout<<"        2. Show avarege   "<<endl;
		cout<<"        3. Edit marks   "<<endl;
		cout<<"        4. Display marks "<<endl;
		cout<<"        5.Exit"<<endl;
	    cout<<"  ================="<<endl;
		
   do{
       
       cout<<"Enter  your choice :  ";        cin>>menu;
		
	    
	    switch(menu){
	        
	        case 1:
	        if(check==false){
	            cout<<"Marks obtained for maths : ";
	            cin>>Maths;
	            cout<<"Marks obtained for biology : ";
	            cin>>Biology;
	            cout<<"Marks obtained for chemistry : ";
	            cin>>Chemistry;
	            cout<<"Marks obtained for physics : ";
	            cin>>Physics;
	            cout<<"Marks obtained for english: ";
	            cin>>English;
	            check =true;
	        }
	        else{
	            cout<<"invalid credentials"<<endl;
	            break;
	            
	
	        case 2:
	        
	         num=Maths+Biology+Chemistry+Physics+English;
	        avg=num/5;
	        cout<<"average obtained : "<<avg<<endl;
	      
	         break;
	       case 3   : 
	         if(check==true){
	             while(true){
	                cout<<" Edit the marks "<<endl;
	                
	              cout<<"1.Maths : "<<endl;
	              cout<<"2.Physics: "<<endl;
	              cout<<"3.Chemistry: "<<endl;
	              cout<<"4.Biology: "<<endl;
	              cout<<"5.English : "<<endl;
	            
	              
	          
	              
	             
	              cin>>n;
	              switch(n){
	                  case 1:
	                      cout<<"enter value for sub 1 : " ;
	                      
	                   cin>>new1;
	                   Maths = new1;
	                   break;
	                       
	                      case 2:
	                      cout<<"enter value for sub 2 : " ;
	                     
	                   cin>>new2;
	                   Physics = new2;
	                   break;
	                     case 3:
	                      cout<<"enter value for sub 3 : " ;
	                      
	                   cin>>new3; 
	                   Chemistry = new3; 
	                   break;
	                     case 4:
	                      cout<<"enter value for sub 4: " ;
	                      
	                   cin>>new4;
	                   Biology = new4;
	                   break;
	                  
	                     case 5:
	                      cout<<"enter value for sub 5 : " ;
	                     
	                   cin>>new5;
	                   English =new5;
	                   break;
	              }
	 
	              int n;
	              cin>>n;
	              if(n==2){
	                  break;
	              }
	              else{
	                  continue;
	              }
	                   
	              }
	            
	         
	         }else{
	        cout<<"invalid marks "<<endl;
	    }
	    break;
	    case 4:
   
	           cout<<"MATHS : "<<Maths<<endl;
	           cout<<"PHYSICS : "<<Physics<<endl;
	           cout<<"CHEMISTRY : "<<Chemistry<<endl;
	           cout<<"BIOLOGY : "<<Biology<<endl;
	           cout<<"ENGLISH : "<<English<<endl;
	               	   
	               	   
	             	           
	                  case 5 :
	                  cout<<" exited";
	                  exit(0);
	                
	              
	               }       
	               }          
	        
	  
   }
	
	while(menu);
	    
	    
	} 