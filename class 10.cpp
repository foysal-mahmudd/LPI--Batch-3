#include<bits/stdc++.h>

using namespace std;

int main(){
   
   // syntax of nested for loop
      for(int i=1; i<=3; i++){       // first loop is called outer loop
         cout<<"i is now = "<<i<<endl;
        for(int j=1; j<=5; j++){      // this loop is called inner loop
            cout<<"j is = "<<j<<endl; // if we run nested loop in a program our outer loop will 
                                      // not run until our inner loop condition become false
         }
      }

      // syntax of while loop

      int i=1;     // initialisation
      while(i<=3){  // our first or outer while loop
        cout<<"i is now = "<<i<<endl;
        int j=1;    
        while(j<=5){ // second or inner loop
            cout<<"j is = "<<i<<endl;
            j++; // j shold be increment in second or inner loop
        }
        i++;  // i will be increment after second or inner loop conditon will false
      }

      int a=1;
      do{       // our first or outer loop
        cout<<"a is now = "<<a<<endl; // here our statment will fist exicute
        int b=1;
        do{     // our second or inner loop
            cout<<"b is = "<<b<<endl; 
            b++;
        }while(b<=5); // inner loop condition will check here 
        a++;
      }while(a<=3);  // and outer loop conditon will check after our inner loop condition


      // also its notable that our nested for,while and do-while loop will also be applicalbe 
      // for float and charecter value
 


 // this program is for reversing a number like if user input 4325 then it will 
 // reverse into 5234;

    int num;
    cin>>num;
    int rnum=0;
    int rem;

    while(num!=0){
        rem=num%10;   
        rnum=rnum*10+rem;
        num=num/10;
    }

    cout<<rnum<<endl;


// this program is for finding prime number between 1 to n;
// like if user input 10 then our program will print 1,2,3,5,7

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        bool check=true;
        for(int j=2; j<i; j++){
            if(i%j==0){
               check=false;
            }
        }

        if(check==true){
            cout<<i<<" ";
        }
    }

// this program are for printing pattern

 // this program will print a pattern like this where row and col can be change  
         /* 
           ****
           ****
           ****
         */

    int row,col;
    cin>>row>>col;
    
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout<<"a";
        }cout<<endl;
    }

 // this program is for printing this pattern 
      /*
          *
          **
          ***
          ****
          *****
      */

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }cout<<endl;
    }

// this program is for printing this pattern 
         /*
           *****
           ****
           ***
           **
           *
         */

    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }cout<<endl;
    }

    return 0;
}
