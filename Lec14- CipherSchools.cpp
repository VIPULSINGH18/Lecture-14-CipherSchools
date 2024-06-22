



// using function to print my name ....




#include<iostream>
using namespace std;
void function()  // Declaring the function having no parameters ...
{
	cout<<"Hi My name is Vipul Singh";
	return ;  // null return because no parameter was given...
}

int main(){ 

	function();  // calling the above function ...
	return 0;
}






//writing function to print sum of two numbers...


#include<iostream>
using namespace std;
int sum_of_two_numbers( int a, int b){

	
	int sum;
	sum= a+b;
	cout<<"sum of 2 numbers is equal to:"<<sum;
	return 0;
}

int main(){
	
	sum_of_two_numbers(10,20);
	
	
	return 0;
	
	
}









