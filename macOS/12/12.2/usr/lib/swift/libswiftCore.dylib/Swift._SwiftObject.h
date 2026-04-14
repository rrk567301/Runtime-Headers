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
+ (unsigned long long)retainCount;
+ (id)autorelease;
+ (BOOL)_tryRetain;
+ (BOOL)_isDeallocating;
+ (Class)class;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (BOOL)conformsToProtocol:(id)a0;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (Class)superclass;
+ (id)description;
+ (id)debugDescription;
+ (BOOL)retainWeakReference;
+ (BOOL)allowsWeakReference;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)alloc;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (void /* function */ *)methodForSelector:(SEL)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (Class)class;
- (id)self;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (BOOL)isProxy;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (struct _NSZone { } *)zone;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isNSDate__;
- (BOOL)isNSString__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSNumber__;
- (void)_noteAssociatedObjects;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)_setWeaklyReferenced;
- (unsigned long long)_cfTypeID;
- (id)_copyDescription;
- (BOOL)isNSArray__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSSet__;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;

@end
