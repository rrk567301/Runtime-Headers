@class NSString, CPLStatus, NSDate;

@interface PXCPLStatusSource : PXObservable <CPLStatusDelegate, PXCPLMutableStatusSource> {
    CPLStatus *_status;
}

@property (readonly, copy, nonatomic) NSDate *exitDate;
@property (readonly, copy, nonatomic) NSDate *syncDate;
@property (readonly, nonatomic) char isExceedingQuota;
@property (readonly, nonatomic) char isExceedingSharedLibraryQuota;
@property (readonly, nonatomic) char isClientVersionTooOld;
@property (readonly, nonatomic) char isClientNotAuthenticated;
@property (readonly, nonatomic) char isExceedingBatteryQuota;
@property (readonly, nonatomic) char isExceedingCellularQuota;
@property (readonly, nonatomic) char isCellularDataDisabled;
@property (readonly, nonatomic) char isInAirplaneMode;
@property (readonly, nonatomic) char isOffline;
@property (readonly, nonatomic) char isInLowDataMode;
@property (readonly, nonatomic) char isInLowPowerMode;
@property (readonly, nonatomic) char isLowDiskSpace;
@property (readonly, nonatomic) char isVeryLowDiskSpace;
@property (readonly, nonatomic) unsigned long long sharedLibraryExitingWithNumberOfAssetsRemaining;
@property (readonly, nonatomic) char isCapturingSnapshot;
@property (readonly, nonatomic) char isOptimizingSystemPerformance;
@property (readonly, nonatomic) char isInPoorNetworkConnection;
@property (readonly, nonatomic) char isInModerateThermalPressure;
@property (readonly, nonatomic) char isInHeavyThermalPressure;
@property (readonly, nonatomic) char isInLowBattery;
@property (readonly, nonatomic) char isUpgradeSuggestedToAccessAllPhotos;
@property (readonly, nonatomic) unsigned long long numberOfPhotoAssets;
@property (readonly, nonatomic) unsigned long long numberOfVideoAssets;
@property (readonly, nonatomic) unsigned long long numberOfOtherAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStatus:(id)a0;
- (void)setExitDate:(id)a0;
- (void)setSyncDate:(id)a0;
- (void)setIsOffline:(char)a0;
- (void)_updateStatus;
- (void)statusDidChange:(id)a0;
- (void)setIsExceedingQuota:(char)a0;
- (void)setIsExceedingSharedLibraryQuota:(char)a0;
- (void)setIsInModerateThermalPressure:(char)a0;
- (void)setIsCapturingSnapshot:(char)a0;
- (void)setIsCellularDataDisabled:(char)a0;
- (void)setIsClientNotAuthenticated:(char)a0;
- (void)setIsClientVersionTooOld:(char)a0;
- (void)setIsExceedingBatteryQuota:(char)a0;
- (void)setIsExceedingCellularQuota:(char)a0;
- (void)setIsInAirplaneMode:(char)a0;
- (void)setIsInHeavyThermalPressure:(char)a0;
- (void)setIsInLowBattery:(char)a0;
- (void)setIsInLowDataMode:(char)a0;
- (void)setIsInLowPowerMode:(char)a0;
- (void)setIsInPoorNetworkConnection:(char)a0;
- (void)setIsLowDiskSpace:(char)a0;
- (void)setIsOptimizingSystemPerformance:(char)a0;
- (void)setIsUpgradeSuggestedToAccessAllPhotos:(char)a0;
- (void)setIsVeryLowDiskSpace:(char)a0;
- (void)setNumberOfOtherAssets:(unsigned long long)a0;
- (void)setNumberOfPhotoAssets:(unsigned long long)a0;
- (void)setNumberOfVideoAssets:(unsigned long long)a0;
- (void)setSharedLibraryExitingWithNumberOfAssetsRemaining:(unsigned long long)a0;

@end
