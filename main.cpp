#include <iostream>
#include <string>

using namespace std;
#include <iostream>

using namespace std;
#define MAX 5
class stack{
private:
  int top;
  string friends[MAX];

public: stack(){
   top=-1;
   }
   void push(string friendName){
     if(top == MAX-1){
        cout<<"overflow"<<endl;
     } else{
      top +=1;
      friends[top]=friendName;
     }
   }
   int pop(){
    string friendName;
     if(top==-1){
        cout<<"underflow"<<endl;
     }else{
        top=top-1;
        friends[top]=friendName;
     }

   }
    /*int peek(){
      if(top==-1){
        cout<<"stack is empty"<<endl;
      }else{
       cout<<"my peek is:"<<friends[top]<<"\n\n";
      }
    }*/

void printstack(){
     for(int i=0; i<=top; i++){
        cout<<friends[i]<<endl;
     }
   }

};
int main()
{
    stack s;
    s.push("onesmus");
    s.push("ronald");
    s.push("phil");
    s.push("zaq");
    s.push("vicent");
    s.pop();
    //s.peek();
    s.printstack();


    return 0;
}
