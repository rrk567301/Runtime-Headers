@class NSString, NSObject;

@interface WKObject : NSProxy <WKObject> {
    BOOL _hasInitializedTarget;
    struct RetainPtr<NSObject> { NSObject *m_ptr; } _target;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isNSDictionary__;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isNSNumber__;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)isNSString__;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id).cxx_construct;
- (Class)classForCoder;
- (BOOL)isNSCFConstantString__;
- (Class)classForKeyedArchiver;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (BOOL)isNSDate__;
- (BOOL)isNSArray__;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSSet__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;
- (id)_web_createTarget;

@end
