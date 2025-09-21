@class HMMDateProvider, NSString, NSDate;
@protocol HMDFileManager, HAPSystemKeyCountProvider, HMMLogEventSubmitting;

@interface HMDMetricsDeviceStateManager : HMFObject <HMDMetricsDeviceStateProvider, HMDAggregationAnalysisEventContributing, HMMDailyTaskBookend, HMMDailyTaskRunner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) long long internalDeviceDaysSinceSoftwareUpdate;

@property (readonly, nonatomic) id<HMDFileManager> fileManager;
@property (readonly, weak, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, nonatomic) id<HAPSystemKeyCountProvider> keyCountProvider;
@property unsigned long long coreDataRootSizeKB;
@property unsigned long long coreDataLocalStoreSizeKB;
@property unsigned long long coreDataCloudStoreSizeKB;
@property unsigned long long coreDataSharedCloudStoreSizeKB;
@property unsigned long long legacyV1DatabaseSizeKB;
@property unsigned long long legacyV3DatabaseSizeKB;
@property unsigned long long eventStoreHH2SizeKB;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSDate *lastSoftwareUpdateDate;
@property (readonly) unsigned long long currentDataSyncState;
@property (readonly) unsigned long long currentHomeManagerStatus;
@property (readonly) unsigned long long bitMappedMissingKeys;
@property (readonly) unsigned long long bitMappedDuplicateKeys;
@property (readonly) long long deviceDaysSinceSoftwareUpdate;
@property (readonly) BOOL hh2SentinelZoneExists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_daysSinceSoftwareUpdateFrom:(id)a0 dateProvider:(id)a1;
+ (id)lastUpdateForSoftwareVersion:(id)a0 dateProvider:(id)a1 userDefaults:(id)a2 updateDefaultsIfNeeded:(BOOL)a3;

- (void)registerForNotifications;
- (void)runDailyTask;
- (void)resetAggregationAnalysisContext;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)missingKeysBitMapFromKeyCounts:(id)a0;
- (unsigned long long)bitMaskForKeyType:(unsigned long long)a0;
- (unsigned long long)duplicateKeysBitMapFromKeyCounts:(id)a0;
- (long long)fetchSizeInBytesForFilepath:(id)a0;
- (unsigned long long)fetchSqliteDatabaseSizeInKBForFileName:(id)a0;
- (void)handleHomeDataLoaded;
- (id)initWithCurrentSoftwareVersion:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2 dateProvider:(id)a3 keyCountProvider:(id)a4 userDefaults:(id)a5 fileManager:(id)a6;
- (id)initWithLogEventSubmitter:(id)a0 dailyScheduler:(id)a1 dateProvider:(id)a2;
- (void)runCleanup;
- (void)runSetup;
- (void)updateCachedPairingKeyStates;
- (void)updateDatabaseSizes;
- (void)updateHH2SentinelZoneExists:(BOOL)a0;
- (void)updateWithDataSyncState:(unsigned long long)a0;
- (void)updateWithHomeManagerStatus:(unsigned long long)a0;

@end
