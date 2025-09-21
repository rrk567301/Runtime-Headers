@class SOKerberosExtensionData, NSDate, NSObject, SOKerberosPacData, SOKerberosRealmSettings, SONetworkIdentity, SOKerberosExtensionUserData, ASAuthorizationProviderExtensionAuthorizationRequest, SOSiteCode, NSString, LAContext, NSData, NSUUID;
@protocol OS_dispatch_group;

@interface SOKerberosContext : NSObject

@property (retain, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *authorizationRequest;
@property (retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (nonatomic) char requestStarted;
@property (nonatomic) char requestCancelled;
@property (retain, nonatomic) NSData *auditToken;
@property (nonatomic) char isManagedApp;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) SOKerberosExtensionData *extensionData;
@property (retain, nonatomic) SOKerberosExtensionUserData *extensionUserData;
@property (retain, nonatomic) NSString *hostName;
@property (retain, nonatomic) NSString *servicePrincipalName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *changedPassword;
@property (nonatomic) char userNameIsReadOnly;
@property (retain, nonatomic) NSString *userPrincipalName;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSUUID *credentialUUID;
@property (retain, nonatomic) NSString *certificateTokenID;
@property struct __SecIdentity { } *pkinitIdentity;
@property (retain) NSData *pkinitPersistientRef;
@property (retain) LAContext *smartCardLAContext;
@property (retain) LAContext *keychainLAContext;
@property (nonatomic) char useKerberosPasswordInsteadOfMDMIdentity;
@property (retain, nonatomic) SOSiteCode *siteCode;
@property (retain, nonatomic) NSString *cacheName;
@property (nonatomic) char returnCredentialOnly;
@property (nonatomic) char refreshCredential;
@property (readonly, nonatomic) SOKerberosRealmSettings *currentSettings;
@property (retain, nonatomic) NSString *callerBundleIdentifier;
@property (retain, nonatomic) NSString *impersonationBundleIdentifier;
@property (retain, nonatomic) NSString *callerLocalizedName;
@property (nonatomic) char credsCameFromKeychain;
@property (nonatomic) char attemptedToGetCredsFromKeychain;
@property (nonatomic) int laContextFailureCount;
@property (nonatomic) char forceLoginViewController;
@property (retain, nonatomic) NSDate *loginTimeStamp;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *siteCodeGroup;
@property (retain, nonatomic) SONetworkIdentity *networkIdentity;
@property (nonatomic) char smartCardNeedsInsert;
@property (retain, nonatomic) SOKerberosPacData *pacData;

- (void).cxx_destruct;
- (void)cancelRequest;
- (void)completeRequestWithError:(id)a0;
- (void)cancelRequest:(char)a0;
- (void)waitForCompletion;
- (void)startRequest;
- (void)presentAuthorizationViewControllerWithCompletion:(id /* block */)a0;
- (void)completeRequest;
- (void)completeRequestWithDoNotHandle;
- (void)completeRequestWithHTTPResponse:(id)a0 httpBody:(id)a1;
- (void)completeRequestWithHTTPResponseHeaders:(id)a0;
- (void)completeRequestWithHeaders:(id)a0;
- (void)finishRequest;
- (id)initWithRequest:(id)a0 extensionData:(id)a1;
- (void)setUserPrincipalNameAfterAuth:(id)a0;

@end
