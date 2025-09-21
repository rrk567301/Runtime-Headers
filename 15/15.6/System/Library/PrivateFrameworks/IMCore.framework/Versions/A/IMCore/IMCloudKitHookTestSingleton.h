@class IMCloudKitMockSyncState, NSArray, NSDictionary, NSDate;

@interface IMCloudKitHookTestSingleton : IMSingletonOverride

@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isSyncing) char syncing;
@property (retain, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) char eligibleForTruthZone;
@property (nonatomic) char rampedIntoTruthZone;
@property (nonatomic) long long isChangingEnabledState;
@property (nonatomic) char isStartingSync;
@property (nonatomic) char isDisablingDevices;
@property (retain, nonatomic) NSArray *IMCloudKitSyncErrors;
@property (nonatomic) unsigned long long syncControllerSyncState;
@property (nonatomic) long long syncType;
@property (retain, nonatomic) NSDictionary *syncStats;
@property (retain, nonatomic) IMCloudKitMockSyncState *testState;

+ (id)logHandle;

- (id)init;
- (void).cxx_destruct;
- (id)logHandle;
- (void)fetchSyncStateStatistics;
- (void)initiatePeriodicSync;
- (void)startUserInitiatedSync;
- (char)isInExitState;
- (void)sendSyncChangedEvent;
- (void)setControllerSyncState:(unsigned long long)a0;
- (void)setControllerSyncType:(long long)a0;
- (void)setIsInExitState:(char)a0;
- (id)syncStateDictionary;

@end
