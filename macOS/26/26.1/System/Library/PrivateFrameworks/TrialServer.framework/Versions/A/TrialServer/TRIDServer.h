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

- (void)_registerSetupAssistantFetchActivityOnce;
- (id)initWithPath:(id)a0;
- (void)start;
- (unsigned long long)_getDiskUsageInBytes;
- (void)_handleDictationIMNotificationLanguageChanged:(id)a0;
- (void)_excludeUserLevelTrialFromTimeMachineBackups;
- (void)_dispatchWhenUnlocked:(id /* block */)a0;
- (void)_registerXpcStreamEventHandler;
- (void)_logMetrics:(id)a0;
- (void).cxx_destruct;
- (void)_asyncStartWithMetrics:(id)a0;
- (BOOL)_handleUserSettingsNotificationWithContext:(id)a0;
- (void)_registerExternalParamChangeHandler;
- (id)init;

@end
