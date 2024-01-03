#ifndef ARAF_H_
#define ARAF_H_
#include<iostream>
using namespace std;
namespace araf
{
    template <typename T>
    struct Node{
        T data;
        Node* next;
        Node* previous;
    };

    template <typename T>
    class Araf
    {
    private:
        Node<T> *newNode;
        Node<T> *lastNode;
        Node<T> *record;

    public:
        Araf()
        {
            newNode = NULL;
            lastNode = NULL;
            record = NULL;
        }
        void add(T value) {
            newNode = new Node<T>;
            newNode->data = value;
            newNode->next = NULL;
            newNode->previous = NULL;
            if (record == NULL) {
                newNode->previous = NULL;
                record = newNode;
                lastNode = newNode;
            }
            else {
                newNode->previous = lastNode;
                lastNode->next = newNode;
                lastNode = newNode;
            }
        }
        void add(T value, T key, int direction)
        {
            Node<T> *current = record;
            while (current != NULL)
            {
                if (current->data == key)
                {
                    newNode = new Node<T>;
                    newNode->data = value;
                    if(direction == 1)
                    {
                        newNode->previous = current;
                        newNode->next = current->next;
                        if(current->next)
                        {
                            current->next = newNode;
                        }
                        else
                        {
                            newNode->next = NULL;
                            current->next = newNode;
                            lastNode = newNode;
                        }
                    }
                    else if(direction == 0)
                    {
                        newNode->next = current;
                        newNode->previous = current->previous;
                        if(current->previous)
                        {
                            current->previous->next = newNode;
                        }
                        else
                        {
                            newNode->previous = NULL;
                            record = newNode;
                        }
                        current->previous = newNode;

                    }
                    return;
                }
                current = current->next;
            }
            throw runtime_error("Error: Target value is not in the list");
        }
        bool search(T key) {
            Node<T> *current = record;
            while (current != NULL) {
                if (current->data == key) {
                    return true;
                }
                current = current->next;
            }
            return false;
        }
        void display() {
            Node<T> *current = record;
            while (current != NULL) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }

        int count() {
            int count = 0;
            Node<T> *current = record;
            while (current != NULL) {
                count++;
                current = current->next;
            }
            return count;
        }

        void remove(T value) {
            Node<T> *current = record;

            while (current != NULL && current->data != value) {
                current = current->next;
            }

            if (current != NULL) {
                if (current->previous != NULL) {
                    current->previous->next = current->next;
                } else {
                    record = current->next;
                }

                if (current->next != NULL) {
                    current->next->previous = current->previous;
                } else {
                    lastNode = current->previous;
                }
            }
        }

        class iterator
        {
        private:
            Node<T> *current;

        public:
            iterator(Node<T> *node) : current(node){}

            T operator*()
            {
                return current->data;
            }

            iterator operator++()
            {
                current = current->next;
                return *this;
            }

            iterator operator++(int)
            {
                current = current->next;
                return *this;
            }

            iterator operator--()
            {
                current = current->previous;
                return *this;
            }

            iterator operator--(int)
            {
                current = current->previous;
                return *this;
            }

            bool operator !=(iterator other)
            {
                return current != other.current;
            }
        };

        iterator begin()
        {
            return iterator(record);
        }

        iterator end()
        {
            return iterator(NULL);
        }

        iterator rbegin()
        {
            return iterator(lastNode);
        }

        iterator rend()
        {
            return iterator(NULL);
        }

        class const_iterator
        {
        private:
            const Node<T> *current;

        public:
            const_iterator(const Node<T> *node) : current(node) {}

            T operator*() const
            {
                return current->data;
            }

            const_iterator operator++()
            {
                current = current->next;
                return *this;
            }

            const_iterator operator++(int)
            {
                current = current->next;
                return *this;
            }

            const_iterator operator--()
            {
                current = current->previous;
                return *this;
            }

            const_iterator operator--(int)
            {
                current = current->previous;
                return *this;
            }

            bool operator!=(const const_iterator other) const
            {
                return current != other.current;
            }
        };

        const_iterator cbegin() const
        {
            return const_iterator(record);
        }

        const_iterator cend() const
        {
            return const_iterator(NULL);
        }

        const_iterator crbegin() const
        {
            return const_iterator(lastNode);
        }

        const_iterator crend() const
        {
            return const_iterator(NULL);
        }

    };

}
#endif













