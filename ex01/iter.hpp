#ifndef _Array_hpp_
#define _Array_hpp_
#include <cstddef>


template <typename DATA>
class ARRAY {
private:
	DATA *mem_ptr;
	size_t array_size;
public:
};
void iter(LOH* arr_addr, size_t len, void (*function)(LOH const & ))
{
	for (size_t i = 0; i < len; i++)
		function(arr_addr[i]);
}

#endif