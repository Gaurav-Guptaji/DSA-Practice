
// hw q.2 can be solved in two ways:
// (i) we can use a function that can calculate the total no. of set bits in a given number and then add the set bits in user entered 'a' and 'b'.
// -someone already did that and posted it in the comments below so I am just going to post the alternative approach where we will calculate it without using function
// ---here is my code
// #include<iostream>
// using namespace std;


// int main(){

//     int a,b;
//     cout<<"enter two numbers:"<<endl;
//     cin>>a>>b;

//     int set =0;

//     while(a!=0 || b!=0 ){
        
//         if(a&1==1 || b&1==1)
//         {
//             if(a&1==1 && b&1==1){
//                 set=set+1;
//             }
//             set=set+1;
           
//         }
//          a=a>>1;
//          b=b>>1;
       
//     }
//     cout<<"the total no of set bits are:"<<set;
// }






// @vaishnaviupadhyay2239
// 1 year ago
// HOMEWORK QUESTIONS:

// 1) HOW WILL YOU EXIT IF YOU PUT SWITCH CASE INSIDE INFINITE LOOP AND WHEN YOU CAN'T USE SWITCH STATEMENT?

// CODE:
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {

// //this while condition will always be true if exit( is not put.)
// while(1)
// {
//   cout<<"HOW YOU DOIN????"<<endl;

//   int num=1;
//   switch(num)
//   {
//     case 1: cout<<"I'M FINE"<<endl;
//     break;
//   }
//   exit(0);
// }

// }

// ANSWER: BY PUTTING EXIT(0) , WE CAN EXIT OUT OF INFINITE LOOP.

// 2) WHY WE CAN'T USE CONTINUE STATEMENT IN CASE OF SWITCH CASE?

// ANS: CONTINUE CAN'T BE USED IN CASE OF SWITCH CASE BECAUSE AS THE CASE CONSTANT MATCHES WITH THE USERS INPUT THE FLOW WILL COME DOWN AND TRY TO EXECUTE BUT BECAUSE OF CONTINUE IT WILL SKIP THAT PART AND ITERATION WILL GO ON AND ON. THAT'S WHY WE USE BREAK , TO STOP  AT THE POINT ONCE WE EXUCUTE OUR PART.

// 3)
// CODE:

// #include <iostream>
// using namespace std;

// int main()
// {
//   int amount;
//   cout<<"Enter the amount"<<endl;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
                  
//            }
// }

// 4)
// CODE:

// #include <iostream>
// using namespace std;

// int AP(int n)
// {
//   int ap=3*n+7;
//   return ap;
// }

// int main()
// {
//   int n;
//   cin>>n;
//   int ans=AP(n);
//   cout<<"Answer is="<<ans<<endl;

//   return 0;
// } 

// 5)
// CODE:
// #include <iostream>
// using namespace std;

// int setBitsB(int b)
// {
//   int count = 0;
//   while(b!=0)
//   {
//     if(b&1)
//     {
//       count++;
//     }
//     b=b>>1;
//   }
//   return count; 
// }


// int setBitsA(int a)
// {
//   int count = 0;
//   while(a!=0)
//   {
//     if(a&1)
//     {
//       count++;
//     }
//     a=a>>1;
//   }
//   return count; 
// }

// int main()
// {
//   int a,b;
//   cin>>a>>b;
//   int ans1=setBitsA(a);
//   int ans2=setBitsB(b);
//   cout<<"Set bits of A="<<ans1<<endl;
//   cout<<"Set bits of B="<<ans2<<endl;
//   int ans=ans1+ans2;

//   cout<<"Total set bits of A and B are ="<<ans<<endl;

//   return 0;
// }

// 6) 
// CODE:
// #include<iostream>
// using namespace std;

// int fibonacci(int n)
// {
//     int a = 0;
//     int b = 1;
//     for (int i = 2; i < n; i++)
//     {
//         int next = a + b;
//         a = b;
//         b = next;
//     } 
//       return b;
// }

// int main()
// {
//     int n;
//     cin >> n;
    
//     cout << "The " <<n<<"th term of the series is = "<< fibonacci(n) << endl;

//     return 0;
// }

// OUTPUT QUESTIONS:
// 1)  10
// 2)  15
// 3)  196