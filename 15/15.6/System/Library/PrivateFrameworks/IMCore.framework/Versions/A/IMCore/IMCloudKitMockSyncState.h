@class NSArray, NSDate;

@interface IMCloudKitMockSyncState : NSObject

@property char IMCloudKitSyncingEnabled;
@property char IMCloudKitIsSyncing;
@property unsigned long long IMCloudKitSyncStatus;
@property unsigned long long IMCloudKitSyncJobState;
@property char IMCloudKitSyncPaused;
@property char IMCloudKitIsEligibleForTruthZone;
@property char IMCloudKitIsInExitState;
@property char IMCloudKitIsRemovedFromBackup;
@property (retain) NSDate *IMCloudKitSyncDate;
@property (retain) NSDate *IMCloudKitFullSyncCompletedDate;
@property (retain) NSDate *IMCloudKitFullPartialSyncCompletedDate;
@property char IMCloudKitStartingPeriodicSync;
@property char IMCloudKitStartingInitialSync;
@property long long IMCloudKitStartingEnabledSettingChange;
@property char IMCloudKitStartingDisableDevices;
@property unsigned long long IMCloudKitSyncControllerSyncState;
@property long long IMCloudKitSyncControllerSyncType;
@property long long IMCloudKitSyncControllerSyncRecordType;
@property (retain) NSArray *IMCloudKitSyncErrors;

- (void).cxx_destruct;
- (id)convertToDictionary;

@end
