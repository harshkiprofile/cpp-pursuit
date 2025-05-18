#include <iostream>
#define LOG(x) cout << x << endl;
using namespace std;

struct Node {
	int val;
	Node* next;
};

class LinkedList {
private:
	Node n1;
	Node* head;
	Node* tail;

public:
	LinkedList(int val) {
		n1.val = val;
		head = &n1;
		tail = &n1;
	}

	void append(int val) {
		Node* new_node = new Node;
		new_node->val = val;
		new_node->next = NULL;

		tail->next = new_node;
		tail = new_node;

	}

	void prepend(int val) {
		Node* new_node = new Node;
		new_node->val = val;
		new_node->next = head;
		head = new_node;
	}

	void insertAt(int ind, int val) {
		Node* new_node = new Node;
		new_node->val = val;
		Node* temp = head;
		for (int i = 0; i < ind-1;i++) {
			temp = temp->next;
		}
		Node* next = temp->next;
		temp->next = new_node;
		new_node->next = next;
	}

	int getValue(int ind) const {
		Node* temp = head;
		int i = 0;
		for (i;i < ind;i++) {
			temp = temp->next;
		}
		return temp->val;
	}

	void printll() {
		Node* temp = head;
		while (temp != NULL) {
			LOG((*temp).val);
			temp = (*temp).next;
		}
	}
};

int main() {
	LinkedList l1(1);
	l1.append(2);
	l1.append(3);
	l1.prepend(0);
	l1.insertAt(1, 10);
	l1.printll();
	LOG(l1.getValue(4));

}
