@class AKAuthorizationRequest, NSString, NSArray, NSData, ASCPublicKeyCredentialCreationOptions, NSNumber, ASCPublicKeyCredentialAssertionOptions;

@interface ASCCredentialRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *proxiedAppName;
@property (copy, nonatomic) NSString *proxiedAppIdentifier;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) NSString *proxiedTeamIdentifier;
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains;
@property (copy, nonatomic) NSData *proxiedIconData;
@property (copy, nonatomic) NSNumber *proxiedIconScale;
@property (copy, nonatomic) NSString *proxiedOriginDeviceName;
@property (readonly, nonatomic) BOOL isClientLinkedOnOrAfterIOS15Aligned;
@property (nonatomic) BOOL isCABLEAuthenticatorRequest;
@property (readonly, nonatomic) unsigned long long requestTypes;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialCreationOptions;
@property (retain, nonatomic) ASCPublicKeyCredentialCreationOptions *securityKeyCredentialCreationOptions;
@property (retain, nonatomic) ASCPublicKeyCredentialAssertionOptions *platformKeyCredentialAssertionOptions;
@property (retain, nonatomic) ASCPublicKeyCredentialAssertionOptions *securityKeyCredentialAssertionOptions;
@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest;
@property (readonly, nonatomic) BOOL isProxiedRequest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestTypes:(unsigned long long)a0;
- (void)removePasskeyRequestsIfNecessary;

@end
