@class ASCAgentProxy, NSString, NSArray;

@interface ASAuthorizationWebBrowserPublicKeyCredentialManager : NSObject

@property (class, readonly, nonatomic) BOOL isDeviceConfiguredForPasskeys;

@property (readonly, nonatomic) ASCAgentProxy *agentProxy;
@property (readonly, nonatomic) long long authorizationStateForPlatformCredentials;

+ (BOOL)_isDeviceConfiguredForPasskeys;

- (void).cxx_destruct;
- (id)init;
- (void)corePlatformCredentialsForRelyingParty:(NSString *)a0 completionHandler:(void (^)(NSArray *))a1;
- (void)platformCredentialsForRelyingParty:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAuthorizationForPublicKeyCredentials:(id /* block */)a0;

@end
