#include <iostream>

using namespace std;
#define MAX 5
class stack{

public: stack(){
   top=-1;
   }
   void push(int val){
     if(top == MAX-1){
        cout<<"overflow"<<endl;
     } else{
      top +=1;
      arr[top]=val;
     }
   }
   int pop(){
     if(top==-1){
        cout<<"underflow"<<endl;
     }else{
        top=top-1;
         return arr[top];
     }

   }
    int peek(){
      if(top==-1){
        cout<<"stack is empty"<<endl;
      }else{
       cout<<"my peek is:"<<arr[top]<<"\n\n";
      }
    }

void printstack(){
     for(int i=0; i<=top; i++){
        cout<<arr[i]<<endl;
     }
   }
   private:
  int top;
  int arr[MAX];
};
int main()
{
    stack s;
    s.push(45);
    s.push(50);
    s.push(55);
    s.push(60);
    s.push(65);
    s.pop();
    s.peek();
    s.printstack();


    return 0;
}

