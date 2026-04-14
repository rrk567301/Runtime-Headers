@class MFEWSAccount;

@interface MFEWSDeliveryAccount : MFDeliveryAccount {
    MFEWSAccount *_ewsAccount;
}

@property BOOL stripsFromHeaderWhenSending;
@property (weak) MFEWSAccount *associatedAccount;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)setHostname:(id)a0;
- (id)initWithAccountInfo:(id)a0;
- (long long)defaultPortNumber;
- (id)hostname;
- (void)setAuthenticationScheme:(id)a0;
- (id)identifier;
- (id)initWithAccount:(id)a0;
- (void)setPassword:(id)a0;
- (long long)portNumber;
- (void)setUsername:(id)a0;
- (id)standardPorts;
- (id)authenticationScheme;
- (long long)defaultSecurePortNumber;
- (void)setPortNumber:(long long)a0;
- (id)password;
- (id)initWithSystemAccount:(id)a0;
- (id)standardSSLPorts;
- (BOOL)usesSSL;
- (id)username;
- (BOOL)isOffline;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)isDynamic;
- (void)dealloc;
- (BOOL)requiresAuthentication;
- (void)setIsOffline:(BOOL)a0;
- (void)setTLSIdentity:(struct __SecIdentity { } *)a0;
- (id)accountTypeString;
- (id)saslProfileName;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (id)canonicalEmailAddress;
- (struct __SecIdentity { } *)copyTLSIdentity;
- (void)_setPortNumber:(long long)a0 releasingConnections:(BOOL)a1;
- (void)_setSecurityLayerType:(long long)a0 releasingConnections:(BOOL)a1;
- (void)_setUsesSSL:(BOOL)a0 releasingConnections:(BOOL)a1;
- (id)authenticatedConnection;
- (BOOL)canGoOffline;
- (BOOL)connectAndAuthenticate:(id)a0;
- (id)deliveryIdentifier;
- (void)discoverConnectionProperties;
- (BOOL)discoverConnectionPropertiesAndWait;
- (BOOL)isWillingToGoOnline;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)a0 withConnectTimeout:(double)a1 readWriteTimeout:(double)a2;
- (id)newDelivererWithMessage:(id)a0;
- (id)offlineDisplayName;
- (id)preferredAuthScheme;
- (void)releaseAllConnections;
- (id)remoteMailAccountsEmployedBy;
- (long long)securityLayerType;
- (void)setCanonicalEmailAddress:(id)a0;
- (void)setDisplayName;
- (void)setIsWillingToGoOnline:(BOOL)a0;
- (void)setPreferredAuthScheme:(id)a0;
- (void)setShouldUseAuthentication:(BOOL)a0;
- (void)setStoredDisplayName;
- (void)setValidationRequired:(BOOL)a0;
- (BOOL)shouldUseAuthentication;
- (id)storedDisplayName;
- (void)validateConnections;
- (BOOL)validationRequired;

@end
