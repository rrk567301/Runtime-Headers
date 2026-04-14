@class NSDate, NSString, NSURL, NSArray, PKPaymentWebServiceRegion, PKPaymentWebServiceConfiguration, NSDictionary, NSMutableDictionary;

@interface PKPaymentWebServiceContext : PKWebServiceContext {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock_context;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    NSDictionary *_regions;
    PKPaymentWebServiceConfiguration *_configuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSMutableDictionary *_featureSupportedLanguageCache;
}

@property long long consistencyCheckBackoffLevel;
@property (copy) NSArray *certificates;
@property (copy) NSString *lastUpdatedTag;
@property long long version;
@property (copy) NSString *deviceID;
@property (copy) NSString *secureElementID;
@property (copy) NSString *pushToken;
@property (copy) NSString *nextPushToken;
@property (copy) NSString *companionSerialNumber;
@property BOOL devSigned;
@property (readonly, getter=isRegistered) BOOL registered;
@property long long registrationType;
@property (copy) NSDate *registrationDate;
@property (copy) NSDate *archivedDate;
@property (copy) NSDate *configurationDate;
@property (retain) PKPaymentWebServiceConfiguration *configuration;
@property BOOL transactionServiceDisabled;
@property BOOL messageServiceDisabled;
@property BOOL ignoreProvisioningEnablementPercentage;
@property (copy) NSDictionary *regions;
@property (copy) NSString *primaryRegionIdentifier;
@property (readonly, weak) PKPaymentWebServiceRegion *primaryRegion;
@property (readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property (readonly, nonatomic) BOOL hasPeerPaymentAccount;

+ (BOOL)supportsSecureCoding;
+ (void)_migrateContext:(id)a0;
+ (void)_migrateFrom0To1:(id)a0;
+ (id)contextWithArchive:(id)a0;

- (id)regionForIdentifier:(id)a0;
- (double)_contextProvisioningEnablementValue;
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)a0;
- (void)atomicallyUpdateEveryRegion:(id /* block */)a0;
- (void)archiveAtPath:(id)a0;
- (void)atomicallyUpdateRegionWithIdentifier:(id)a0 updateBlock:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)notificationPushTopics;
- (void)encodeWithCoder:(id)a0;
- (void)atomicallyUpdatePrimaryRegion:(id /* block */)a0;
- (id)verificationRequestRecordForUniqueID:(id)a0;
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)a0 mainLanguageBundle:(id)a1;
- (id)debugDescription;
- (BOOL)contextMeetsMarketGeoNotificationThresholdForRegion:(id)a0 paymentNetwork:(long long)a1;
- (void)_localizationUpdated;
- (id)_regionWithPeerPaymentServiceURL;
- (void).cxx_destruct;
- (BOOL)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)a0;
- (void)removeVerificationRequestRecordForUniqueID:(id)a0;
- (id)paymentOffersServicePushTopics;
- (id)betaPaymentNetworksForRegion:(id)a0;
- (id)TSMURLStringByPushTopic;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)a0 mainLanguageBundle:(id)a1;
- (id)TSMPushTopics;
- (BOOL)contextMeetsDeviceUpgradeTasksEnablementThresholdForRegion:(id)a0;
- (BOOL)isRegisteredForBrokerURL:(id)a0;
- (void)addVerificationRequestRecord:(id)a0 forUniqueID:(id)a1;
- (id)accountServicePushTopics;
- (id)init;
- (id)applyServicePushTopics;
- (void)dealloc;

@end
