@class NSString, NSArray, AKPasswordRequest, AKAuthorizationRequest;

@interface CPSAppSignInRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *overrideBundleIdentifier;
@property (readonly, nonatomic) char isAppleIDOnlyRequest;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char needsShield;
@property (readonly, nonatomic) AKAuthorizationRequest *appleIDRequest;
@property (readonly, nonatomic) AKPasswordRequest *passwordRequest;
@property (copy, nonatomic) NSArray *customAuthenticationMethods;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (id)initWithRequests:(id)a0;

@end
