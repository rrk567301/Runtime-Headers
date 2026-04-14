@class NSString, NSNumber;

@interface MAAutoAssetControlStagerInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long persistedStateCount;
@property (nonatomic) unsigned long long persistedTargetLookupResultsCount;
@property (nonatomic) unsigned long long persistedAvailableForStagingByTargetCount;
@property (retain, nonatomic) NSString *startupLastStagingFromOSVersion;
@property (retain, nonatomic) NSString *startupLastStagingFromBuildVersion;
@property (retain, nonatomic) NSString *startupAssetTargetOSVersion;
@property (retain, nonatomic) NSString *startupAssetTargetBuildVersion;
@property (nonatomic) unsigned long long startupCandidateAssetCount;
@property (nonatomic) unsigned long long startupDeterminedAvailableAssetCount;
@property (nonatomic) unsigned long long startupActivelyStagingAssetCount;
@property (nonatomic) unsigned long long startupAwaitingStagingAssetCount;
@property (nonatomic) unsigned long long startupStagedAssetCount;
@property (nonatomic) unsigned long long startupStagedAssetTotalContentBytes;
@property (nonatomic) long long startupPreviousOTASituation;
@property (retain, nonatomic) NSString *stagingFromOSVersion;
@property (retain, nonatomic) NSString *stagingFromBuildVersion;
@property (nonatomic) BOOL loadPersistedPostponed;
@property (nonatomic) BOOL alwaysPromoteStagedAssets;
@property (retain, nonatomic) NSString *assetTargetOSVersion;
@property (retain, nonatomic) NSString *assetTargetBuildVersion;
@property (retain, nonatomic) NSString *assetTargetTrainName;
@property (retain, nonatomic) NSString *assetTargetRestoreVersion;
@property (retain, nonatomic) NSNumber *optionalAssetSizeAllowed;
@property (nonatomic) long long activeTargetOTASituation;
@property (nonatomic) unsigned long long activeTargetCandidatesForStagingRequiredCount;
@property (nonatomic) unsigned long long activeTargetCandidatesForStagingOptionalCount;
@property (nonatomic) unsigned long long activeTargetCandidateSetConfigurationsRequiredCount;
@property (nonatomic) unsigned long long activeTargetCandidateSetConfigurationsOptionalCount;
@property (nonatomic) unsigned long long activeTargetAvailableForStagingRequiredCount;
@property (nonatomic) unsigned long long activeTargetAvailableForStagingOptionalCount;
@property (retain, nonatomic) NSString *otherTargetName;
@property (nonatomic) long long otherTargetOTASituation;
@property (nonatomic) unsigned long long otherTargetCandidatesForStagingRequiredCount;
@property (nonatomic) unsigned long long otherTargetCandidatesForStagingOptionalCount;
@property (nonatomic) unsigned long long otherTargetCandidateSetConfigurationsRequiredCount;
@property (nonatomic) unsigned long long otherTargetCandidateSetConfigurationsOptionalCount;
@property (nonatomic) unsigned long long otherTargetAvailableForStagingRequiredCount;
@property (nonatomic) unsigned long long otherTargetAvailableForStagingOptionalCount;
@property (nonatomic) unsigned long long stagingClientDetermineRequestsCount;
@property (nonatomic) BOOL stagingClientDownloadRequestActive;
@property (nonatomic) BOOL stagingClientRequestActive;
@property (retain, nonatomic) NSString *stagingClientName;
@property (nonatomic) unsigned long long setConfigurationsCount;
@property (nonatomic) unsigned long long setTargetsCount;
@property (nonatomic) unsigned long long scheduledJobsCount;
@property (nonatomic) unsigned long long candidatesForStagingCount;
@property (nonatomic) unsigned long long candidateSetConfigurationsCount;
@property (nonatomic) unsigned long long setLookupResultsCount;
@property (nonatomic) unsigned long long baseForStagingDescriptorsCount;
@property (nonatomic) unsigned long long determiningBySelectorCount;
@property (nonatomic) unsigned long long availableForStagingCount;
@property (nonatomic) unsigned long long awaitingStagingAttemptCount;
@property (nonatomic) unsigned long long successfullyStagedCount;
@property (nonatomic) long long overallStagedTotalExpectedBytes;
@property (nonatomic) long long overallStagedDownloadedSoFarBytes;
@property (nonatomic) long long currentStagedLastWrittenBytes;
@property (nonatomic) long long currentStagedRemainingBytes;
@property (nonatomic) unsigned long long eliminationSelectorsCount;
@property (nonatomic) BOOL eliminationSetConfigurationCurrentJob;
@property (nonatomic) unsigned long long eliminationSelectorsAcknowledgedCount;

+ (id)previousOTASituationName:(long long)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
