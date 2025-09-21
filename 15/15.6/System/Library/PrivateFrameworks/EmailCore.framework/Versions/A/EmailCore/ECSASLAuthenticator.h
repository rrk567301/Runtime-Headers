@class NSString, ECAuthenticationScheme;
@protocol ECAuthenticatableAccount, ECSASLSecurityLayer, ECAuthenticatableConnection;

@interface ECSASLAuthenticator : NSObject {
    id<ECAuthenticatableConnection> _connection;
    id<ECAuthenticatableAccount> _account;
    long long _authenticationState;
}

@property (readonly, nonatomic) ECAuthenticationScheme *authenticationScheme;
@property (readonly, nonatomic) id<ECAuthenticatableAccount> account;
@property (readonly, nonatomic) NSString *saslName;
@property (readonly, nonatomic) char supportsInitialClientResponse;
@property (nonatomic) long long authenticationState;
@property (readonly, nonatomic) char justSentPlainTextPassword;
@property (readonly, nonatomic) id<ECSASLSecurityLayer> securityLayer;
@property (readonly, nonatomic, getter=isUsingSSL) char usingSSL;
@property (readonly, nonatomic) char usesBase64EncodeResponseData;
@property (readonly, nonatomic) char couldRetry;

- (void).cxx_destruct;
- (id)authScheme;
- (id)initWithAuthenticationScheme:(id)a0 account:(id)a1 connection:(id)a2;
- (id)responseForServerData:(id)a0;
- (void)setInvalidCredentialsError;
- (void)setMissingPasswordError;

@end
