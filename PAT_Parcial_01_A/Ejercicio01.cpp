#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head, char value)
{
    Node<char>* actual= head;
    Node<char>* prev= nullptr;
    while (actual != nullptr) {
        if (actual->value == value) {
            if (prev == nullptr) {
				head = actual->next;
                delete actual;
                actual = head;
            }
            else {
				prev->next = actual->next;
                delete actual;
                actual = prev->next;
			}
        }
        else {
            prev = actual;
            actual = actual->next;
        }
    }
    return head;

}
