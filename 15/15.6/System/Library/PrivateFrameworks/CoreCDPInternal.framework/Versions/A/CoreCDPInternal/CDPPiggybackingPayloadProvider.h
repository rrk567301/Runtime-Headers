@class NSString, KCJoiningRequestAccountCircleDelegate, KCJoiningRequestCircleSession;

@interface CDPPiggybackingPayloadProvider : NSObject <CDPKeychainCircleProxy> {
    KCJoiningRequestCircleSession *_session;
    KCJoiningRequestAccountCircleDelegate *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithContext:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (char)isComplete;
- (id)initiatingPayload:(id *)a0;
- (id)processIncomingPayload:(id)a0 error:(id *)a1;
- (char)requiresInitialSync;

@end
