#include <iostream>
#include <stack>

bool contadorParentesis(std::string op)
{
	std::stack<char> temp;
	std::stack<char> temp2;
	int size = op.size();

	for (int i = 0; i < size; ++i) {
		if (op[i] == '(' || op[i] == '{' || op[i] == '[') {
			temp.push(op[i]);
		}
		else if (op[i] == ')' && temp.top() == '(' || op[i] == ']' && temp.top() == '[' || op[i] == '}' && temp.top() == '{') {
			temp.pop();
		}
		else {
			std::cout << "No esta balanceado\n";
			return false;
		}
	}
	std::cout << "Esta balanceado.\n";
	return true;
}


int main(int argc, char**argv) {
	contadorParentesis("{[{()}]}");
	system("Pause");
	return 0;
}