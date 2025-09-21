@class NSString, NSDate;

@interface PXCPLStatus : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) long long percentCompletedForLibraryRebuild;
@property (nonatomic) long long percentCompletedForUpload;
@property (nonatomic) char isEnabled;
@property (nonatomic) float fractionCompletedForLibraryRebuild;
@property (nonatomic) char isRebuildingThumbnails;
@property (nonatomic) char isSyncing;
@property (copy, nonatomic) NSDate *syncDate;
@property (copy, nonatomic) NSDate *exitDate;
@property (nonatomic) unsigned long long numberOfItemsToUpload;
@property (nonatomic) float fractionCompletedForUpload;
@property (nonatomic) unsigned long long numberOfItemsToAdd;
@property (nonatomic) unsigned long long numberOfOriginalsToDownload;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) unsigned long long numberOfPhotoAssets;
@property (nonatomic) unsigned long long numberOfVideoAssets;
@property (nonatomic) unsigned long long numberOfOtherAssets;
@property (nonatomic) unsigned long long numberOfReferencedItems;
@property (nonatomic) char isUserPaused;
@property (nonatomic) char isInLowDataMode;
@property (nonatomic) char isInLowPowerMode;
@property (nonatomic) char isExceedingBatteryQuota;
@property (nonatomic) char isExceedingCellularQuota;
@property (nonatomic) char isLowDiskSpace;
@property (nonatomic) char isVeryLowDiskSpace;
@property (nonatomic) char isExceedingQuota;
@property (nonatomic) char isCellularDataDisabled;
@property (nonatomic) char isInAirplaneMode;
@property (nonatomic) char isClientVersionTooOld;
@property (nonatomic) char isClientNotAuthenticated;
@property (nonatomic) char isOffline;
@property (nonatomic) char isInSoftResetSync;
@property (nonatomic) char isInHardResetSync;
@property (nonatomic) char isCapturingSnapshot;
@property (nonatomic) char isOptimizingSystemPerformance;
@property (nonatomic) char isInPoorNetworkConnection;
@property (nonatomic) char isInModerateThermalPressure;
@property (nonatomic) char isInHeavyThermalPressure;
@property (nonatomic) char isInLowBattery;
@property (nonatomic) char hasCloudQuotaOffer;
@property (nonatomic) long long cloudQuotaState;
@property (copy, nonatomic) NSString *cloudQuotaCustomTitle;
@property (copy, nonatomic) NSString *cloudQuotaCustomMessage;
@property (copy, nonatomic) NSString *cloudQuotaCustomActionTitle;
@property (nonatomic) long long sharedLibraryState;
@property (nonatomic) unsigned long long sharedLibraryExitingWithNumberOfAssetsRemaining;
@property (nonatomic) unsigned long long sharedLibraryMovingToShared;
@property (nonatomic) unsigned long long sharedLibraryMovingToPersonal;
@property (nonatomic) char isExceedingSharedLibraryQuota;
@property (nonatomic) char isLocalModeEnabled;
@property (nonatomic) char isMockStatus;
@property (nonatomic) char isUpgradeSuggestedToAccessAllPhotos;

+ (id)statusWithStringRepresentation:(id)a0;
+ (id)statusWithStringRepresentation:(id)a0 currentDate:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)a0 currentDate:(id)a1;
- (char)_isEqualToCPLStatus:(id)a0;

@end
