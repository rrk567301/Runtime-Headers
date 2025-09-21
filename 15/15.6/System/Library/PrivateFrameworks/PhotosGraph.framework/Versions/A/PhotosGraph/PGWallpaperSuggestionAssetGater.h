@class VCPMediaAnalysisService, NSObject, PFWallpaperCompoundDeviceConfiguration;
@protocol OS_os_log;

@interface PGWallpaperSuggestionAssetGater : NSObject {
    unsigned long long _type;
    VCPMediaAnalysisService *_mediaAnalysisService;
    PFWallpaperCompoundDeviceConfiguration *_deviceWallpaperLayoutConfiguration;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (class, readonly) unsigned long long currentWallpaperPropertiesVersion;

@property (nonatomic) char isUserInitiated;
@property (nonatomic) char coversTracks;
@property (nonatomic) char enableSettlingEffect;
@property (readonly, nonatomic) char isLastGatingCallingMediaAnalysis;
@property (readonly, nonatomic) struct { int numberOfAssetsGated; int numberOfMediaAnalysisRequest; int numberOfValidWallpaperPropertiesRequested; int numberOfInvalidAnalysisVersion; int numberOfFailuresFromNilResult; int numberOfSuccessFromCache; int numberOfFailuresFromCache; int numberOfSuccessFromMediaAnalysisRequests; int numberOfFailuresFromMediaAnalysisRequests; int numberOfTimeoutsFromMediaAnalysisRequests; } currentGatingStatistics;
@property (readonly, nonatomic) struct { int numberOfEliminationsThruFeatureDisabled; int numberOfEliminationsThruHardwareUnsupported; int numberOfEliminationsThruResourceAvailability; int numberOfEliminationsThruUnsupportedAdjustments; int numberOfEliminationsThruGenericError; int numberOfEliminationsThruMetadataCheck; int numberOfEliminationsThruStabilization; int numberOfEliminationsThruVideoQuality; int numberOfEliminationsThruMetadataIntegrity; int numberOfEliminationsThruFRC; int numberOfEliminationsThruVideoDecision; int numberOfEliminationsThruLayoutDecision; int numberOfEliminationsThruStillTransition; } settlingEffectGatingStatistics;

+ (id)assetFetchPropertySetsForGating;
+ (int)numberOfFailuresAfterStabilizationFromStatistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; })a0;
+ (double)sydneyMD4FaceQualityFromAsset:(id)a0;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 loggingConnection:(id)a1;
- (char)assetIsUsingHeadroom:(id)a0;
- (id)requestWallpaperPropertiesForAsset:(id)a0 progressBlock:(id /* block */)a1 error:(id *)a2;
- (id)_gateAsset:(id)a0 wallpaperProperties:(id *)a1 progressBlock:(id /* block */)a2;
- (id)existingSegmentationScoresWithAsset:(id)a0;
- (id)gateAsset:(id)a0 hasPetFace:(char *)a1;
- (id)gateAsset:(id)a0 progressBlock:(id /* block */)a1;
- (void)logCurrentGatingStatisticsWithPrefix:(id)a0;
- (void)logCurrentSettlingEffectGatingStatisticsWithPrefix:(id)a0;

@end
