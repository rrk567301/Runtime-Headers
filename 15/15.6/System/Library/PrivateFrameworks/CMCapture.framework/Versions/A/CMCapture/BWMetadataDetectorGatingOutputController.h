@class NSString, NSArray, FigCaptureLogSmartCameraGating, BWNodeOutput, BWSceneStabilityMonitor, NSObject;
@protocol OS_dispatch_group;

@interface BWMetadataDetectorGatingOutputController : NSObject <BWMetadataDetectedResultsObserver> {
    NSString *_name;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentPTS;
    NSArray *_detectionFrameRateRamp;
    char _detectionFrameRateRampStartIndex;
    BWSceneStabilityMonitor *_sceneStabilityMonitor;
    char _firstBufferAfterSceneChangeHasCodes;
    NSObject<OS_dispatch_group> *_detectorAvailableGroup;
    char _emittedFirstBufferAfterSceneChange;
    char _isSmartCameraSceneConfident;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _detectedCodesLastSeenPTS;
    char _detectionFrameRateRampIndex;
    char _forceSynchronizedControllersToRunDetectionImmediately;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BWNodeOutput *nodeOutput;
@property (nonatomic) char usesSceneClassifierToGateDetection;
@property (nonatomic) char shouldEmitFirstBufferAfterSceneChange;
@property (nonatomic) char sceneMotionEstimatesSupported;
@property (nonatomic) char lowPowerModeEnabled;
@property (nonatomic) char synchronizeWithOtherControllers;
@property (readonly, nonatomic) char shouldRunDetection;
@property (readonly, nonatomic) char shouldApplySceneMotion;
@property (readonly, nonatomic, getter=isHandlingFirstBufferAfterSceneChange) char handlingFirstBufferAfterSceneChange;
@property (readonly, nonatomic) char shouldEmitBuffer;
@property (readonly, nonatomic) char sceneLikelyToHaveCodes;
@property (nonatomic, getter=isSmartCameraSceneConfident) char smartCameraSceneConfident;
@property (nonatomic) long long lastDetectedCodesCount;
@property (retain, nonatomic) FigCaptureLogSmartCameraGating *logger;
@property (nonatomic) char forceSynchronizedControllersToRunDetectionImmediately;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastDetectionPTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)emitPixelBuffer:(struct __CVBuffer { } *)a0 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 appliedPrimaryCaptureRect:(char)a2;
- (void)enableDetectionFrameRateControllingWithRamp:(id)a0 startIndex:(char)a1;
- (id)initWithOutput:(id)a0 name:(id)a1 sceneStabilityMonitor:(id)a2 detectorAvailableGroup:(id)a3;
- (void)node:(id)a0 didEmitCodesCount:(long long)a1 emittedIdentifiers:(id)a2 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)prepareToEmitBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)setLastDetectedCodesCount:(long long)a0 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
