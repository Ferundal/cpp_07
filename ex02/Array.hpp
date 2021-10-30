#ifndef _Array_hpp_
#define _Array_hpp_
#include <cstddef>
#include <exception>


template <typename DATA>
class Array {
private:
	unsigned int array_size;
	DATA *mem_ptr;
public:
	Array() : array_size(0),  mem_ptr(NULL) {};
	Array(const Array& origin) : array_size(origin.array_size),
								mem_ptr(new DATA[array_size])  {
		for (unsigned int i = 0; i < array_size; i++) {
			mem_ptr[i] = origin.mem_ptr[i];
		}
	}
	Array &operator=(const Array& origin) {
		if (this == &origin)
			return (*this);
		if (mem_ptr != NULL)
			delete [] mem_ptr;
		mem_ptr = new DATA[origin.array_size];
		for (int i = 0; i < array_size; i++)
			mem_ptr[i] = origin.mem_ptr[i];
		return (*this);
	}

	~Array() {
		delete [] mem_ptr;
	}

	Array(unsigned  int new_size) : array_size(new_size), mem_ptr(new DATA[new_size]) {
	}

	DATA& operator[](unsigned int index) {
		if (index >= array_size)
			throw (ArrayUncorrectIndex());
		return mem_ptr[index];
	}

	const DATA& operator[](unsigned const int index) const {
		if (index >= array_size)
			throw (std::exception());
		return mem_ptr[index];
	}

	unsigned int size( void ) {
		return array_size;
	}

	class ArrayUncorrectIndex : public std::exception {
		const char * what() const throw() {
			return ("Check right index value!");
		}
	};
};


#endif