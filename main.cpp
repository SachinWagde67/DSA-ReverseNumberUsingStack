#include <iostream>
#include <stack>
using namespace std;

int reverse(int num)
{
	stack<int> st;

	while(num != 0)
	{
		st.push(num % 10);
		num = num / 10;
	}

	int rev = 0;
	int i = 1;

	while(!st.empty())
	{
		rev = rev + (st.top() * i);
		st.pop();
		i *= 10;
	}
	
	return rev;
}

int main() 
{
  int num;
	
	cout<<"\nEnter a number to be reversed: "<<endl;
	cin>>num;

	cout<<"\nreversed number is: "<<endl;
	cout<<reverse(num)<<endl;

} 