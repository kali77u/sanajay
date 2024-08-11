#include<iostream>
 using namespace std;
 int main()
 {
    int s1,s2,s3,s4,s5,total,avg,enrollno;
    char a='p';
   
    cout<<"enter enroll number: ";
    cin>>enrollno;
    cout<<"student name is SANJAY"<<endl;
    cout<<"student initial: ";
    cout<<a<<endl;
   
    cout<<"enter the s1 value :";
    cin>>s1;
    cout<<"enter the s2 value :";
    cin>>s2;
    cout<<"enter the s3 value :";
    cin>>s3;
    cout<<"enter the s4 value :";
    cin>>s4;
    cout<<"enter the s5 value :";
    cin>>s5;
   
    cout<<"s1 mark is :"<<s1<<endl;
    cout<<"s2 mark is :"<<s2<<endl;
    cout<<"s3 mark is :"<<s3<<endl;
    cout<<"s4 mark is :"<<s4<<endl;
    cout<<"s5 mark is :"<<s5<<endl;
   
    total=s1+s2+s3+s4+s5;
    avg=total/5;

    cout<<"total is: ";
    cout<<total<<endl;
    cout<<"avg is: ";
    cout<<avg<<endl;
   
   
}

