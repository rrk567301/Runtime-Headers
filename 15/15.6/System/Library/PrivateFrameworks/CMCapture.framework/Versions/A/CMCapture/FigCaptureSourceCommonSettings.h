@class NSDictionary;

@interface FigCaptureSourceCommonSettings : NSObject

@property (readonly, nonatomic) NSDictionary *memoryPoolSizeDistributions;
@property (readonly, nonatomic) char livePhotoVitalityScoringSupported;
@property (readonly, nonatomic) float livePhotoJPEGIntermediateCompressionRatioDefaultOverride;
@property (readonly, nonatomic) int previewRegistrationType;
@property (readonly, nonatomic) char previewRegistrationExcludeStaticComponentFromAlignmentShiftsEnabled;
@property (readonly, nonatomic) NSDictionary *photoProcessingTimeRangesInMS;
@property (readonly, nonatomic) char RGBIRStereoFusionThresholdsEnabled;
@property (readonly, nonatomic) char flashMitigationRequired;
@property (readonly, nonatomic) char realtimeFSDNetSupported;
@property (readonly, nonatomic) char frameRateSwitchBasedOnMotionForVFRDisabled;
@property (readonly, nonatomic) char videoStabilizationAdaptiveOverscanSupported;
@property (readonly, nonatomic) char variableFrameRateVideoCaptureFromFWSupported;
@property (readonly, nonatomic) char highPriorityLaunchFromLockScreenSupported;
@property (readonly, nonatomic) int swfrVersion;
@property (readonly, nonatomic) int semanticRenderingVersion;
@property (readonly, nonatomic) int smartStyleRenderingVersion;

- (void)dealloc;

@end
