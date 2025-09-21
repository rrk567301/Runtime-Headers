@class NSString, NSObject, AVAssetTrackPlan;
@protocol OS_dispatch_semaphore;

@interface AVAssetTrackPlanExecutor : NSObject {
    AVAssetTrackPlan *_trackPlan;
    id /* block */ _writingSegmentCallbackBlock;
    NSObject<OS_dispatch_semaphore> *_writingSemaphore;
}

@property (readonly) BOOL requiresVideoCompression;
@property (readonly) int assemblyTrackID;
@property (readonly) NSString *mediaType;

+ (id)executorForTrackPlan:(id)a0 segmentWritingCallbackBlock:(id /* block */)a1;

- (void)dealloc;
- (id)makeFreshState:(id)a0;
- (void)callWritingSegmentCallbackForTrack:(int)a0 segmentState:(id)a1 isFirstSegment:(BOOL)a2 isLastSegment:(BOOL)a3 initialHDRMetadataState:(id)a4 finalHDRMetadataGenerationStateOut:(id *)a5 error:(id *)a6;
- (id)initWithTrackPlan:(id)a0 segmentWritingCallbackBlock:(id /* block */)a1;
- (id)makeSegmentURLFromBaseURL:(id)a0 trackID:(int)a1 segmentIndex:(long long)a2;

@end
