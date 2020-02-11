#include "solution.h"


SinglyLinkedList::SinglyLinkedList():head_(nullptr){}
  SinglyLinkedList::~SinglyLinkedList(){
    ListNode *p = head_;
    while (p != nullptr){
      ListNode *tmp = p -> next;
      delete p;
      p = tmp;
    }
  } 
  SinglyLinkedList::SinglyLinkedList(const std::vector<int> &inputs, int i){
	ListNode *node = new ListNode(i);
	if(i = -1){
		node->next = nullptr;
	}
	ListNode *p = this->GetBackPointer();
	if(i > inputs.size()){
		p->next = nullptr;
	}else
	p->next = new ListNode(i);
  }


bool SinglyLinkedList::empty(){
  return(nullptr == head_);
}

int SinglyLinkedList::size(){
  int ret = 0;
  for(ListNode *p = head_; p->next!=nullptr; p = p->next){
    ret++;
  }
  return ret+1;
}

ListNode* SinglyLinkedList::GetBackPointer(){
  if (this->empty()){
		cout << "empty list, error GetBackPointer";
		return nullptr;
	}
  ListNode *ret = head_;
  while(ret->next != nullptr){
    ret = ret -> next;
  }
  return ret;
}

void SinglyLinkedList::push_front(int i){
  ListNode *node = new ListNode(i);
  node->next = this->head_;
  this->head_ = node;
}
void SinglyLinkedList::pop_front(){
  if (this->empty()){
		cout << "empty list, error pop_front";
		return;
	}
  ListNode *p = this->head_;
  this->head_ = head_->next;
  delete p;
}

void SinglyLinkedList::push_back(int i){
  if (this->empty()){
		head_ = new ListNode(i);
	}
  ListNode *p = this->GetBackPointer();
	p->next = new ListNode(i);
}

void SinglyLinkedList::pop_back(){
	if (this->empty()){
		cout << "empty list, error pop_back";
		return;
	}
	ListNode *ret = head_;
	ListNode *p = ret->next;
	while (p != nullptr && p->next != nullptr){
		ret = ret->next;
		p = ret->next;
	}
	if (p == nullptr){
		delete head_;
		head_ = nullptr;
	}

	delete p;
	ret->next = nullptr;
}


int SinglyLinkedList::front(){
	if (this->empty()){
		cout << "empty list, error front";
		return -1;
	}
	return this->head_->val;
}

int SinglyLinkedList::back(){
	if (this->empty()){
		cout << "empty list, error back";
		return -1;
	}
	return this->GetBackPointer()->val;
}

void SinglyLinkedList::insert_after(ListNode* p, int i){
	ListNode* newNode = new ListNode(i);
  	ListNode *tmp = p -> next;
  	p -> next = newNode;
  	newNode -> next = tmp;
}

void SinglyLinkedList::erase(ListNode* p){
	if (this->empty()){
		cout << "empty list, error erase";
		return;
	}
	if (p == head_){
		ListNode *tmp = head_;
		head_ = head_->next;
		delete tmp;
		return;
	}
	ListNode *ret = head_;
	ListNode *tmp = ret->next;
	while (tmp != nullptr && tmp->next != nullptr){
		if (p == tmp)
			break;
		ret = ret->next;
		tmp = ret->next;
	}
	if (p == tmp){
		ret->next = tmp->next;
		delete p;
	}
}

void SinglyLinkedList::print(){
	
	if (this->empty()){
		cout << "Empty list: {}";
		return;
	}
	ListNode *tmp = head_;
	cout << "print: { ";
	while (tmp != nullptr){
		cout << tmp->val << " ";
		tmp = tmp->next;
	}
	cout << "}" << endl;
}

ListNode* SinglyLinkedList::GetIthPointer(int i){

	ListNode *ret = this->head_;
	while (i > 0 && ret != nullptr){
		ret = ret->next;
		i--;
	}ListNode *GetBackPointer();
	if (ret == nullptr){
		cout << "too big i" << endl;
		return nullptr;
	}
	return ret;
}











