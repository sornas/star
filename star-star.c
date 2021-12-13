#include<stdio.h>
#define p printf

                    int
                   main()
                 {int i,j,x;
                int a[]={9,1,
               8,3,7,5,6,7,0,19
             ,2,15,4,12 };int b[]
            ={4,5,1,5,3,4,5,4,2,3,9
,3};for(i=0;i< sizeof(a)/sizeof(a[0]);i+= 2){for
  (x=0;x< a[i];++x){p(" ");}for(x=0;x<a[i+1];
    ++x){p("*");}p("\n");}for(i=0;i<sizeof
     (b)/sizeof(b[0]);i+=4){for(x=0;x<b[
       i];++x){p(" ")    ;}for(x=0;x<b[i
      +1];++x){p(           "*");}for(x=0;
     x<b[i+2];                  ++x){p(" "
    );}for(x                     =0;x<b[i+
   3];++x){                        p("*");
  }p(""""                           "\n");}}
