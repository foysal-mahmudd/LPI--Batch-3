
#include<bits/stdc++.h>

using namespace std;

int main(){

       
       // this program is for detarmining student grade according to his marks
       int grade;
       cin>>grade;

       grade/=10; // we can also write it as grade=grade/10;

        // Output the grade using a switch statement
        switch (grade) {
            case 10: // thie case key word will check our case value is true or not
            case  9:
            case  8:
                cout << "Grade: A+" <<endl;
                break; // this will break our switch statement
            case 7:
                cout << "Grade: A" <<endl; //
                break;
            case 6:
                cout << "Grade: A-" <<endl;
                break;
            case 5:
                cout << "Grade: B" <<endl;
                break;
            case 4:
                cout << "Grade: C" <<endl;
                break;
            case 3:
                cout << "Grade: D" <<endl;
            default: // if any case is not true then this statement will exicute
                cout << "Fail" <<endl;
                break;
        }



    // this programe is for checking week day according to user input charecter
    char day; // 
    cin>>day;

    switch(day){ // we can also use chatecter in switch statement
      
      case 's' : cout<<"saturday"<<endl;
               break;
      case 'S' : cout<<"sunday"<<endl;
               break;
      case 'm' : cout<<"monday"<<endl;
               break;
      case 't' : cout<<"tuesday"<<endl;
               break;
      case 'w' : cout<<"wednesdey"<<endl;
               break;
      case 'T' : cout<<"thusday"<<endl;
               break;
      case 'f' : cout<<"friday"<<endl;
               break;
      default :cout<<"you entered a invalid day!"<<endl;
    }



    // this program is a simple calculator by using if-else statement

    cout<<"                          -----------welcome------------        "<<endl;

    float num1,num2;
    cin>>num1;

    char oper;
    cin>>oper;
    cin>>num2;

    if(oper=='+'){
      float ans=num1+num2;
      cout<<ans<<endl;
    }
    else if(oper=='-'){
      float ans=num1-num2;
      cout<<ans<<endl;
    }
    else if(oper=='*'){
      float ans=num1*num2;
      cout<<ans<<endl;
    }
    else if(oper=='/'){
      if(num2==0){
         cout<<"division can't be possible!"<<endl;
         return 0;
      } 
      float ans=num1/num2;
      cout<<ans<<endl;

    }
    else if(oper=='%'){
      int ans=(int)num1%(int)num2; // we converted float value in int value
      cout<<"your ans is = "<<ans<<endl;
    }
    else{
      cout<<"Sorry, you pressed an invalid operator! "<<endl;
      cout<<"you should press only +,-,*,/,%"<<endl;
    }
    


    // this programe is for checking leap year
    int year;
    cin>>year;

    if((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0 ) ){
      cout<<"leap year"<<endl;
    }
    else{
      cout<<"not leap year"<<endl;
    }


    return 0;
}
