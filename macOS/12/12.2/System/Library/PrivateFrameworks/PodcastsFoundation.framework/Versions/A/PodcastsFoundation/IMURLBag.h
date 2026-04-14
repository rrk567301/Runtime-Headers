@class AMSBag, NSString, AMSProcessInfo, NSDate, IMMutableBagKeySet, NSObject;
@protocol OS_dispatch_queue;

@interface IMURLBag : NSObject <AMSBagProtocol>

@property (retain) AMSBag *bag;
@property (retain) IMMutableBagKeySet *keySet;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long downloadLimitPodcast;
@property (nonatomic) long long downloadLimitVideoPodcast;
@property (nonatomic) double libraryShowFetchThresholdDefaultValue;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (readonly, copy) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerBagKeys:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)trustedDomains;
- (id)metricsURL;
- (id)metricsDictionary;
- (id)mescalCertificateURL;
- (id)mescalSetupURL;
- (id)mescalSignedActions;
- (id)mescalSignSapRequests;
- (id)mescalSignSapResponses;
- (id)personalizedLookupURL;
- (id)unpersonalizedLookupURL;
- (id)syncStringForKey:(id)a0;
- (id)syncValueForKey:(id)a0;
- (void)_registerBagKeysIfNeeded;
- (id)reportAConcernURL;
- (void)reportAConcernURLWithCompletion:(id /* block */)a0;
- (id)metricsSessionDurationPageRender;
- (id)metricsSamplingPercentageUsersPageRender;
- (id)metricsSamplingPercentageUsersLog;
- (id)metricsSessionDurationLog;
- (id)metricsImpressionableThreshold;
- (id)metricsImpressionableViewablePercentage;
- (id)metricsFastImpressionTimeout;
- (id)backgroundFetchInterval;
- (id)libraryShowFetchThreshold;
- (id)podcastsMediaAPIHostUrl;
- (id)mediaTaskCountryCode;
- (id)tokenServiceUrl;
- (id)personalizedChannelPollingInterval;
- (id)podcastsLicenseCert;
- (id)podcastsLicenseStreamingStart;
- (id)podcastsLicenseStreamingRenew;
- (id)podcastsLicenseStreamingStop;
- (id)podcastsLicenseOfflineStart;
- (id)podcastsLicenseOfflineRenew;
- (id)podcastsLicenseOfflineStop;
- (id)podcastsLicenseOfflineStopNonce;
- (id)pushNotificationRegistration;
- (unsigned long long)explicitContentBadgeTreatment;
- (id)storefrontSupportsColdStart;
- (id)coldStartLandOnListenNow;

@end
