@class NSString, NSDictionary, NSArray, NSNumber;

@interface _DKSync2Policy : NSObject

@property (class, readonly, nonatomic) char rapportSyncDisabled;
@property (class, readonly, nonatomic) char cloudSyncDisabled;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) char syncDisabled;
@property (nonatomic) unsigned long long maxSyncPeriodInDays;
@property (nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (nonatomic) unsigned long long minSyncWindowInSeconds;
@property (nonatomic) unsigned long long minSyncsPerDay;
@property (nonatomic) unsigned long long maxSyncsPerDay;
@property (nonatomic) unsigned long long numChangesTriggeringSync;
@property (nonatomic) unsigned long long policyDownloadIntervalInDays;
@property (nonatomic) char pushTriggersSync;
@property (nonatomic) char requireCharging;
@property (nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (retain, nonatomic) NSDictionary *streamNamesToSync;
@property (retain, nonatomic) NSArray *streamNamesToAlwaysSync;
@property (retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (nonatomic) unsigned long long syncBatchSizeInEvents;
@property (nonatomic) unsigned long long maxBatchesPerSync;
@property (nonatomic) unsigned long long syncTimeoutInSeconds;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds;

+ (void)disableSyncPolicyForFeature:(unsigned long long)a0 transportType:(long long)a1 disabled:(char)a2;
+ (id)disabledFeaturesForSyncType:(id)a0 transports:(long long)a1;
+ (id)featureNameFromFeatureType:(unsigned long long)a0;
+ (id)internalFeatureNameFromFeatureName:(id)a0;
+ (char)isSyncPolicyDisabledForFeature:(unsigned long long)a0 transportType:(long long)a1;
+ (id)policyForSyncTransportType:(long long)a0;
+ (id)policyFromDictionary:(id)a0;
+ (void)setOkToDownloadPolicyUpdates:(char)a0;

- (id)description;
- (void).cxx_destruct;
- (char)canDeferSyncOperationWithSyncType:(id)a0;
- (char)canPerformSyncOperationWithSyncType:(id)a0 lastSyncDate:(id)a1 lastDaySyncCount:(unsigned long long)a2 isCharging:(char)a3;
- (char)highPriorityForSyncDownWithSyncType:(id)a0;
- (char)highPriorityForSyncUpWithSyncType:(id)a0 lastSyncDate:(id)a1;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(char)a0;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(char)a0 urgency:(unsigned long long)a1;
- (id)queryStartDateWithSyncType:(id)a0 lastSyncDate:(id)a1 lastDaySyncCount:(unsigned long long)a2 previousHighWaterMark:(id)a3;
- (id)queryStartDateWithSyncType:(id)a0 previousHighWaterMark:(id)a1;
- (id)streamNamesToSyncWithDisabledFeatures:(id)a0;
- (id)streamNamesToSyncWithSyncType:(id)a0 transportType:(long long)a1;

@end
