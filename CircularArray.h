#include <iostream>

template <class T>
class CircularArray<T> : public Base{

public:
	CircularArray(const T);
	virtual ~CircularArray();
	virtual void add(const T*);
	virtual int getSize() const;
	virtual ostream& printOn(const ostream& os);
	virtual T& get(int) const;
	virtual T& peekFront() const;
	virtual T& peekLast() const;
	virtual void removeFront();
	virtual void clear();
protected:
private:
	T* array;

};
