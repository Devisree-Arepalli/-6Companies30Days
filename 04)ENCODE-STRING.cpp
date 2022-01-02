/*Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.(Modified version of question named Cute Monkeys)*/



string encode(string src)
{     
  //Your code here 
 // int x=src.length();
  string s="";
   int x=src.length();
 
     for(int i=0;i<x;i++)
     {
         s.push_back(src[i]);
         int count=1;
         while(i<x-1 && src[i]==src[i+1])
         {
             count++;
             i++;
         }
         char c=count+'0';
         s.push_back(c);
     }
 
 return s;
}     
