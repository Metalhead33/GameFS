#ifndef MACROFUNCTIONS_HPP
#define MACROFUNCTIONS_HPP
#include <exception>
#include <memory>

// From util.h - Written by Daniël Sonck
#define DEFINE_PTR(a) typedef a *p##a; \
   typedef std::shared_ptr< a > s##a; \
   typedef std::weak_ptr< a > w##a;

#define DEFINE_PTR2(s,a) typedef s::a *p##a; \
   typedef std::shared_ptr< s::a > s##a; \
   typedef std::weak_ptr< s::a > w##a;

#define DEFINE_CLASS(klass) class klass; DEFINE_PTR(klass)

//End of former util.h

// Some useful defines
#define EXCEPTION(A,B) struct A : public std::exception \
{ \
  const char * what () const throw () \
  { \
	return B; \
  } \
};

#endif // MACROFUNCTIONS_HPP
