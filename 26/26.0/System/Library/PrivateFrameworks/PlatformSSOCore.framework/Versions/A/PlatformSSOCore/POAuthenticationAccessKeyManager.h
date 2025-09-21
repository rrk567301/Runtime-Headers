@class POAuthenticationProcess, POLoginConfiguration, NSDate, POAuthenticationContext, PODeviceConfiguration;
@protocol POAuthenticationAccessKeyManagerDelegate, POUserIdentifierProvider;

@interface POAuthenticationAccessKeyManager : POAccessKeyManager

@property (copy, nonatomic) id /* block */ completion;
@property (retain) PODeviceConfiguration *deviceConfiguration;
@property (retain) POLoginConfiguration *loginConfiguration;
@property (retain) NSDate *end;
@property (retain, nonatomic) id<POUserIdentifierProvider> userIdentifierProvider;
@property (retain, nonatomic) POAuthenticationProcess *process;
@property (retain, nonatomic) POAuthenticationContext *authenticationContext;
@property (nonatomic) unsigned long long previousNonceResult;
@property (weak) id<POAuthenticationAccessKeyManagerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithUid:(unsigned int)a0 identifierProvider:(id)a1;
- (void)refreshServerNonceIfNecessaryWithTimeout:(id)a0 authenticationContext:(id)a1;
- (BOOL)listenForAuthenticationWithCompletion:(id /* block */)a0 returningError:(id *)a1;
- (void)performTokenOperationsWithSigningKey:(struct __SecKey { } *)a0 encryptionKey:(struct __SecKey { } *)a1 tokenId:(id)a2;

@end
