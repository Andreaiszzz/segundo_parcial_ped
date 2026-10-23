
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};

void ReverseList(Node*& head) {
    Node* current = head;
    Node* temp = nullptr;

    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        head = current;
        current = current->prev;
    }
}

void SwapAdjacentPairs(Node*& head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* first = head;

    while (first != nullptr && first->next != nullptr) {
        Node* second = first->next;
        Node* previous = first->prev;
        Node* nextPair = second->next;

        if (previous != nullptr) {
            previous->next = second;
        } else {
            head = second;
        }

        second->prev = previous;
        second->next = first;

        first->prev = second;
        first->next = nextPair;

        if (nextPair != nullptr) {
            nextPair->prev = first;
        }

        first = nextPair;
    }
}

void RemoveConsecutiveDuplicates(stack<int>& values) {
    if (values.empty()) {
        return;
    }

    stack<int> aux;

    int previous = values.top();
    aux.push(previous);
    values.pop();

    while (!values.empty()) {
        int current = values.top();

        if (current != previous) {
            aux.push(current);
            previous = current;
        }

        values.pop();
    }

    while (!aux.empty()) {
        values.push(aux.top());
        aux.pop();
    }
}


void SeparateRequests(
    queue<int>& requests,
    queue<int>& priority) {

    int size = requests.size();

    for (int i = 0; i < size; i++) {
        int current = requests.front();
        requests.pop();

        if (current % 3 == 0) {
            priority.push(current);
        } else {
            requests.push(current);
        }
    }
}

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 &&
              ((arr[j] % 2 != 0 && key % 2 == 0) ||
              ((arr[j] % 2 == key % 2) && arr[j] > key))) {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int FindLargestSmaller(
    const int values[],
    int n,
    int target) {

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (values[mid] < target) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}
int main() {

    cout << "Funciones del parcial listas." << endl;

    return 0;
}
