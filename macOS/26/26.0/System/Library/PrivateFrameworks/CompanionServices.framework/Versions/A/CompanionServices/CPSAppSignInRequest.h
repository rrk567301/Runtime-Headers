@class NSString, NSArray, AKPasswordRequest, AKAuthorizationRequest;

@interface CPSAppSignInRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *overrideBundleIdentifier;
@property (readonly, nonatomic) BOOL isAppleIDOnlyRequest;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL needsShield;
@property (readonly, nonatomic) AKAuthorizationRequest *appleIDRequest;
@property (readonly, nonatomic) AKPasswordRequest *passwordRequest;
@property (copy, nonatomic) NSArray *customAuthenticationMethods;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void).cxx_destruct;
- (id)initWithRequests:(id)a0;

@end
