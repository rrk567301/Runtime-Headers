@class TRITaskQueue, TRIXPCServerContextPromise, TRIXPCActivityManager, TRIServerContext, NSObject, TRIEagerExitManager;
@protocol OS_dispatch_queue;

@interface TRIDServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCServerContextPromise *_promise;
    TRIXPCActivityManager *_xpcActivityManager;
    TRIEagerExitManager *_eagerExitManager;
}

@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedServer;
+ (id)_triPath;

- (id)initWithPath:(id)a0;
- (void)_excludeUserLevelTrialFromTimeMachineBackups;
- (unsigned long long)_getDiskUsageInBytes;
- (void)_registerXpcStreamEventHandler;
- (void)start;
- (void)_registerSetupAssistantFetchActivityOnce;
- (void)_asyncStartWithMetrics:(id)a0;
- (void)_dispatchWhenUnlocked:(id /* block */)a0;
- (BOOL)_handleUserSettingsNotificationWithContext:(id)a0;
- (id)init;
- (void)_registerExternalParamChangeHandler;
- (void)_handleDictationIMNotificationLanguageChanged:(id)a0;
- (void)_logMetrics:(id)a0;
- (void).cxx_destruct;

@end
