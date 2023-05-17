#include <iostream>
using namespace std;
//1. Creating make file
//2. Swap the value in the array using pointers** to help
//3. Take input from argv


int main(int argc, char **argv){
 int i,n,*a, temp, *pa;
			n=argc-1;
 		     a=new int[n];
			for(i=0;i<n;i++) {
			    a[i]=atoi(argv[i+1]);
		       cout<< "a[" << i << "]=" <<a[i]<<endl;
		}

    int*p=a;
    int*pb;
	
     // Using p within your program 
  for(i=0;i<n;i++) {
 		   cout<<p[i]<<" "; //p is the location where p points to
 //     p++;  
 }
  cout<<endl;
  
   pa = a;
    pb = a + n - 1;

    while (pa < pb) {
        int temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb--;
    }

   for (int i = 0; i < n; i++) {
        cout <<"a["<< i << "]=" << a[i] << endl;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;

    return 0; 
}

  
//}
