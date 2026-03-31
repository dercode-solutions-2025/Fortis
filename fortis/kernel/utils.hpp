/*
Written in C++17 on 3-30-26
Adam Tillman

*/
#ifndef UTILS_HPP
#define UTILS_HPP
namespace utils {
int strcmp(const char *s1, const char *s2, int len) {
	unsigned char c1, c2;
	do {
		c1 = *s1++;
		c2 = *s2++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		if (c1 != c2)
			break;
	} while (--len);
	return (int)c1 - (int)c2;
}
}
#endif
