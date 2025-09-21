@class AMSDelegateAuthenticateResult;

@interface CPSStoreAuthenticationResponse : CPSAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSDelegateAuthenticateResult *authenticationResult;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAuthenticationResult:(id)a0;

@end
