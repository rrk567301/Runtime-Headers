@class NSString, NSDate;

@interface BWMemoryAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int _buttonMashRate0Counter;
    NSDate *_creationTime;
    char _captureDevicePositionFront;
    char _captureDevicePositionBack;
    char _captureDeviceTypeBravo;
    char _captureDeviceTypeLiDAR;
    char _captureDeviceTypeOther;
    char _captureDeviceTypePearl;
    char _captureDeviceTypeSuperBravo;
    char _captureDeviceTypeWideBravo;
    char _capturePortTypeBackSuperWide;
    char _capturePortTypeBackTelephoto;
    char _capturePortTypeOther;
    char _capturePortTypeBack;
    char _captureResolutionDefault;
    char _captureResolutionEnhanced;
    char _captureResolutionUltraHigh;
    char _captureTypeUB;
    char _captureTypeDeepFusion;
    char _captureTypeDigitalFlash;
    char _captureTypeOther;
    char _captureTypeWYSIWYG;
    unsigned int _maxButtonMashCount;
    unsigned int _captureCount;
}

@property (nonatomic) char burst;
@property (nonatomic) char clientIsCameraOrDerivative;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) int deviceType;
@property (nonatomic) char graphHasVideoDataOutput;
@property (nonatomic) char graphContainsMovieFilePipeline;
@property (nonatomic) char graphContainsDepthDataPipeline;
@property (nonatomic) char greenGhostMitigation;
@property (nonatomic) char scaledStillCaptureTaken;
@property (nonatomic) char intelligentDistortionCorrection;
@property (nonatomic) char livePhoto;
@property (nonatomic) char proRaw;
@property (nonatomic) char proRawPlusProcessedPhotoEncoding;
@property (nonatomic) char quickTakeVideo;
@property (nonatomic) char portraitRequested;
@property (nonatomic) char portraitDepthGenerationAttempted;
@property (nonatomic) char portraitEffectApplied;
@property (nonatomic) char faceDetectedInScene;
@property (nonatomic) char photographicStyleUsed;
@property (nonatomic) char enhancedResolutionPortraitSuggested;
@property (nonatomic) char enhancedResolutionPortraitApplied;
@property (nonatomic) unsigned long long peakFootprintDifference;
@property (nonatomic) char cinematicVideo;
@property (nonatomic) char hdrVideo;
@property (nonatomic) char proResVideo;
@property (nonatomic) unsigned int videoMaxFrameRate;
@property (nonatomic) unsigned int videoMinDimension;
@property (nonatomic) unsigned int videoRecordingCount;
@property (nonatomic) int maxVideoStabilizationMethod;
@property (nonatomic) int videoStabilizationStrength;
@property (nonatomic) char dockKitDeviceConnected;
@property (nonatomic) int colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (void)addCaptureType:(int)a0;
- (id)eventDictionary;
- (void)addDeviceType:(int)a0;
- (void)addHighResolutionFlavor:(int)a0;
- (void)addPortType:(id)a0;
- (void)updateButtonMash:(char)a0;

@end
