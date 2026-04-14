@class TRITaskQueue, TRIXPCServerContextPromise, TRIXPCActivityManager, TRIServerContext, NSObject;
@protocol OS_dispatch_queue;

@interface TRIDServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCServerContextPromise *_promise;
    TRIXPCActivityManager *_xpcActivityManager;
}

@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedServer;
+ (id)_triPath;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)initWithPath:(id)a0;
- (void)_dispatchWhenUnlocked:(id /* block */)a0;
- (void)_updateSystemInfo;
- (void)_asyncStartWithMetrics:(id)a0;
- (void)_registerXpcStreamEventHandler;
- (void)_logMetrics:(id)a0 stopwatch:(id)a1;
- (void)_registerSetupAssistantFetchActivityOnce;
- (unsigned long long)_getDiskUsageInBytes;

@end
