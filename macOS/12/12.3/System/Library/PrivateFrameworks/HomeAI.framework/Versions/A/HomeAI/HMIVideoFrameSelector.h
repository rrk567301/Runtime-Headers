@class NSString, NSMutableArray;
@protocol HMIMotionDetector, HMIVideoFrameSelectorDelegate;

@interface HMIVideoFrameSelector : HMIVideoAnalyzerProcessingNode <HMFLogging> {
    NSMutableArray *_candidates;
    BOOL _enabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _referenceInterval;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _targetInterval;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _expirationInterval;
}

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long maxCandidates;
@property (readonly) struct __CFArray { } *references;
@property (readonly) id<HMIMotionDetector> detector;
@property unsigned long long maxReferences;
@property BOOL resetReferences;
@property (weak) id<HMIVideoFrameSelectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)flush;
- (void)setSampleRate:(double)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 reference:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_drainCandidatesThatExpiredBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_synthesizeMotionDetectionWithTarget:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)prepareFrame:(struct opaqueCMSampleBuffer { } *)a0;

@end
