@protocol ASAuthorizationProvider, ASAuthorizationCredential;

@interface ASAuthorization : NSObject

@property (readonly, nonatomic) id<ASAuthorizationProvider> provider;
@property (readonly, nonatomic) id<ASAuthorizationCredential> credential;

+ (id)new;
+ (id)authorizationCredentialForAccountRegistration:(id)a0;
+ (BOOL)authorizationCredentialIsAccountRegistration:(id)a0;
+ (id)authorizationFromCredential:(id)a0;
+ (id)authorizationProviderForAccountRegistration:(id)a0;

- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCorePlatformKeyCredentialAssertion:(id)a0;
- (id)initWithCorePlatformKeyCredentialRegistration:(id)a0;
- (id)initWithProvider:(id)a0 credential:(id)a1;

@end
