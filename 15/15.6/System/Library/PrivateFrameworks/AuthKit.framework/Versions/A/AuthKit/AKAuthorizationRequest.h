@class NSString, NSArray, NSDictionary, ACAccount, AKSignInWithAppleAccount;

@interface AKAuthorizationRequest : AKCredentialRequest {
    NSString *_altDSID;
}

@property (nonatomic) long long existingStatus;
@property (readonly, nonatomic) ACAccount *internalAuthKitAccount;
@property (nonatomic) char _isSilentAppTransfer;
@property (nonatomic) char _clientAuthenticatedExternallyWithPassword;
@property (copy, nonatomic) NSString *_externalAuthToken;
@property (nonatomic) char _hasSharedAccounts;
@property (nonatomic) char _isAuthorizingUsingSharedAccount;
@property (copy, nonatomic) AKSignInWithAppleAccount *_sharedAccount;
@property (copy, nonatomic) NSArray *requestedScopes;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (nonatomic) char isEligibleForUpgradeFromPassword;
@property (nonatomic) char shouldHideCreateOption;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *teamID;
@property (retain, nonatomic) ACAccount *authkitAccount;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)altDSID;
- (id)initWithAltDSID:(id)a0;
- (id)_sanitizedCopy;

@end
