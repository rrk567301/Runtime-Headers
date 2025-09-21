@class CRImageReaderTrackingResult, VisionCoreSparseOpticalFlowSession, VisionCoreSparseOpticalFlowResult, NSObject;
@protocol OS_dispatch_queue;

@interface CRImageReaderTrackingSession : NSObject {
    BOOL _usesGroupedRegions;
    BOOL _debuggingSession;
    BOOL _ocrInProgress;
    BOOL _useLumaInput;
    BOOL _wasLastFrameUnstableForFirstAcquisition;
    float _downscaleRate;
    unsigned long long _trackingLevel;
    NSObject<OS_dispatch_queue> *_ocrQueue;
    unsigned long long _frameCount;
    unsigned long long _frameCountSinceLastAssociationEnded;
    unsigned long long _ocrFrameInterval;
    double _lastApplyOpticalFlowTrackingStartTime;
    double _replacedQuadArea;
    double _totalQuadArea;
    VisionCoreSparseOpticalFlowSession *_optFlowSession;
    VisionCoreSparseOpticalFlowResult *_debuggingResult;
    VisionCoreSparseOpticalFlowResult *_debuggingMemoryResult;
    double _lastOCRDispatchTime;
    double _lastFrameTime;
    struct queue<double, std::deque<double>> { struct deque<double, std::allocator<double>> { struct __split_buffer<double *, std::allocator<double *>> { double **__first_; double **__begin_; double **__end_; double **__cap_; } __map_; unsigned long long __start_; unsigned long long __size_; } c; } _ocrDispatchTimestamps;
    struct { void /* unknown type, empty encoding */ columns[3]; } _sceneHomography;
    struct { void /* unknown type, empty encoding */ columns[3]; } _accumulatedSceneHomography;
}

@property BOOL shouldIncludeLinesInTrackingResult;
@property BOOL didDispatchOCROnFrame;
@property BOOL didRunAssociationOnFrame;
@property unsigned long long ocrUpdateMode;
@property double lowFrequencyOCRElapsedTimeAboveMinimumStability;
@property (readonly) BOOL usesGroupedRegions;
@property (retain) CRImageReaderTrackingResult *latestResult;
@property (readonly) BOOL wasLatestFrameUnstableForFirstAcquisition;

+ (unsigned long long)regionTypeForTrackingLevel:(unsigned long long)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTrackingLevel:(unsigned long long)a0;
- (id)initWithTrackingLevel:(unsigned long long)a0 debuggingSession:(BOOL)a1;
- (id)initWithTrackingLevel:(unsigned long long)a0 ocrFrameInterval:(unsigned long long)a1;
- (void)updateOCRUpdateModeWithStability:(id)a0 frameDuration:(double)a1;

@end
