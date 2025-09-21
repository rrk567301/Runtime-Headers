@class NSUUID, NSString, AKAuthorizationUpgradeContext, NSArray, NSData, NSValue, AKAuthorizationRequest, AKPasswordRequest, NSNumber;

@interface AKCredentialRequestContext : NSObject <NSCopying, NSSecureCoding> {
    char _passcodeProtected;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *_sessionID;
@property (nonatomic) char _shouldForceUI;
@property (nonatomic) char _shouldSkipBiometrics;
@property (nonatomic) char _shouldSkipAuthorizationUI;
@property (nonatomic) char _shouldForcePrivateEmail;
@property (nonatomic) char _requirePassword;
@property (nonatomic) char _isWebLogin;
@property (nonatomic) char _isFirstPartyLogin;
@property (nonatomic) char _isRapportLogin;
@property (readonly, nonatomic) char _isEligibleForUpgradeFromPassword;
@property (readonly, nonatomic) char _isSubscriptionLogin;
@property (nonatomic) char _isItunesLogin;
@property (retain, nonatomic) NSString *_callerBundleID;
@property (retain, nonatomic) NSString *_callerSceneID;
@property (readonly, nonatomic) AKAuthorizationUpgradeContext *_upgradeContext;
@property (retain, nonatomic) NSString *_proxiedClientAppName;
@property (retain, nonatomic) NSString *_proxiedClientBundleID;
@property (retain, nonatomic) NSString *_proxiedClientServiceID;
@property (retain, nonatomic) NSString *_proxiedClientTeamID;
@property (retain, nonatomic) NSString *_proxiedClientAppID;
@property (retain, nonatomic) NSArray *_proxiedAssociatedDomains;
@property (retain, nonatomic) NSString *_proxiedDeviceName;
@property (retain, nonatomic) NSString *_proxiedDeviceClass;
@property (nonatomic) char _clientShouldAuthenticateExternally;
@property (nonatomic) char _shouldUseProxiedClientBundleIDForSRP;
@property (copy, nonatomic) NSString *_iconName;
@property (copy, nonatomic) NSData *_iconData;
@property (copy, nonatomic) NSNumber *_iconScale;
@property (copy, nonatomic) NSValue *_iconSize;
@property (copy, nonatomic) NSString *_informativeText;
@property (nonatomic) double _authSessionTimeoutInterval;
@property (copy, nonatomic) NSString *_externalAuthToken;
@property (copy, nonatomic) NSData *_externalLocalAuthData;
@property (copy, nonatomic) NSString *_continuationRequestIdentifier;
@property (nonatomic) char _shouldShowAdditionalCTA;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (nonatomic) unsigned long long requestOptions;
@property (retain, nonatomic) AKAuthorizationRequest *authorizationRequest;
@property (retain, nonatomic) AKPasswordRequest *passwordRequest;
@property (retain, nonatomic) NSArray *credentialRequests;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProxiedClientContext:(id)a0;
- (id)initWithUpgradeContext:(id)a0;

@end
