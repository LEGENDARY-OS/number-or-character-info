#include<iostream>
using namespace std;

int main(){
	char l;
	cout<<"Enter a character: ";
	cin>>l;
	if (l>='A'&&l<='Z'){
		cout<<" Upper Case Letter";
		if (l=='A'||l=='E'||l=='I'||l=='O'||l=='U')
			cout<<" Vowel";
		else
			cout<<" Consonent";
	}
	else if (l>='a'&& l<='z'){
		cout<<" Lowwer case letter";
		if (l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
			cout<<" vowel";
		else
			cout<<", consonent";
	}

	else if (l>='0'||l<='9')
		cout<<" Digit";
	else
		cout<<" Special character";	
}
