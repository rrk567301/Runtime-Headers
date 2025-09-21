@class ASCAgentProxy, NSString, NSArray;

@interface ASAuthorizationWebBrowserPublicKeyCredentialManager : NSObject

@property (readonly, nonatomic) ASCAgentProxy *agentProxy;
@property (readonly, nonatomic) long long authorizationStateForPlatformCredentials;

- (id)init;
- (void).cxx_destruct;
- (void)corePlatformCredentialsForRelyingParty:(NSString *)a0 completionHandler:(void (^)(NSArray *))a1;
- (void)platformCredentialsForRelyingParty:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAuthorizationForPublicKeyCredentials:(id /* block */)a0;

@end
