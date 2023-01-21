#include<iostream>
using namespace std;
class animal{
	public:
		
        virtual void fun(){
		cout<<"hlo"<<endl;} 
};
class dog: public animal{
	public:
	  virtual void fun(){
		cout<<"love"<<endl;
	}
};
int main(){

	animal * a= new dog;
	a->fun();


	return 0;
}