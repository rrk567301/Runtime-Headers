@class NSData, NSDate, NSURL, NSArray, CPLAccountFlags, NSMutableDictionary, NSDictionary, NSMutableSet, NSObject, Protocol;
@protocol CPLStatusDelegate, OS_dispatch_queue;

@interface CPLStatus : NSObject {
    char _forCPL;
    NSMutableSet *_changedKeys;
    NSURL *_statusFileURL;
    NSMutableDictionary *_status;
    NSObject<OS_dispatch_queue> *_lock;
    Protocol *_delegationProtocol;
    SEL _delegationSelector;
}

@property (copy, nonatomic) NSDate *lastCompletePrefetchDate;
@property (copy, nonatomic) NSDate *lastPruneDate;
@property (nonatomic) char hasChangesToProcess;
@property (nonatomic) char containerHasBeenWiped;
@property (nonatomic) char iCloudLibraryClientVersionTooOld;
@property (nonatomic) char isStuckInExitForSharedLibrary;
@property (nonatomic) char iCloudLibraryClientIsNotAuthenticated;
@property (copy, nonatomic) NSDate *lastSuccessfulSyncDate;
@property (copy, nonatomic) NSDate *initialSyncDate;
@property (copy, nonatomic) NSDate *initialDownloadDate;
@property (nonatomic) char isExceedingQuota;
@property (nonatomic) char isExceedingSharedLibraryQuota;
@property (nonatomic) unsigned long long estimatedCountOfRemainingRecordsDuringSharedLibraryExit;
@property (nonatomic) long long busyState;
@property (copy, nonatomic) NSDate *exitDeleteTime;
@property (nonatomic) char iCloudLibraryHasBeenWiped;
@property (nonatomic) char iCloudLibraryExists;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (readonly, nonatomic) NSDate *cloudAssetCountPerTypeLastCheckDate;
@property (nonatomic, getter=isWalrusEnabled) char walrusEnabled;
@property (nonatomic, getter=isKeychainCDPEnabled) char keychainCDPEnabled;
@property (nonatomic, getter=isUpgradeSuggestedToAccessAllPhotos) char upgradeSuggestedToAccessAllPhotos;
@property (nonatomic) long long serverFeatureCompatibleVersion;
@property (copy, nonatomic) NSArray *disabledFeatures;
@property (nonatomic) long long accountEPPCapability;
@property (readonly, nonatomic) long long maximumAccountEPPCapability;
@property (readonly, nonatomic) char hasValidSystemBudget;
@property (readonly, nonatomic) char hasCellularBudget;
@property (readonly, nonatomic) char hasBatteryBudget;
@property (readonly, nonatomic) char hasFinishedInitialDownload;
@property (readonly, nonatomic) char isBlockedBySnapshot;
@property (readonly, nonatomic) NSDictionary *cloudAssetCountPerType;
@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (readonly, nonatomic, getter=isConnectedToNetwork) char connectedToNetwork;
@property (readonly, nonatomic, getter=isCellularRestricted) char cellularRestricted;
@property (readonly, nonatomic, getter=isInAirplaneMode) char inAirplaneMode;
@property (readonly, nonatomic) char hasLowBatteryLevel;
@property (readonly, nonatomic) char isConstrainedNetwork;
@property (readonly, nonatomic) char isBlockedByLowPowerMode;
@property (readonly, nonatomic) char hasHeavyResourceUsage;
@property (readonly, nonatomic) char hasPoorNetworkQuality;
@property (readonly, nonatomic) char hasModerateThermalPressure;
@property (readonly, nonatomic) char hasThermalPressure;
@property (readonly, nonatomic) char hasPoorSystemConditions;
@property (readonly, nonatomic) long long blockedReason;
@property (readonly, nonatomic) long long unBlockedReason;
@property (readonly, nonatomic) long long clientFeatureCompatibleVersion;
@property (readonly, nonatomic) char lowDiskSpace;
@property (readonly, nonatomic) char veryLowDiskSpace;
@property (weak, nonatomic) id<CPLStatusDelegate> delegate;

+ (id)descriptionForAccountEPPCapability:(long long)a0;

- (void).cxx_destruct;
- (void)_save;
- (id)statusDescription;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (char)writeInitialSyncMarker:(id *)a0;
- (void)refetchFromDisk;
- (char)_deleteInitialSyncMarkerWithError:(id *)a0;
- (void)_loadIfNecessary;
- (void)_setObjectInStatus:(id)a0 forKey:(id)a1;
- (id)_statusClient;
- (void)_statusDidChange;
- (char)_writeInitialSyncMarkerForDate:(id)a0 error:(id *)a1;
- (void)checkInitialSyncMarker;
- (id)initWithClientLibraryBaseURLForCPLEngine:(id)a0;
- (void)preventDelegateWithDelegationClass:(id)a0 selector:(SEL)a1;
- (void)setCloudAssetCountPerType:(id)a0 updateCheckDate:(char)a1;
- (void)setConnectedToNetwork:(char)a0 cellularIsRestricted:(char)a1 inAirplaneMode:(char)a2;
- (void)setHasCellularBudget:(char)a0 hasBatteryBudget:(char)a1 hasLowBatteryLevel:(char)a2 isConstrainedNetwork:(char)a3 isBlockedByLowPowerMode:(char)a4 hasHeavyResourceUsage:(char)a5 hasPoorNetworkQuality:(char)a6 hasModerateThermalPressure:(char)a7 hasThermalPressure:(char)a8 hasPoorSystemConditions:(char)a9 isBudgetValid:(char)a10 blockedReason:(long long)a11 unBlockedReason:(long long)a12;
- (void)setLowDiskSpace:(char)a0 veryLowDiskSpace:(char)a1;

@end
