#include <iostream>
using namespace std;

const int SIZE = 100;
char stack[SIZE];
int top = -1;

void push(char ch) {
    if (top >= SIZE - 1)
        cout << "Stack Overflow\n";
    else
        stack[++top] = ch;
}

char pop() {
    if (top == -1)
        return '\0'; // Stack underflow
    else
        return stack[top--];
}

char peek() {
    if (top == -1)
        return '\0';
    else
        return stack[top];
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

void infixToPostfix(const string& infix) {
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if (ch >= '0' && ch <= '9') {
            postfix += ch;
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (peek() != '(' && top != -1) {
                postfix += pop();
            }
            pop(); // Remove '('
        }
        else if (isOperator(ch)) {
            while (precedence(peek()) >= precedence(ch)) {
                postfix += pop();
            }
            push(ch);
        }
    }

    while (top != -1) {
        postfix += pop();
    }

    cout << "Postfix Expression: " << postfix << endl;
}

int main() {
    string infix;
    cout << "Enter infix expression (single-digit operands only): ";
    cin >> infix;

    infixToPostfix(infix);

    return 0;
}
