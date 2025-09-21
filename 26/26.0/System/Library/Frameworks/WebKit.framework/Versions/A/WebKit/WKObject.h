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

- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;
- (Class)classForCoder;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (Class)classForKeyedArchiver;
- (BOOL)isNSDictionary__;
- (BOOL)conformsToProtocol:(id)a0;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isNSCFConstantString__;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isNSDate__;
- (BOOL)isNSNumber__;
- (BOOL)isNSString__;
- (BOOL)isNSArray__;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSSet__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;
- (id)_web_createTarget;

@end
