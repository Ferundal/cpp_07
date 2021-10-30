#ifndef _iter_hpp_
#define _iter_hpp_
#include <cstddef>

template <typename LOH>
void iter(LOH* arr_addr, size_t len, void (*function)(LOH const & ))
{
	for (size_t i = 0; i < len; i++)
		function(arr_addr[i]);
}

#endif