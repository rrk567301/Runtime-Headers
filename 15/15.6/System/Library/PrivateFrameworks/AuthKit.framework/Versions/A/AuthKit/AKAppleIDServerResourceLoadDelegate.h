@class AKAppleIDAuthenticationContext, NSString, NSArray, NSDictionary, AKAttestationData, AKDevice, AKAnisetteProvisioningController, NSNumber, AKAnisetteData;
@protocol AKAnisetteServiceProtocol;

@interface AKAppleIDServerResourceLoadDelegate : NSObject <AKCommandLineSupporting, NSSecureCoding> {
    AKAnisetteProvisioningController *_proxiedProvisioningController;
    NSDictionary *_continuationHeaders;
    AKAppleIDAuthenticationContext *_context;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char shouldSendEphemeralAuthHeader;
@property (nonatomic) char shouldSendICSCIntentHeader;
@property (nonatomic) char shouldSendLocalUserHasAppleIDLoginHeader;
@property (nonatomic) char shouldSendPhoneNumber;
@property (nonatomic) char shouldOfferSecurityUpgrade;
@property (copy, nonatomic) NSString *phoneNumberCertificate;
@property (copy, nonatomic) NSArray *phoneInformation;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic) NSArray *loggedInServices;
@property (copy, nonatomic) NSString *passwordResetToken;
@property (copy, nonatomic) NSString *continuationToken;
@property (copy, nonatomic) NSString *heartbeatToken;
@property (copy, nonatomic) NSString *identityToken;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *initialURLRequestKey;
@property (copy, nonatomic) NSString *proxyAppName;
@property (copy, nonatomic) NSString *clientAppName;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (retain, nonatomic) NSNumber *hasEmptyPasswordOverride;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *followupItems;
@property (copy, nonatomic) NSString *dataCenterIdentifier;
@property (copy, nonatomic) NSString *custodianRecoveryToken;
@property (retain, nonatomic) AKDevice *proxiedDevice;
@property (retain, nonatomic) NSString *proxiedAltDSID;
@property (retain, nonatomic) NSString *proxiedIdentityToken;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;
@property (retain, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData;
@property (retain, nonatomic) AKAttestationData *proxiedDeviceAttestationData;
@property (copy, nonatomic) NSString *privateEmailDomain;
@property (copy, nonatomic) NSString *privateEmailBundleId;
@property (copy, nonatomic) NSString *continuityIDMSData;
@property (copy, nonatomic) NSString *telemetryDeviceSessionID;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (copy, nonatomic) NSString *serviceTokenIdentifier;
@property (nonatomic) char shouldSendAbsintheHeader;
@property (copy, nonatomic) NSString *bagUrlKey;
@property (nonatomic) char shouldSendSigningHeaders;
@property (nonatomic) char shouldSendAbsintheHeader;
@property (copy, nonatomic) NSString *bagUrlKey;
@property (nonatomic) char shouldSendSigningHeaders;
@property (copy, nonatomic) NSString *serviceToken;
@property (nonatomic) char cliMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (unsigned long long)signalFromServerResponse:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_accountDSID;
- (id)_fetchApplicationNameForBundleId:(id)a0;
- (void)_harvestContinuationHeadersFromHeaders:(id)a0;
- (char)_isOTCliqueStatusIn;
- (char)_isResponseSuccessful:(id)a0;
- (id)_proxiedProvisioningController;
- (id)_retrieveContinuationHeaders;
- (void)_signRequest:(id)a0;
- (void)_signRequestWithBAAHeaders:(id)a0;
- (void)_signRequestWithServerBackoffInfoHeader:(id)a0;
- (void)_signWithFeatureOptInHeaders:(id)a0;
- (void)_signWithProxiedDeviceHeaders:(id)a0;
- (void)decorateWithCircleRequestContext:(id)a0;
- (void)decorateWithContext:(id)a0;
- (void)decorateWithPrivateEmailContext:(id)a0;
- (id)initWithAltDSID:(id)a0 identityToken:(id)a1;
- (char)isAuthenticationRequired:(id)a0;
- (char)isResponseActionable:(id)a0;
- (char)isResponseCompleteAndConflict:(id)a0;
- (char)isResponseFinal:(id)a0;
- (char)isResponseFinalForHSA2ServerFlow:(id)a0;
- (void)processResponse:(id)a0;
- (void)signRequest:(id)a0;
- (void)signRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)signRequestWithBasicHeaders:(id)a0;
- (void)signRequestWithCommonHeaders:(id)a0;
- (id)signingController;
- (void)updateWithAuthResults:(id)a0;

@end
