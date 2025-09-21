@class NSString, NSDate;

@interface BWMemoryAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int _buttonMashRate0Counter;
    NSDate *_creationTime;
    BOOL _captureDevicePositionFront;
    BOOL _captureDevicePositionBack;
    BOOL _captureDeviceTypeBravo;
    BOOL _captureDeviceTypeLiDAR;
    BOOL _captureDeviceTypeOther;
    BOOL _captureDeviceTypePearl;
    BOOL _captureDeviceTypeSuperBravo;
    BOOL _captureDeviceTypeWideBravo;
    BOOL _capturePortTypeBackSuperWide;
    BOOL _capturePortTypeBackTelephoto;
    BOOL _capturePortTypeOther;
    BOOL _capturePortTypeBack;
    BOOL _captureResolutionDefault;
    BOOL _captureResolutionEnhanced;
    BOOL _captureResolutionUltraHigh;
    BOOL _captureTypeUB;
    BOOL _captureTypeDeepFusion;
    BOOL _captureTypeLearnedFusion;
    BOOL _captureTypeDigitalFlash;
    BOOL _captureTypeOther;
    BOOL _captureTypeWYSIWYG;
    unsigned int _maxButtonMashCount;
}

@property (nonatomic) BOOL burst;
@property (readonly, nonatomic) unsigned int captureCount;
@property (nonatomic) BOOL clientIsCameraOrDerivative;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) int deviceType;
@property (nonatomic) BOOL graphHasVideoDataOutput;
@property (nonatomic) BOOL graphContainsMovieFilePipeline;
@property (nonatomic) BOOL graphContainsDepthDataPipeline;
@property (nonatomic) BOOL greenGhostMitigation;
@property (nonatomic) BOOL scaledStillCaptureTaken;
@property (nonatomic) BOOL intelligentDistortionCorrection;
@property (nonatomic) BOOL livePhoto;
@property (nonatomic) BOOL proRaw;
@property (nonatomic) BOOL proRawPlusProcessedPhotoEncoding;
@property (nonatomic) BOOL quickTakeVideo;
@property (nonatomic) BOOL portraitRequested;
@property (nonatomic) BOOL portraitDepthGenerationAttempted;
@property (nonatomic) BOOL portraitEffectApplied;
@property (nonatomic) BOOL faceDetectedInScene;
@property (nonatomic) BOOL photographicStyleUsed;
@property (nonatomic) BOOL enhancedResolutionPortraitSuggested;
@property (nonatomic) BOOL enhancedResolutionPortraitApplied;
@property (nonatomic) unsigned long long peakFootprintDifference;
@property (nonatomic) BOOL cinematicVideo;
@property (nonatomic) BOOL hdrVideo;
@property (nonatomic) BOOL proResVideo;
@property (nonatomic) unsigned int videoMaxFrameRate;
@property (nonatomic) unsigned int videoMinDimension;
@property (nonatomic) unsigned int videoRecordingCount;
@property (nonatomic) int maxVideoStabilizationMethod;
@property (nonatomic) int videoStabilizationStrength;
@property (nonatomic) BOOL dockKitDeviceConnected;
@property (nonatomic) int colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)dealloc;
- (id)init;
- (id)eventName;
- (id)eventDictionary;
- (void)addCaptureType:(int)a0;
- (void)addDeviceType:(int)a0;
- (void)addHighResolutionFlavor:(int)a0;
- (void)addPortType:(id)a0;
- (void)updateButtonMash:(BOOL)a0;

@end
