#include<iostream>
#include<fstream>
using namespace std;

class Node
{
    public : 
    string nameTag; 
    string data;
    Node* next;

    Node(string d)
    {
        nameTag= d;
        next = NULL;
    }
};

class List
{
    
    public:
    Node* head;
    Node* curr; 
    List()
    {
        head = NULL;
    } 
    
    void addToHead(string nameTag)
    {
        Node *newNode = new Node(nameTag);
        if(head == NULL)
        head = newNode;
        else{
           newNode->next = head;
            head = newNode; 
        }
    }
    Node*  searchNode(string key)
    {
        Node *temp;
        temp = head;
        while(temp != NULL)
        {
            if(temp->nameTag == key)
            {
                return temp;
            }
            temp = temp->next;
        } 
        return NULL;
    }
    void setData(string tag,string data)
    {
        Node* temp = searchNode(tag);
        if(temp!=NULL)
        {
            temp->data = data;
        }
        else cout << " Node Not Found \n ";
    } 
    string getData(string nameTag)
    {
        return nameTag;
    }
};// end class 

























