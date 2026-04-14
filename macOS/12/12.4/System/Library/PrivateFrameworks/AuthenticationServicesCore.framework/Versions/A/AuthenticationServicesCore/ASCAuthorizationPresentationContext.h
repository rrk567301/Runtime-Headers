@class AKAuthorizationRequest, NSString, NSArray, NSData, NSURL, NSMutableArray, NSNumber;

@interface ASCAuthorizationPresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSMutableArray *loginChoices;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *destinationSiteForCrossSiteAssertion;
@property (readonly, nonatomic) unsigned long long requestTypes;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, nonatomic) BOOL isCombinedPublicKeyCredentialRegistrationRequest;
@property (nonatomic) BOOL isProxiedRequest;
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains;
@property (copy, nonatomic) NSData *proxiedIconData;
@property (copy, nonatomic) NSNumber *proxiedIconScale;
@property (copy, nonatomic) NSString *proxiedOriginDeviceName;
@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest;
@property (readonly, copy, nonatomic) NSString *platformUserVerificationPreference;
@property (readonly, nonatomic) NSArray *primaryLoginChoices;
@property (readonly, nonatomic) NSArray *otherLoginChoices;
@property (readonly, nonatomic) NSArray *localAccountLoginChoices;
@property (readonly, nonatomic) NSURL *cableAuthenticatorURL;
@property (readonly, nonatomic) BOOL isCABLEAuthenticatorRequest;
@property (readonly, nonatomic) BOOL shouldRequireCABLEAuthenticatorConsent;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateLoginChoices:(id)a0;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1 shouldUseRelyingPartyForServiceName:(BOOL)a2;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1;
- (id)initWithCABLEAuthenticatorURL:(id)a0 shouldRequireConsent:(BOOL)a1;
- (void)addLoginChoice:(id)a0;

@end
