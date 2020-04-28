#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int age;
	cout<<"Elections are around! \n Let's check whether you are eligible to stand in line and make a DIFFERENCE!! \n Please enter your age!";
	cin>>age;
	//age=int(a);
	
		if(age>=18){
				cout<<"\n \n Congratulations! \n You are eligible to cast your vote.\n";
			} 
		
		if(age<18){
		    	cout<<"\n \n Sorry to inform you, but you are still \t"<<(18-age)<<"\t years away from making your voice heard!";	

				
	}
	return 0;
}
