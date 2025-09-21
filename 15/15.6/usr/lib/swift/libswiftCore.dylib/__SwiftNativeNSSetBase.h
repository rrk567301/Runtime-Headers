@interface __SwiftNativeNSSetBase : NSSet {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (char)_tryRetain;
- (char)allowsWeakReference;
- (id)autorelease;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (id)initWithCoder:(id)a0;

@end
