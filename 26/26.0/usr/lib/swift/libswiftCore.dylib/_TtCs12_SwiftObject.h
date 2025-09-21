@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alloc;
+ (id)autorelease;
+ (BOOL)_isDeallocating;
+ (id)debugDescription;
+ (BOOL)_tryRetain;
+ (BOOL)retainWeakReference;
+ (BOOL)allowsWeakReference;
+ (id)retain;
+ (void)initialize;
+ (unsigned long long)retainCount;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (BOOL)conformsToProtocol:(id)a0;
+ (id)description;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (void)release;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (Class)class;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (Class)superclass;

- (unsigned long long)_cfTypeID;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)_tryRetain;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)isProxy;
- (BOOL)isNSDictionary__;
- (unsigned long long)retainCount;
- (struct _NSZone { } *)zone;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (oneway void)release;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isNSCFConstantString__;
- (BOOL)isEqual:(id)a0;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (Class)class;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (id)self;
- (BOOL)isNSDate__;
- (BOOL)isNSNumber__;
- (BOOL)isNSString__;
- (id)_copyDescription;
- (BOOL)isNSArray__;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSSet__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;

@end
