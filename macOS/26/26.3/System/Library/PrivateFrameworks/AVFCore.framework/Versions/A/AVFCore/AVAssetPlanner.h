@class NSString, AVAssetPlannerIncrementalState, NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetPlanner : NSObject {
    NSURL *_sessionSegmentFileDirectory;
    struct OpaqueFigSimpleMutex { } *_sessionMutex;
    BOOL _writingSessionStarted;
    NSMutableArray *_trackPlanExecutors;
    id /* block */ _completionHandlerBlock;
    NSObject<OS_dispatch_queue> *_workQueue;
    AVAssetPlannerIncrementalState *_incrementalState;
}

@property (readonly) NSString *sessionName;

+ (BOOL)validateIntermediateFileDirectory:(id)a0 forSessionName:(id)a1 failureReason:(id *)a2;
+ (struct { long long x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })segmentBoundaryGuidelinesForVideoCodecType:(id)a0 videoEncoderSpecification:(id)a1;

- (void)dealloc;
- (id)buildAssemblyComposition:(id *)a0;
- (void)executePlanWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasTrackPlanExecutorForTrack:(int)a0;
- (id)initWithIntermediateFileDirectory:(id)a0 sessionName:(id)a1;
- (id)makeFreshIncrementalState;
- (id)makeIncrementalStateByResumptionOrStartFresh:(id *)a0;
- (BOOL)planTrack:(id)a0 withSegmentsGeneratedBy:(id /* block */)a1;
- (void)saveIncrementalState:(id *)a0;
- (void)writeSegmentsInTracks;

@end
