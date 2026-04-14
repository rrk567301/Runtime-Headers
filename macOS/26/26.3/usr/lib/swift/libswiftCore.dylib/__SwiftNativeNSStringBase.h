@interface __SwiftNativeNSStringBase : NSString {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)_tryRetain;
- (BOOL)retainWeakReference;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (oneway void)release;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;

@end
