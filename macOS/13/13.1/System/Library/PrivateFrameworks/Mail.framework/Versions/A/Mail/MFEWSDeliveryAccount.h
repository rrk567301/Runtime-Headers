@class MFEWSAccount;

@interface MFEWSDeliveryAccount : MFDeliveryAccount {
    MFEWSAccount *_ewsAccount;
}

@property BOOL stripsFromHeaderWhenSending;
@property (weak) MFEWSAccount *associatedAccount;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)identifier;
- (id)password;
- (id)displayName;
- (BOOL)isDynamic;
- (void)setPassword:(id)a0;
- (id)initWithAccount:(id)a0;
- (id)username;
- (void)setUsername:(id)a0;
- (id)hostname;
- (void)setHostname:(id)a0;
- (long long)portNumber;
- (void)setPortNumber:(long long)a0;
- (BOOL)requiresAuthentication;
- (BOOL)isOffline;
- (void)setTLSIdentity:(struct __SecIdentity { } *)a0;
- (id)accountTypeString;
- (BOOL)usesSSL;
- (id)initWithAccountInfo:(id)a0;
- (id)saslProfileName;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (id)standardPorts;
- (id)standardSSLPorts;
- (id)initWithSystemAccount:(id)a0;
- (id)authenticationScheme;
- (void)setAuthenticationScheme:(id)a0;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (struct __SecIdentity { } *)copyTLSIdentity;
- (void)discoverConnectionProperties;
- (BOOL)discoverConnectionPropertiesAndWait;
- (BOOL)connectAndAuthenticate:(id)a0;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)a0 withConnectTimeout:(double)a1 readWriteTimeout:(double)a2;
- (id)authenticatedConnection;
- (id)canonicalEmailAddress;
- (void)setCanonicalEmailAddress:(id)a0;
- (long long)securityLayerType;
- (id)preferredAuthScheme;
- (void)setPreferredAuthScheme:(id)a0;
- (BOOL)shouldUseAuthentication;
- (void)setShouldUseAuthentication:(BOOL)a0;
- (BOOL)canGoOffline;
- (void)setIsOffline:(BOOL)a0;
- (BOOL)isWillingToGoOnline;
- (void)setIsWillingToGoOnline:(BOOL)a0;
- (id)storedDisplayName;
- (id)offlineDisplayName;
- (void)_setPortNumber:(long long)a0 releasingConnections:(BOOL)a1;
- (void)releaseAllConnections;
- (void)validateConnections;
- (void)_setUsesSSL:(BOOL)a0 releasingConnections:(BOOL)a1;
- (void)_setSecurityLayerType:(long long)a0 releasingConnections:(BOOL)a1;
- (id)remoteMailAccountsEmployedBy;
- (void)setStoredDisplayName;
- (void)setDisplayName;
- (BOOL)validationRequired;
- (void)setValidationRequired:(BOOL)a0;
- (id)deliveryIdentifier;
- (id)newDelivererWithMessage:(id)a0;

@end
