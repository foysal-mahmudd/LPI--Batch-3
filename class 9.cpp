#include<bits/stdc++.h>

using namespace std;

int main(){
 
  // syntax of while loop
    int j=1;      // intialization
    while(j<=10){     // condition
        cout<<j<<endl;
        j++;       // increment
    }
    
    // we can also use while loop for charecter

    char ch='a';
    while(ch<='z'){
        cout<<ch<<endl;
        ch++;
    }


    int a=5,b=10;
    while(a--,b--){  // if there are multiple variable then our while loop
                     // condition always check last variable value is it true 
                     // or false
        cout<<a<<" "<<b<<endl;
        
    }
    
    // this loop will run forever, we call it infinite loop
    for(int i=1; ; i++){
        cout<<i<<endl;
    }
    
    // this loop will not be run because our condition is false
    int i=3;
    while(i<2){
        cout<<i<<endl;
    }
    

    // if our loop condition is false but we want to print our statement 
    // only for one time then we will use do while loop
    
    // syntax of do while loop
    int i=1;
    
    do{
        cout<<i<<endl; // this statment will exicute first
        
    }while(i<0);  // and our condition will check in last
   

   // here is another syntax of while loop without statement
     int a=5,b=10,c=15;
     while(--a,--b,--c); // we write a semicolon after loop 
         cout<<a<<" "<<b<<" "<<c<<endl; // thats why our loop will not 
                                        // exicute this statment after loop 
                                        // we will see our result for one time
  
  
  // solution of assignment of 1

   int i=1;
   int n;
   cin>>n;
   double sum=0;
   while(i<=n){ 
      sum=sum+(1.0/(i*i));
      i++;
   }

   cout<<sum<<endl;

 
 // this programe is for printing fibonacci sequence

    int n;
    cin>>n;

    int first=0, second=1, next;

    for(int i=1; i<=5; i++){
        cout<<first<<" ";
        next=first+second;
        first=second;
        second=next;
    }

    return 0;
}
