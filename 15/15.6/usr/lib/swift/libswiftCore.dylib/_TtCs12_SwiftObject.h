@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_isDeallocating;
+ (void)release;
+ (char)_tryRetain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)allowsWeakReference;
+ (id)autorelease;
+ (Class)class;
+ (char)conformsToProtocol:(id)a0;
+ (id)debugDescription;
+ (id)description;
+ (void)initialize;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (char)instancesRespondToSelector:(SEL)a0;
+ (char)isMemberOfClass:(Class)a0;
+ (char)isSubclassOfClass:(Class)a0;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (char)respondsToSelector:(SEL)a0;
+ (id)retain;
+ (unsigned long long)retainCount;
+ (char)retainWeakReference;
+ (Class)superclass;

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)isProxy;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (char)_tryRetain;
- (char)allowsWeakReference;
- (id)autorelease;
- (Class)class;
- (char)conformsToProtocol:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (char)isMemberOfClass:(Class)a0;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (char)respondsToSelector:(SEL)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (id)self;
- (struct _NSZone { } *)zone;
- (char)isNSCFConstantString__;
- (char)isNSDate__;
- (char)isNSNumber__;
- (char)isNSString__;
- (unsigned long long)_cfTypeID;
- (id)_copyDescription;
- (char)isNSArray__;
- (char)isNSData__;
- (char)isNSDictionary__;
- (char)isNSObject__;
- (char)isNSOrderedSet__;
- (char)isNSSet__;
- (char)isNSTimeZone__;
- (char)isNSValue__;

@end
