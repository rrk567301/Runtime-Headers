@interface __SwiftNativeNSArrayBase : NSArray {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (id)new;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)retainWeakReference;
- (BOOL)_tryRetain;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)retain;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;

@end
