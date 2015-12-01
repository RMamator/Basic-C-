#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void reverse(char *str, int len){
	char *end;
	char *begin = str;
	end = begin + len-1;
	while(begin<end){
		char save = *begin;
		*begin = *end;
		*end = save;
		begin++;
		end--;
	}
	begin = str; 
	cout<<"Reverse: "<<begin;
}

int main(){
	char str[] = "cobra";
	char *pointerstr;
	pointerstr = str;
	int len = sizeof(str)-1;
	cout<<"String is: "<<str<<" Size: "<<len;
	cout<<"\n";
	reverse(pointerstr, len);
//	reverse(str.begin(),str.end());
//	cout<<str;
	return 0;
}