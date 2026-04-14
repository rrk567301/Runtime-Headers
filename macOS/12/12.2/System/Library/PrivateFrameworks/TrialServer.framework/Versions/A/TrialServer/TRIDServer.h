@class TRITaskQueue, TRIXPCActivityManager, TRIServerContext, NSObject;
@protocol OS_dispatch_queue;

@interface TRIDServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCActivityManager *_xpcActivityManager;
}

@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedServer;
+ (id)_triPath;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)initWithPath:(id)a0;
- (void)_updateSystemInfo;
- (void)_dispatchIfUnlocked:(id /* block */)a0;
- (void)_asyncStartWithMetrics:(id)a0;
- (void)_registerXpcStreamEventHandler;
- (void)_logMetrics:(id)a0 stopwatch:(id)a1;
- (BOOL)_shouldContinue;
- (void)_registerSetupAssistantFetchActivityOnce;
- (unsigned long long)_getDiskUsageInBytes;

@end
