#include <iostream>
#include <stdlib.h>
using namespace std;


int concatenate ( int dizi1[],int dizi2[]){
	
	cout << "large array boyut gir"<<endl;
	
	int size3;
	
	cin>>size3;
	
	int *c=(int*)malloc(sizeof(int)*size3);
	int t=(sizeof(dizi1)/sizeof(int));
	int y=(sizeof(dizi2)/sizeof(int));
	if(sizeof (dizi1) + sizeof (dizi2) != sizeof c){
		
		
		
		return -1;
	}
	
    if (sizeof(dizi1)>=sizeof(dizi2)) {
     	
     	for ( int k=0; k<(sizeof(dizi1)/sizeof(int)) ; k++){
     		
     		c[k]=dizi1[k];
     		
     	   for (; t<size3; t++){
     	   	 
     	   	c[t]=dizi2[t];
     	   	
     	   	
     	   	
			} 	
     		
     		
     		
		 }
		 return 0;
}
     if (sizeof (dizi2)	> sizeof (dizi1)){
     	
		 for ( int l=0; l<(sizeof(dizi2)/sizeof(int)) ; l++){
     		
     		c[l]=dizi2[l];
     		
     }
     	        for (; t<size3; t++){
     	   	 
     	   	    c[t]=dizi1[t];
     	
     	
     	
	 }
     	              return 0;
     	   
	 }	
	
	  
	  	
	  	 
	  	
	  	for (int w=0; w<size3; w++){
	  		
	  		cout<<c[w];
	  		
	  		
		  }
	
	

}
int main(){
	cout << "dizinin boyutunu girin"<<endl;	
	int size;
	cin>>size;
	 
    int *a=(int*)malloc(sizeof(int)*size);
    
    cout <<" dizi elemanlarini girin" << endl;
	 
	for (int i=0; i<size ;i++){
		
	
	cin>>a[i];
		}
	 
	 for ( int j =0 ; j<size ; j++){
	 	
	 	
	 	  cout << a[j];
	 	  
	 	
	 }
	
	cout << '\n'<<"dizinin boyutunu girin"<<endl;	
	int size2;
	cin>>size2;
	 
    int *b=(int*)malloc(sizeof(int)*size2);
    
    cout <<" dizi elemanlarini girin" << endl;
	 
	for (int i=0; i<size2 ;i++){
		
	
	cin>>b[i];
		}
	 
	 for ( int j =0 ; j<size2 ; j++){
	 	
	 	
	 	  cout << b[j]<<" ";
	 	  
	 	
	 }
	
	
	
	concatenate(a,b);
	
	
	return 0;
	
}
