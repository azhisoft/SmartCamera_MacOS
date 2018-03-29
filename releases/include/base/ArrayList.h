#pragma once

#include "Object.h"


template <class T>
class ArrayList : public Object
{
public:
	virtual bool contains(const T& ptr) = 0;

	virtual int size() = 0;

	virtual T at(int index) const = 0;

	virtual void add(const T& ptr) = 0;

	virtual void remove(const T& ptr) = 0;
	virtual void removeAt(int index) = 0;
	virtual void removeAll() = 0;

};
