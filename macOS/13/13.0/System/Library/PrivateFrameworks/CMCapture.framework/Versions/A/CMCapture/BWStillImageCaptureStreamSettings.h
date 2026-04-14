@class NSString, NSArray, BWBracketSettings, NSDictionary, NSMutableArray;
@protocol BWAdaptiveBracketingParameters;

@interface BWStillImageCaptureStreamSettings : NSObject <NSSecureCoding> {
    int _referenceFrameIndex;
    NSArray *_timeMachineBracketedCaptureParams;
    NSDictionary *_preBracketFrameCaptureParams;
    NSArray *_unifiedBracketedCaptureParams;
    NSArray *_captureFrameInfos;
    BOOL _lensStabilizationEnabledForClientBracket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _adaptiveBracketingLock;
    id<BWAdaptiveBracketingParameters> _adaptiveBracketingParameters;
    NSMutableArray *_adaptivePreBracketFrameCaptureParams;
    NSMutableArray *_adaptiveUnifiedBracketedCaptureParams;
    NSMutableArray *_adaptiveCaptureFrameInfos;
    BOOL _reachedEndOfAdaptiveBracketing;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _adaptiveBracketingLastFramePTS;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *portType;
@property (retain, nonatomic) NSString *sensorIDString;
@property (readonly, nonatomic) int captureType;
@property (readonly, nonatomic) unsigned long long captureFlags;
@property (readonly, nonatomic) BWBracketSettings *bracketSettings;
@property (readonly, nonatomic) NSArray *validBracketedCaptureSequenceNumbers;
@property (readonly, nonatomic) BOOL hasValidFrames;
@property (readonly, nonatomic) int expectedFrameCount;
@property (readonly, nonatomic) int expectedFrameCaptureCount;
@property (readonly, nonatomic) struct { int x0; int x1; int x2; } expectedFrameCaptureCounts;
@property (readonly, nonatomic) int expectedUltraHighResFrameCaptureCount;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredTimeMachinePTS;
@property (readonly, nonatomic) int timeMachineFrameCount;
@property (readonly, nonatomic) int expectedTimeMachineFrameCaptureCount;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPortType:(id)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 timeMachineFrameCount:(int)a3 bracketSettings:(id)a4 validBracketedCaptureSequenceNumbers:(id)a5;
- (id)initWithPortType:(id)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 referenceFrameIndex:(int)a3 timeMachineBracketedCaptureParams:(id)a4 preBracketFrameCaptureParams:(id)a5 unifiedBracketedCaptureParams:(id)a6 frameInfos:(id)a7;
- (id)captureFrameInfos;
- (int)referenceFrameIndex;
- (int)timeMachineReferenceFrameIndex;
- (id)captureFrameInfoForFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)isFrameCapturedForProcessing:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)sensorRawCapturedForFinalImageProcessing;
- (int)expectedEVZeroFrameCount;
- (int)expectedLongFrameCount;
- (int)expectedReferenceFrameCandidateCount;
- (id)timeMachineBracketedCaptureParams;
- (id)preBracketFrameCaptureParams;
- (id)unifiedBracketedCaptureParams;
- (void)setLensStabilizationEnabledForClientBracket:(BOOL)a0;
- (BOOL)lensStabilizationEnabledForClientBracket;
- (BOOL)isUnifiedBracketingErrorRecoveryFrame:(struct opaqueCMSampleBuffer { } *)a0 isReferenceFrame:(BOOL)a1;
- (id)initWithPortType:(id)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 adaptiveBracketingParameters:(id)a3;
- (id)adaptiveBracketingParameters;
- (id)adaptivePreBracketFrameCaptureParams;
- (id)adaptiveUnifiedBracketedCaptureParams;
- (int)adaptiveBracketingGroupCaptureCount;
- (int)currentExpectedAdaptiveBracketedFrameCaptureCount;
- (int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)a0;
- (BOOL)reachedEndOfAdaptiveBracketing;
- (void)setReachedEndOfAdaptiveBracketing:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })adaptiveBracketingLastFramePTS;
- (void)setAdaptiveBracketingLastFramePTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)addAdaptiveUnifiedBracketedCaptureParams:(id)a0 preBracketFrameCaptureParams:(id)a1 bracketedCaptureFrameInfos:(id)a2;

@end
