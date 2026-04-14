@class AKAuthorization, CASPasswordCredential;
@protocol ASAuthorizationCredential;

@interface CPSAppSignInResponse : CPSAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AKAuthorization *appleIDAuthorization;
@property (readonly, nonatomic) CASPasswordCredential *passwordCredential;
@property (readonly, nonatomic) id<ASAuthorizationCredential> credential;
@property (readonly, nonatomic) AKAuthorization *authorization;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppleIDAuthorization:(id)a0;
- (id)initWithPasswordCredential:(id)a0;

@end
