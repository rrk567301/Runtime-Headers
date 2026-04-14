@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)conformsToProtocol:(id)a0;
+ (id)retain;
+ (BOOL)_isDeallocating;
+ (BOOL)_tryRetain;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (id)debugDescription;
+ (unsigned long long)retainCount;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (id)autorelease;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (id)description;
+ (BOOL)allowsWeakReference;
+ (id)alloc;
+ (void)release;
+ (BOOL)retainWeakReference;
+ (Class)class;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (Class)superclass;

- (unsigned long long)_cfTypeID;
- (BOOL)conformsToProtocol:(id)a0;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNSDictionary__;
- (BOOL)isKindOfClass:(Class)a0;
- (unsigned long long)retainCount;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)autorelease;
- (BOOL)isNSCFConstantString__;
- (BOOL)isProxy;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (BOOL)allowsWeakReference;
- (struct _NSZone { } *)zone;
- (oneway void)release;
- (BOOL)retainWeakReference;
- (void)dealloc;
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
