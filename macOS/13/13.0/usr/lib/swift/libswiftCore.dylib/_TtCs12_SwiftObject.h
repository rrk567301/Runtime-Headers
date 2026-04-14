@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retain;
+ (void)release;
+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)autorelease;
+ (BOOL)_tryRetain;
+ (BOOL)_isDeallocating;
+ (unsigned long long)retainCount;
+ (BOOL)allowsWeakReference;
+ (BOOL)retainWeakReference;
+ (Class)class;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (Class)superclass;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (BOOL)conformsToProtocol:(id)a0;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (id)description;
+ (id)debugDescription;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (id)self;
- (Class)class;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (void)_noteAssociatedObjects;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isProxy;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (struct _NSZone { } *)zone;
- (void)_setWeaklyReferenced;
- (BOOL)isNSString__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSNumber__;
- (BOOL)isNSDate__;
- (unsigned long long)_cfTypeID;
- (BOOL)isNSArray__;
- (BOOL)isNSDictionary__;
- (id)_copyDescription;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSSet__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;

@end
