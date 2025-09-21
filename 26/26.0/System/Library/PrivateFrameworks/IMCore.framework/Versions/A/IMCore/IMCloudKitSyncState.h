@class NSArray, NSString, IMCloudKitSyncStatistics, NSDate;

@interface IMCloudKitSyncState : NSObject {
    void /* function */ errors;
    void /* unknown type, empty encoding */ _exitDate;
    void /* unknown type, empty encoding */ _lastFullSyncDate;
    void /* unknown type, empty encoding */ _lastFullPartialSyncDate;
    void /* unknown type, empty encoding */ _lastSyncDate;
    void /* unknown type, empty encoding */ _isBetweenInitialAndFullSync;
    void /* unknown type, empty encoding */ accountEnabled;
    void /* unknown type, empty encoding */ syncState;
}

@property (nonatomic, readonly) unsigned long long syncControllerSyncState;
@property (nonatomic, readonly) long long syncControllerSyncType;
@property (nonatomic, readonly) long long syncControllerRecordType;
@property (nonatomic, readonly) BOOL hasExited;
@property (nonatomic, readonly) long long changingEnabledState;
@property (nonatomic, readonly) BOOL isDisablingDevices;
@property (nonatomic, readonly) BOOL hasAvailableRecordsToDownload;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) long long accountStatus;
@property (nonatomic, readonly) unsigned long long syncType;
@property (nonatomic, readonly) unsigned long long syncStatus;
@property (nonatomic, readonly) unsigned long long syncJobState;
@property (nonatomic, readonly) IMCloudKitSyncStatistics *statistics;
@property (nonatomic, readonly) double lastDownloadProgress;
@property (nonatomic, readonly) NSDate *exitDate;
@property (nonatomic, readonly) NSDate *lastFullSyncDate;
@property (nonatomic, readonly) NSDate *lastFullPartialSyncDate;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly) BOOL isSyncing;
@property (nonatomic, readonly) BOOL isSyncingPaused;
@property (nonatomic, readonly) BOOL isSyncingEnabled;
@property (nonatomic, readonly) BOOL isSyncingAvailable;
@property (nonatomic, readonly) BOOL syncingFailed;
@property (nonatomic, readonly) BOOL canEnableSyncing;
@property (nonatomic, readonly) BOOL canStartSyncing;
@property (nonatomic, readonly) BOOL canChangeEnabledSetting;
@property (nonatomic, readonly) BOOL isSyncEnabledForDisplayOnly;
@property (nonatomic, readonly) NSString *syncStatusText;
@property (nonatomic, readonly) BOOL isBetweenInitialAndFullSync;
@property (nonatomic, readonly) BOOL accountNeedsRepair;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)createSyncProgressWithSyncStatistics:(id)a0;
- (BOOL)hasNotSyncedInLastSevenDays;
- (id)initWithAccountEnabled:(BOOL)a0 stateDictionary:(id)a1;
- (BOOL)shouldFetchSyncStatistics;
- (BOOL)shouldSendSyncProgress;
- (id)syncErrorWithDomain:(id)a0 code:(long long)a1;

@end
