@class NSString, Protocol;
@protocol CRInvocationChainDelegate;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate>

@property (weak, nonatomic) id<CRInvocationChainDelegate> delegate;
@property (retain, nonatomic) Protocol *restrictingProtocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)conformsToProtocol:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (char)_selector:(SEL)a0 isPartOfProtocol:(id)a1;
- (char)_selectorIsPartOfRestrictingProtocol:(SEL)a0;
- (char)invocationChain:(id)a0 shouldForwardInvocation:(id)a1 toTarget:(id)a2;
- (char)isEligibleForSelector:(SEL)a0;

@end
