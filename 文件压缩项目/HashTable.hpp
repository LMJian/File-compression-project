#pragma once
#include"Common.hpp"

class HashTable {
public:
	HashTable(USH size);
	~HashTable();
	void Insert(USH& matchhead, UCH ch, USH pos, USH& hashAddr);
	void hashFunc(USH& hashAddr, UCH ch);
	USH GetNext(USH matchHead);
	void Update();
private:
	USH H_SHIFT();
private:
	USH *prev_;
	USH *head_;
};