@class MFEWSAccount;

@interface MFEWSDeliveryAccount : MFDeliveryAccount {
    MFEWSAccount *_ewsAccount;
}

@property BOOL stripsFromHeaderWhenSending;
@property (weak) MFEWSAccount *associatedAccount;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)hostname;
- (void)setUsername:(id)a0;
- (id)initWithAccount:(id)a0;
- (id)password;
- (id)initWithAccountInfo:(id)a0;
- (id)displayName;
- (id)initWithSystemAccount:(id)a0;
- (id)identifier;
- (void)setHostname:(id)a0;
- (BOOL)isDynamic;
- (id)standardPorts;
- (void)setPassword:(id)a0;
- (BOOL)usesSSL;
- (BOOL)isOffline;
- (id)username;
- (void).cxx_destruct;
- (void)setAuthenticationScheme:(id)a0;
- (void)setPortNumber:(long long)a0;
- (void)dealloc;
- (long long)defaultSecurePortNumber;
- (long long)portNumber;
- (id)standardSSLPorts;
- (long long)defaultPortNumber;
- (id)authenticationScheme;
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
