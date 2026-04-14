@class NSString, NSArray, NSDictionary, ACAccount, AKSignInWithAppleAccount;

@interface AKAuthorizationRequest : AKCredentialRequest {
    NSString *_altDSID;
}

@property (nonatomic) long long existingStatus;
@property (readonly, nonatomic) ACAccount *internalAuthKitAccount;
@property (nonatomic) BOOL _isSilentAppTransfer;
@property (nonatomic) BOOL _clientAuthenticatedExternallyWithPassword;
@property (copy, nonatomic) NSString *_externalAuthToken;
@property (nonatomic) BOOL _hasSharedAccounts;
@property (nonatomic) BOOL _isAuthorizingUsingSharedAccount;
@property (copy, nonatomic) AKSignInWithAppleAccount *_sharedAccount;
@property (copy, nonatomic) NSArray *requestedScopes;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (nonatomic) BOOL isEligibleForUpgradeFromPassword;
@property (nonatomic) BOOL shouldHideCreateOption;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *teamID;
@property (retain, nonatomic) ACAccount *authkitAccount;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0;
- (id)altDSID;
- (void).cxx_destruct;
- (id)_sanitizedCopy;

@end
