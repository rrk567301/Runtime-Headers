@class NSDate, NSString, NSArray, NSURLSession, NSPPrivacyProxyConfiguration, NSData, NSDictionary, NSNumber;

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
@property (copy) NSArray *appRules;
@property (copy) NSNumber *configServerEnabled;
@property (copy) NSString *configServerHost;
@property (copy) NSNumber *configServerPort;
@property (copy) NSString *configServerPath;
@property (copy) NSNumber *urlRequestTimeout;
@property (copy) NSString *waldoLeafOID;
@property (copy) NSNumber *waldoRevocationFailClosed;
@property (retain, nonatomic) NSURLSession *privacyProxyURLSession;
@property BOOL ignoreInvalidCerts;
@property (retain, nonatomic) NSDictionary *edgeSets;
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

+ (id)defaultConfiguration;
+ (id)proxyAccountTypeToString:(id)a0;
+ (id)proxyTrafficStateToString:(id)a0;
+ (BOOL)validatePrivacyProxyConfiguration:(id)a0;
+ (void)verifyConfigurationSignature:(id)a0 configuration:(id)a1 host:(id)a2 validateCert:(BOOL)a3 completionHandler:(id /* block */)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)teardown;
- (void)merge:(id)a0;
- (id)diagnostics;
- (void)setup;
- (void)removeFromKeychain;
- (void)saveToKeychain;
- (id)getEdgeSetForSigningIdentifier:(id)a0;
- (id)copyAgentResultsForAppRule:(id)a0;
- (id)copyTLVData;
- (id)createConfigFetchURLWithPath:(id)a0 timestamp:(id)a1;
- (void)enumerateEdgeSetsWithBlock:(id /* block */)a0;
- (BOOL)evaluateEnableRatios;
- (BOOL)fetchDateIsWithinStart:(id)a0 end:(id)a1;
- (id)getCurrentKeyBagForAppRule:(id)a0;
- (id)getEdgeSetForAppRule:(id)a0;
- (void)incrementSessionCountersOnFirstLaunch;
- (id)initFromKeychain;
- (id)initFromPreferences;
- (id)initFromTLVs:(id)a0;
- (id)initWithTimestamp:(id)a0 fromDictionary:(id)a1 waldoSource:(long long)a2;
- (BOOL)resetStaleEdgeSets;
- (BOOL)saveToPreferences;
- (void)setupNSURLSession;
- (id)tierToString;
- (void)updateNetworkAgents;

@end
