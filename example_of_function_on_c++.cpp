
#include<iostream>
#include<math.h>
using namespace std;
//addition using function

/*
    int add(int a, int b){
        int sum = a+b;
        return sum;


    }
    int main(){
        int n1,n2;
        cin>>n1>>n2;
        cout<<add(n1,n2);*/
        /*

        int fact(int n){
        int fact = 1;
        for(int i=1; i<=n; i++){

            fact=fact*i;

        }
        return fact;
        }
        int main(){
        int a;
        cin>>a;
        cout<<fact(a);
        }
*/


// sum of digit using function


/*
int sumdigit(int a){
     int last, sum=0;

     while(a>0){
        last = a% 10;
        sum = sum + last;
        a=a/10;

     }
     return sum;}

     int main(){

     int n ,m;
     cin>>n;
     cout<<sumdigit(n)<<endl;
     cin>>m;
     cout<<sumdigit(m);
     }

*/
//check prime using function
/*
bool isprime(int n){
for(int i =2 ; i<= sqrt(n);i++){
    if(n%i==0){
        return false;
    }
}


return true;
}

int main(){

int a,b;
cin>>a>>b;


for(int i=a; i<=b; i++){
  if(isprime(i)){
    cout<<i<<endl;


  }

}


}
*/
//divide using function
/*

int divide(int n , int m){
int c=n/m;

return c;



}
int main(){
int a,b;
cin>>a>>b;
cout<<divide(a,b);



}*/
//fibbonaci using funtion
/*
void feb(int n){
  int t1=0;
  int t2=1;
  int next;

  for(int i=1;i<=n;i++){
    cout<<t1<<endl;
    next=t1+t2;
    t1=t2;
    t2=next;
  }

  return;

}
int main(){

 int n;
 cin>>n;

    feb(n);




}

*/













