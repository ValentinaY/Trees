#ifndef __NODE__H__
#define __NODE__H__
#include <list>

template <class T>
class Node{
public:
	Node();		//Constructor
	Node(const T& val);		//Constructor
	~Node();		//Destructor

	//Getters and Setters for data.
	T getdata();	
	void setdata(T val);

	//Getters and Setters for sons
	Node<T>* getleft();
	Node<T>* getright();
	void setleft(Node<T>* nleft);
	void setright(Node<T>* nleft);

	//Subtree's height.
	int height();
	//Subtree's size.
	unsigned int size();

	Node<T>* findson(T data);
	bool isbalanced();
	//Insertions
	bool insertdata(T ndata);

	//void listinorder(list<T> datas);

	//Routes
	void preorder();
	void posorder();
	void inorder();	
protected:
	T data;
	Node<T>* left;
	Node<T>* right;
};

#include "Node.hxx"

#endif