#include <iostream>
#include <string>


class Stack
{
private:
	int values[20];
	int count = 0;
public:
	bool isEmpty()
	{
		return top == 0;
	}
	int top()
	{
		return values[20];
	}
	void pop()
	{

	}
	void push(int number)
	{
		count++;
	}
};

int main()
{
	Stack stack;
	stack.push(20);

	std::string input;
	std::cout << "Enter two numbers and an opperator" << std::endl;
	std::cin >> input;

	if (input == "+")
	{

	}
}