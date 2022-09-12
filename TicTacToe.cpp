#include<iostream>
using namespace std;
char nums[3][3]={'1','2','3','4','5','6','7','8','9'};
int r=3,c=3;
char token='X';
bool flag=true;
string n2;
char res;
int digit;
void fun4();
class TicTacToe{
public:
void fun1(){
	if(token=='X'){
		cout<<"COMPUTER: "<<"enter a digit\n";
		cin>>digit;
		fun4();
	}
	else if(token=='O'){
		cout<<n2<<": enter a digit\n";
		cin>>digit;
		fun4();
	}
}
void fun4(){

	if(digit==1){
		r=0;c=0;
	}
	else if(digit==2){
		r=0;c=1;
	}
	else if(digit==3){
		r=0;c=2;
	}
	else if(digit==4){
		r=1;c=0;
	}
	else if(digit==5){
		r=1;c=1;
	}
	else if(digit==6){
		r=1;c=2;
	}
	else if(digit==7){
		r=2;c=0;
	}
	else if(digit==8){
		r=2;c=1;
	}
	else{
		r=2;c=2;
	}
	
if(token=='X' && nums[r][c]!='X' && nums[r][c]!='O'){
	nums[r][c]='X';
	token='O';
}
else if(token=='O' && nums[r][c]!='X' && nums[r][c]!='O'){
	nums[r][c]='O';
	token='X';
}
else{
	res='D';
	flag=false;
}
}

void fun2(){
	int cX=0,cO=0;
	for(int i=0;i<3;i++){
		if(nums[i][0]=='X' && nums[i][1]=='X' && nums[i][2]=='X'){
			res = 'C';
			flag=false;
			break;
		}
		else if(nums[i][0]=='O' && nums[i][1]=='O' && nums[i][2]=='O'){
			res = 'O';
			flag=false;
			break;
		}		
	}
	for(int j=0;j<3;j++){
		if(nums[0][j]=='X' && nums[1][j]=='X' && nums[2][j]=='X'){
			res = 'C';
			flag=false;
			break;
		}
		else if(nums[0][j]=='O' && nums[1][j]=='O' && nums[2][j]=='O'){
			res = 'O';
			flag=false;
			break;
		}		
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				if(nums[i][j]=='X'){
					cX++;
				}
				else if(nums[i][j]=='O'){
					cO++;
				}
			}
			
		}
	}
	if(cX==3){
		res='C';
		flag=false;
	}
	else if(cO==3){
		res='O';
		flag=false;
	}
cout<<res;	
}
void fun3(){
	cout<<"    |    |  \n";
	cout<< nums[0][0]<<"   | "<<nums[0][1]<<  "  |  "<<nums[0][2]<<"     \n";
	cout<<"____|____|_____\n";
	cout<<"    |    |  \n";
	cout<< nums[1][0]<<"   | "<<nums[1][1]<<  "  |  "<<nums[1][2]<<"     \n";
	cout<<"____|____|_____\n";
	cout<<"    |    |  \n";
	cout<< nums[2][0]<<"   | "<<nums[2][1]<<  "  |  "<<nums[2][2]<<"     \n";
	cout<<"    |    |  \n";
}
};
int main(){
	TicTacToe obj;
	string n1="COMPUTER";
	cout<<"enter your name\n";
	cin>>n2;
	while(flag){
		if(res=='D')
			break;
	obj.fun3();
	obj.fun1();
	obj.fun2();
}
obj.fun3();
if(res=='C'){
	cout<<"COMPUTER WON";
}
else if(res=='D'){
	cout<<"DRAW";
}
else{
	cout<<n2<<" WON";
}

}
