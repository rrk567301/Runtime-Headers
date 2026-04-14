@interface __SwiftNativeNSStringBase : NSObject {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (id)initWithCoder:(id)a0;

@end
