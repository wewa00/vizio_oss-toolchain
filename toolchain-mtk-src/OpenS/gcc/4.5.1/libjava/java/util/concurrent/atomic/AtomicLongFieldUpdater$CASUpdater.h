
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater__
#define __java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater__

#pragma interface

#include <java/util/concurrent/atomic/AtomicLongFieldUpdater.h>
extern "Java"
{
  namespace sun
  {
    namespace misc
    {
        class Unsafe;
    }
  }
}

class java::util::concurrent::atomic::AtomicLongFieldUpdater$CASUpdater : public ::java::util::concurrent::atomic::AtomicLongFieldUpdater
{

public: // actually package-private
  AtomicLongFieldUpdater$CASUpdater(::java::lang::Class *, ::java::lang::String *);
private:
  void fullCheck(::java::lang::Object *);
public:
  virtual jboolean compareAndSet(::java::lang::Object *, jlong, jlong);
  virtual jboolean weakCompareAndSet(::java::lang::Object *, jlong, jlong);
  virtual void set(::java::lang::Object *, jlong);
  virtual void lazySet(::java::lang::Object *, jlong);
  virtual jlong get(::java::lang::Object *);
private:
  void ensureProtectedAccess(::java::lang::Object *);
  static ::sun::misc::Unsafe * unsafe;
  jlong __attribute__((aligned(__alignof__( ::java::util::concurrent::atomic::AtomicLongFieldUpdater)))) offset;
  ::java::lang::Class * tclass;
  ::java::lang::Class * cclass;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater__