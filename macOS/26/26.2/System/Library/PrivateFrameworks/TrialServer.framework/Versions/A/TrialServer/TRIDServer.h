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

+ (id)_triPath;
+ (id)sharedServer;

- (void)_handleDictationIMNotificationLanguageChanged:(id)a0;
- (void)_dispatchWhenUnlocked:(id /* block */)a0;
- (void)_registerExternalParamChangeHandler;
- (void).cxx_destruct;
- (void)start;
- (void)_excludeUserLevelTrialFromTimeMachineBackups;
- (unsigned long long)_getDiskUsageInBytes;
- (id)initWithPath:(id)a0;
- (id)init;
- (void)_asyncStartWithMetrics:(id)a0;
- (void)_registerXpcStreamEventHandler;
- (void)_logMetrics:(id)a0;
- (void)_registerSetupAssistantFetchActivityOnce;
- (BOOL)_handleUserSettingsNotificationWithContext:(id)a0;

@end
