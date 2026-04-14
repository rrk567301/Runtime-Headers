@class NSProgress, NSMutableSet, BRCPipelineJobQueue, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCPipelineStageHandlerBase : NSObject {
    BRCPipelineJobQueue *_enqueuedJobs;
    NSMutableSet *_activelyExecutingJobs;
    NSMutableSet *_cancelledActivelyExecutingJobs;
    NSProgress *_activelyExecutingProgress;
    NSObject<OS_dispatch_source> *_schedulingSource;
    NSObject<OS_dispatch_queue> *_schedulingQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    BOOL _suspended;
    BOOL _schedulingEnabled;
}

- (void)schedule;
- (void)dealloc;
- (void)cancelJob:(id)a0;
- (id)init;
- (id)description;
- (void)addJob:(id)a0;
- (void)dumpToContext:(id)a0;
- (void).cxx_destruct;
- (id)_asJobCostVendor;
- (void)_cancelActiveBatchIfNecessary;
- (void)_completedJob:(id)a0 withRecoveryStage:(unsigned long long)a1 error:(id)a2;
- (id)_groupIdentifierForJob:(id)a0;
- (void)_initializeSourceAndQueues;
- (void)_pauseScheduling;
- (void)_resumeScheduling;
- (void)disableScheduling;
- (void)enableScheduling;
- (void)setupWithInternalPipelineJobCompletionHandler:(id /* block */)a0;

@end
