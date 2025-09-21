@class NSString, NSArray, NSDictionary, NSData, NSNumber;

@interface SOKerberosExtensionData : NSObject

@property (retain, nonatomic) NSString *cacheName;
@property (retain, nonatomic) NSString *principalName;
@property (retain, nonatomic) NSString *siteCode;
@property (retain, nonatomic) NSString *certificateUUID;
@property (nonatomic) char useSiteAutoDiscovery;
@property (retain, nonatomic) NSArray *credentialBundleIdACL;
@property (nonatomic) char includeManagedAppsInBundleIdACL;
@property (nonatomic) char includeKerberosAppsInBundleIdACL;
@property (retain, nonatomic) NSDictionary *domainRealmMapping;
@property (nonatomic) char isDefaultRealm;
@property (nonatomic) char allowPasswordChange;
@property (nonatomic) char allowAutomaticLogin;
@property (nonatomic) char requireUserPresence;
@property (retain, nonatomic) NSString *pwChangeURL;
@property (retain, nonatomic) NSNumber *pwExpireOverride;
@property (retain, nonatomic) NSNumber *pwNotificationDays;
@property char pwReqComplexity;
@property (retain, nonatomic) NSNumber *pwReqLength;
@property (retain, nonatomic) NSNumber *pwReqMinAge;
@property (retain, nonatomic) NSNumber *pwReqHistory;
@property (retain, nonatomic) NSString *pwReqText;
@property (retain, nonatomic) NSData *pwReqRTFData;
@property (retain, nonatomic) NSString *helpText;
@property (retain, nonatomic) NSString *customUsernameLabel;
@property (retain, nonatomic) NSNumber *replicationTime;
@property char syncLocalPassword;
@property char monitorCredentialsCache;
@property char delayUserSetup;
@property (nonatomic) long long credentialUseMode;
@property char requireTLSForLDAP;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSArray *preferredKDCs;
@property (nonatomic) char usePlatformSSOTGT;
@property (nonatomic) char allowPlatformSSOAuthFallback;
@property (nonatomic) char performKerberosOnly;
@property (retain, nonatomic) NSString *identityIssuerAutoSelectFilter;
@property (retain, nonatomic) NSNumber *allowSmartCard;
@property (retain, nonatomic) NSNumber *allowPassword;
@property (retain, nonatomic) NSNumber *startInSmartCardMode;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
