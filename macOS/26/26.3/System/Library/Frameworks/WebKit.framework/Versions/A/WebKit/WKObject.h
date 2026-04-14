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

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (Class)classForKeyedArchiver;
- (BOOL)isKindOfClass:(Class)a0;
- (Class)classForCoder;
- (BOOL)isNSDictionary__;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNSCFConstantString__;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;
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
