@class NSString, PPCExtensibleSSOAuthenticator, NSData, NSObject;
@protocol OS_dispatch_queue, HPDAuthClientProtocol;

@interface HPDAuthChallengeHandler : NSObject

@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) PPCExtensibleSSOAuthenticator *ssoAuthenticator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (copy) NSData *trustExceptions;
@property long long resourceType;
@property (weak) id<HPDAuthClientProtocol> delegate;

- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (void)_resolveServerTrustChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleServerTrustChallenge:(id)a0 completionHandler:(id /* block */)a1;

@end
