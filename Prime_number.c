#include<stdio.h>  
int main(){    
int n,i,m=0,flag=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Number is prime");     
return 0;  
 }    

#inlcude<bits/stdc++.h>
int main(){
 int n; cin >> n;
 for(int i=2; i*i <=n; i++){
  if(n%i==0){
   cout << "Not a Prime";
   break;
  }
 }
 cout << "Prime No.";
}
