@class NSString, _CATArbitratorRegistrationEntry;

@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy> {
    id mResource;
    _CATArbitratorRegistrationEntry *mRegistration;
}

@property (readonly, nonatomic) char isExclusive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithResource:(id)a0 registration:(id)a1 exclusive:(char)a2;

@end
