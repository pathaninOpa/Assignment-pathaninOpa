#include <iostream>
using namespace std;
//1. Creating make file
//2. Swap the value in the array using pointers** to help
//3. Take input from argv


int main(int argc, char **argv){
 int i,n,*a;
			n=argc-1;
 		     a=new int[n];
			for(i=0;i<n;i++) {
			    a[i]=atoi(argv[i]);
		       cout<< "a[" << i << "]=" <<a[i]<<endl;
		}

    int*p=a;
    int*pb;
	
     // Using p within your program 
  for(i=0;i<n;i++) {
 		   cout<<p[i]<<" "; //p is the location where p points to
 //     p++;  
 }

 delete [] a;  
}

  
//}

