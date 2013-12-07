#ifndef CIRCULARARRAY_H_INCLUDED
#define CIRCULARARRAY_H_INCLUDED

#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include "Base.h"

template <class T>
class CircularArray : public Base
{

public:
	CircularArray(const T);
	virtual ~CircularArray();
	virtual void add(const T*);
	virtual int getSize() const;
	virtual std::ostream& printOn(const std::ostream& os);
	virtual T& get(int) const;
	virtual T& peekFront() const;
	virtual T& peekLast() const;
	virtual void removeFront();
	virtual void clear();
protected:
private:
	T* array;
};

#endif
