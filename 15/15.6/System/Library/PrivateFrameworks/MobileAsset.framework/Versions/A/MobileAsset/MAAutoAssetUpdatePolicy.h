@class NSString, NSArray, NSDictionary, NSUUID;

@interface MAAutoAssetUpdatePolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *updatePolicyName;
@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSArray *categoryList;
@property (nonatomic) long long checkForNewerIntervalSecs;
@property (nonatomic) long long checkForNewerTimeoutSecs;
@property (nonatomic) char checkForNewerAsUserInitiated;
@property (nonatomic) char checkForNewerWithoutRampEnabled;
@property (nonatomic) char newerFoundAutoDownloadPostponed;
@property (nonatomic) long long newerFoundAutoDownloadJitterSecs;
@property (nonatomic) long long newerFoundAutoDownloadTimeoutSecs;
@property (nonatomic) long long newerFoundUserInitiatedDownloadTimeoutSecs;
@property (nonatomic) char revokeIgnoredForUnlockedPurge;
@property (nonatomic) char revokeIgnoredForLockedContent;
@property (nonatomic) char revokeTriggersLockedPurge;
@property (nonatomic) char allowInterestAcrossTermination;
@property (nonatomic) char allowLockAcrossTermination;
@property (nonatomic) char allowLockAcrossReboot;
@property (nonatomic) char allowLockAcrossOTAUpdate;
@property (nonatomic) char allowLockOfRevokedContent;
@property (nonatomic) char allowLockWhenFilesystemSpaceCritical;
@property (nonatomic) long long defaultUnlockAfterUsageSecs;
@property (nonatomic) long long maximumUnlockAfterUsageSecs;
@property (nonatomic) long long defaultPreventGarbageCollectionSecs;
@property (nonatomic) long long maximumPreventGarbageCollectionSecs;
@property (retain, nonatomic) NSDictionary *additionalUpdatePolicyControl;
@property (nonatomic) char allowAutoCheckForNewerWhenBatteryLow;
@property (nonatomic) char allowAutoCheckForNewerWhenCPUHigh;
@property (nonatomic) char allowAutoCheckForNewerOverExpensive;
@property (nonatomic) char allowAutoDownloadWhenBatteryLow;
@property (nonatomic) char allowAutoDownloadWhenCPUHigh;
@property (nonatomic) char blockIfBeforeFirstUnlock;
@property (nonatomic) char blockAutoCheckForNewerOverCellular;
@property (nonatomic) char blockAutoDownloadOverCellular;
@property (nonatomic) char blockUserInitiatedDownloadOverCellular;
@property (nonatomic) char blockUserInitiatedDownloadWhenBatteryLow;
@property (nonatomic) char blockUserInitiatedDownloadWhenCPUHigh;
@property (nonatomic) char blockUserInitiatedDownloadOverExpensive;
@property (nonatomic) char downloadWithoutPreferenceForWiFi;
@property (retain, nonatomic) id limitCellularByRestrictedTimePeriods;
@property (retain, nonatomic) id limitWiFiByRestrictedTimePeriods;
@property (retain, nonatomic) id limitCellularByFeeAgreement;
@property (retain, nonatomic) id limitByNetworkType;
@property (retain, nonatomic) NSUUID *assetAudienceUUID;

+ (id)activityIntervalString:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initUpdatePolicy:(id)a0 forAssetType:(id)a1;
- (id)newSummaryDictionary;

@end
