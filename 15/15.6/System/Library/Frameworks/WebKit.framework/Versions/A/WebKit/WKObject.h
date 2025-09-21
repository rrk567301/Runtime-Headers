@class NSString;

@interface WKObject : NSProxy <WKObject> {
    char _hasInitializedTarget;
    struct RetainPtr<NSObject> { void *m_ptr; } _target;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (char)isMemberOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (char)isNSCFConstantString__;
- (char)isNSDate__;
- (char)isNSNumber__;
- (char)isNSString__;
- (void).cxx_destruct;
- (Class)classForCoder;
- (char)isNSArray__;
- (char)isNSData__;
- (char)isNSDictionary__;
- (char)isNSObject__;
- (char)isNSOrderedSet__;
- (char)isNSSet__;
- (char)isNSTimeZone__;
- (char)isNSValue__;
- (id).cxx_construct;
- (Class)classForKeyedArchiver;
- (id)_web_createTarget;

@end
