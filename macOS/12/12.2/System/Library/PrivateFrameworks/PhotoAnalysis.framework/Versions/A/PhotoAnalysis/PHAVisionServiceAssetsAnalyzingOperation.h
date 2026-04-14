@class PHAVisionServiceWorker, PHAAnalysisWorkerJob, NSObject;
@protocol PHAVisionServiceAssetsAnalyzingOperationDelegate, OS_dispatch_semaphore;

@interface PHAVisionServiceAssetsAnalyzingOperation : NSOperation {
    PHAVisionServiceWorker *_visionServiceWorker;
    PHAAnalysisWorkerJob *_job;
    id<PHAVisionServiceAssetsAnalyzingOperationDelegate> _delegate;
    NSObject<OS_dispatch_semaphore> *_executionCompletionSemaphore;
    int _state;
}

+ (id)operationForVisionServiceWorker:(id)a0 job:(id)a1;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (id)job;
- (id)initWithVisionServiceWorker:(id)a0 job:(id)a1;
- (id)visionServiceWorker;
- (void)cancelAndWaitForCompletion;

@end
