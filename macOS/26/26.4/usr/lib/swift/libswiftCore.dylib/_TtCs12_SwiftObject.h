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
+ (BOOL)retainWeakReference;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (void)initialize;
+ (BOOL)_tryRetain;
+ (BOOL)allowsWeakReference;
+ (id)debugDescription;
+ (id)autorelease;
+ (BOOL)conformsToProtocol:(id)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (BOOL)_isDeallocating;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (id)retain;
+ (id)description;
+ (void)release;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (unsigned long long)retainCount;
+ (Class)class;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (Class)superclass;

- (struct _NSZone { } *)zone;
- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isProxy;
- (BOOL)_tryRetain;
- (BOOL)isNSDictionary__;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isNSNumber__;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNSString__;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)retain;
- (oneway void)release;
- (BOOL)isNSCFConstantString__;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (Class)class;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (id)self;
- (BOOL)isNSDate__;
- (id)_copyDescription;
- (BOOL)isNSArray__;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSSet__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;

@end
