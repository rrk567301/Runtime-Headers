@class NSString;

@interface WKObject : NSProxy <WKObject> {
    BOOL _hasInitializedTarget;
    struct RetainPtr<NSObject> { void *m_ptr; } _target;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isNSString__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSNumber__;
- (BOOL)isNSDate__;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (BOOL)isNSArray__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSSet__;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;
- (id).cxx_construct;
- (Class)classForKeyedArchiver;
- (id)_web_createTarget;

@end
