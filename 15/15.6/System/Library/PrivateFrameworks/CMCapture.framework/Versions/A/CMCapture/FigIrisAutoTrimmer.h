@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {
    char _motionAvailable;
    struct { double w; double x; double y; double z; } _captureMotionDelta;
    double _captureMotionDeltaPeriod;
    char _haveCaptureMotionDelta;
    struct { double w; double x; double y; double z; } _lastAttitude;
    struct { double w; double x; double y; double z; } _lastDelta;
    double _lastCheckedTimestamp;
    int _lastStatus;
    int _svmKernelType;
    int _svmVectorCount;
    int _svmParamCount;
    float _svmRBFRho;
    float _svmRBFGamma;
    NSArray *_svmKeys;
    NSData *_svmNormalization;
    NSData *_svmVectors;
    NSMutableArray *_motionSamples;
    unsigned long long _estimatedIntermediatesCount;
    char _intermediateLoggingEnabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _maxHoldDuration;
    long long _maxHoldFrames;
    double _bufferHistorySeconds;
    double _motionSampleRate;
    unsigned long long _nominalHistorySize;
    char _vitalityScoringEnabled;
    float _vitalityDocumentThreshold;
    unsigned int _vitalityScoringVersion;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _vitalityScoringSmartCameraPipelineVersion;
}

@property (readonly, nonatomic) char trimmingActive;
@property (readonly, nonatomic) unsigned int vitalityScoringVersion;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (double)videoFrameRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxHoldDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })beginTrimmingForStillImageHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 minimumPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (double)bufferHistorySeconds;
- (float)computeVitalityScoreForStillImageHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 movieRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (int)emissionStatusForHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)exportMotionSamples;
- (char)intermediateLoggingEnabled;
- (void)processCountOfVisibleVitalityObjects:(int)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)processISPMotionData:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)processInferences:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setBufferHistorySeconds:(double)a0;
- (void)setIntermediateLoggingEnabled:(char)a0;
- (void)setMaxHoldDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setVideoFrameRate:(double)a0;
- (void)setVitalityScoringEnabled:(char)a0;
- (void)setVitalityScoringSmartCameraPipelineVersion:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a0;
- (void)startMotionProcessing;
- (void)stopMotionProcessing;
- (char)vitalityScoringEnabled;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; })vitalityScoringSmartCameraPipelineVersion;

@end
