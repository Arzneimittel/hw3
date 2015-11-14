#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void f_rand(double*x,const int N){
  for(int i=0; i<N; i++){
	x[i] = rand() / double (RAND_MAX); 
        //cout  << x[i] << endl;
  }
  
}

void f_stat(double*x, double& mean, double& var,const int N){
      mean=0;
      var=0;
      for(int i=0; i<N; i++){
	mean =  mean + x[i];
	
      }
        mean = mean / N ; 
      for(int i=0; i<N; i++){
	var = var +  pow((x[i] - mean),2);
	
      }
        var = var / N ;
}

int main(){
   srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;
   
   f_rand(p,N);
   f_stat(p,mean,var,N);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
