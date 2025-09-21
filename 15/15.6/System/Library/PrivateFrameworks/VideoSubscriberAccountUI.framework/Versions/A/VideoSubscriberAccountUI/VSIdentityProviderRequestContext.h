@class VSIdentityProviderRequest;

@interface VSIdentityProviderRequestContext : NSObject

@property (retain, nonatomic) VSIdentityProviderRequest *request;
@property (nonatomic) char attemptedVerificationStateReset;

- (void).cxx_destruct;

@end
