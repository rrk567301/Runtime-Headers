@class NSURLSession, NSString, NSData, NSDate, NSNumber, NSPPrivacyProxyConfiguration;

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSString *_configServerHost;
    NSNumber *_version;
    long long _diskVersion;
    NSPConfiguration *_defaults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *version;
@property (copy) NSNumber *timestamp;
@property (copy) NSNumber *enabled;
@property (copy) NSString *etag;
@property (copy) NSNumber *epoch;
@property (copy) NSDate *resurrectionDate;
@property (copy) NSNumber *configServerEnabled;
@property (copy) NSString *configServerHost;
@property (copy) NSNumber *configServerPort;
@property (copy) NSString *configServerPath;
@property (copy) NSString *overrideConfigServerPath;
@property (copy) NSString *configServerHeaders;
@property (copy) NSNumber *urlRequestTimeout;
@property (retain, nonatomic) NSURLSession *privacyProxyURLSession;
@property BOOL ignoreInvalidCerts;
@property BOOL ignoreSignature;
@property (copy) NSNumber *persistMetrics;
@property (readonly) NSDate *dayPassExpirationDate;
@property (readonly) NSDate *earliestEnableCheckDate;
@property (readonly) BOOL isDead;
@property (copy) NSPPrivacyProxyConfiguration *proxyConfiguration;
@property (copy) NSData *proxyConfigurationData;
@property (copy, nonatomic) NSNumber *userTier;
@property (copy) NSNumber *proxyTrafficState;
@property (copy) NSDate *configurationFetchDate;
@property (copy) NSDate *resetTomorrowDate;
@property (copy) NSDate *anyAppEnabledDate;
@property (copy) NSNumber *willResetSubscriberTierTomorrow;
@property (copy) NSNumber *cloudSubscriptionCheckEnabled;
@property (retain, nonatomic) NSNumber *geohashSharingEnabledStatus;
@property (retain, nonatomic) NSString *geohashOverride;
@property (retain, nonatomic) NSNumber *preferredPathRoutingEnabledStatus;
@property (retain, nonatomic) NSNumber *privateAccessTokensEnabledStatus;
@property (retain, nonatomic) NSNumber *privateAccessTokensAllowTools;
@property (retain, nonatomic) NSNumber *inProcessFlowDivert;
@property (retain, nonatomic) NSNumber *proxyAccountType;
@property (retain, nonatomic) NSNumber *proxyAccountUnlimited;
@property (retain, nonatomic) NSNumber *userPreferredTier;
@property (retain, nonatomic) NSNumber *subscriberEnabledFromNonSettingsApp;
@property (retain, nonatomic) NSNumber *trialConfigVersion;
@property (retain, nonatomic) NSString *lastPrivateCloudComputeEnvironment;

+ (id)proxyAccountTypeToString:(id)a0;
+ (BOOL)validatePrivacyProxyConfiguration:(id)a0;
+ (id)defaultConfiguration;
+ (id)proxyTrafficStateToString:(id)a0;
+ (void)verifyConfigurationSignature:(id)a0 configuration:(id)a1 host:(id)a2 validateCert:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (BOOL)fetchDate:(id)a0 isWithinStart:(id)a1 end:(id)a2 etag:(id)a3;

- (id)initWithTimestamp:(id)a0 fromDictionary:(id)a1;
- (id)createConfigFetchURLWithPath;
- (id)copyTLVData;
- (void)setup;
- (id)tierToString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)merge:(id)a0;
- (void)saveInternalOptions:(id)a0;
- (BOOL)saveToPreferences;
- (void)encodeWithCoder:(id)a0;
- (BOOL)fetchDateIsWithinStart:(id)a0 end:(id)a1;
- (id)diagnostics;
- (id)initFromPreferences;
- (id)description;
- (void)removeFromKeychain;
- (void)saveToKeychain;
- (id)initWithCoder:(id)a0;
- (void)setupNSURLSession;
- (id)initFromTLVs:(id)a0;
- (void).cxx_destruct;
- (void)incrementSessionCountersOnFirstLaunch;

@end
