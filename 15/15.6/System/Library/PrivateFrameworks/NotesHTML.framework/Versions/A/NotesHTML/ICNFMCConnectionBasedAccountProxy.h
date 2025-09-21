@class NSString, NSArray, ICNFMCAuthScheme, NSURL;

@interface ICNFMCConnectionBasedAccountProxy : ICNFMCAccountProxy <ICNFMCAccount>

@property (copy) NSString *primitiveSessionPassword;
@property (readonly, copy) NSString *accountTypeString;
@property (readonly, copy) NSString *identifier;
@property (copy) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *saslProfileName;
@property char configureDynamically;
@property char allowInsecureAuthentication;
@property (copy) NSString *canonicalEmailAddress;
@property (copy) NSString *hostname;
@property long long portNumber;
@property (readonly, copy, nonatomic) NSArray *standardPorts;
@property (readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property long long securityLayerType;
@property (retain) ICNFMCAuthScheme *preferredAuthScheme;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property (copy) NSString *sessionPassword;
@property (readonly, copy) NSString *applePersonID;
@property (readonly, copy) NSString *appleAuthenticationToken;
@property (readonly, copy) NSString *machineID;
@property (readonly, copy) NSString *oneTimePassword;
@property (readonly, copy) NSString *clientInfo;
@property (readonly, copy) NSString *oauthToken;
@property (readonly, nonatomic) char requiresAuthentication;
@property char shouldUseAuthentication;
@property char usesSSL;
@property (readonly) NSURL *subscriptionURL;
@property (readonly, copy) NSString *subscriptionURLLabel;
@property (copy) NSString *externalHostname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountTypeString;
+ (void)saveAccountInfoToDefaults;

- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)acAccount;
- (char)autodiscoverSettings:(id *)a0;
- (void)setTLSIdentity:(struct __SecIdentity { } *)a0;
- (struct __SecIdentity { } *)copyTLSIdentity;
- (id)authenticatedConnection;
- (char)canAuthenticateWithScheme:(id)a0;
- (char)connectAndAuthenticate:(id)a0;
- (id)newConnectedConnectionDiscoveringBestSettings:(char)a0 withConnectTimeout:(double)a1 readWriteTimeout:(double)a2;
- (void)respondToHostBecomingReachable;
- (void)updateFromSuccessfulConnectionPortNumber:(long long)a0 securityLayerType:(long long)a1;
- (char)isServerReachable;
- (char)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)a0 host:(id)a1 didPromptUser:(char *)a2;

@end
