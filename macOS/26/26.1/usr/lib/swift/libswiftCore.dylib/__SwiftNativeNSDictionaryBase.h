@interface __SwiftNativeNSDictionaryBase : NSDictionary {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)_tryRetain;
- (BOOL)allowsWeakReference;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)autorelease;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;

@end
