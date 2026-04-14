@class PHAWorkerJob, NSObject;
@protocol OS_dispatch_queue;

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PHAWorkerJob *_job;
    BOOL _continueReporting;
}

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)job;
- (id)initWithJob:(id)a0;
- (void)_extendTimeoutAndDispatchAgainIfNecessary;

@end
