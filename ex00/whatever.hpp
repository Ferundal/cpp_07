#ifndef _whatever_hpp_
#define _whatever_hpp_

template <typename Z>
void swap (Z &a, Z &b) {
	Z c;
	c = a;
	a = b;
	b = c;
}

template <typename M>
M& min (M &first, M &second) {
	if (first < second)
		return (first);
	return (second);
}

template <typename LolWhut>
LolWhut& max (LolWhut &first, LolWhut &second) {
	if (first > second)
		return (first);
	return (second);
}

#endif