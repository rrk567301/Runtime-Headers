@interface __SwiftNativeNSStringBase : NSString {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)retainWeakReference;
- (void)dealloc;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;

@end
