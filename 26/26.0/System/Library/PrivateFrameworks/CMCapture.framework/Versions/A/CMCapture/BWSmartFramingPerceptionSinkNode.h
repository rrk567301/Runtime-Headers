@class NSMutableArray, NSString, NSObject, BWFigVideoCaptureDevice;
@protocol OS_dispatch_queue;

@interface BWSmartFramingPerceptionSinkNode : BWSinkNode <BWInferenceFormatProvider> {
    BWFigVideoCaptureDevice *_captureDevice;
    unsigned int _camGazeInferenceMajorVersion;
    unsigned int _maxFaceCountForInference;
    NSObject<OS_dispatch_queue> *_inferenceQueue;
    BOOL _previousInferenceComplete;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _inferenceSkipInterval;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastInferenceFramePTS;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inferenceLock;
    NSMutableArray *_faceGroupIDsForInference;
    struct opaqueCMSampleBuffer { } *_lastSampleBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)dealloc;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (void)_waitForInferenceToComplete;
- (id)initWithSinkID:(id)a0 captureDevice:(id)a1 inferenceScheduler:(id)a2;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;

@end
