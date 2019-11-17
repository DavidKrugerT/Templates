#pragma once

#ifndef P_QUEUE_H
#define P_QUEUE_H

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

template <class T, typename Comp = std::less<>>
class p_queue
{
public:
	p_queue(int size = 0);
	T pop();
	void push(const T &arg);
	int size();
	bool empty();
	~p_queue();
private:
	std::vector<T> lista;

};

template<class T, typename Comp>
inline p_queue<T, Comp>::p_queue(int size)
{
}

template<class T, typename Comp>
T p_queue<T, Comp>::pop()
{
	T value = lista.front();

	lista.erase(lista.begin());
	return value;
}

template<class T, typename Comp>
void p_queue<T, Comp>::push(const T &arg)
{
	//Comp compare, vi går igenom listan tills e är mindre än arg då tar vi den postitionen och intestar int arg.
	Comp compare;
	auto pos = std::find_if(lista.begin(), lista.end(), [&](const T &e) {return compare(e, arg); });
	lista.insert(pos, arg);
}

template<class T, typename Comp>
int p_queue<T, Comp>::size()
{
	return lista.size();
}

template<class T, typename Comp>
bool p_queue<T, Comp>::empty()
{
	return lista.empty();
}

template<class T, typename Comp>
inline p_queue<T, Comp>::~p_queue()
{
}



#endif