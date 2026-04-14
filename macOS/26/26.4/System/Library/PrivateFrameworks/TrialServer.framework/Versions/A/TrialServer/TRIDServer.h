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
- (void)_handleDictationIMNotificationLanguageChanged:(id)a0;
- (BOOL)_handleUserSettingsNotificationWithContext:(id)a0;
- (void)_registerExternalParamChangeHandler;
- (void)_dispatchWhenUnlocked:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_registerXpcStreamEventHandler;
- (void)_registerSetupAssistantFetchActivityOnce;
- (id)init;
- (void)start;
- (void)_excludeUserLevelTrialFromTimeMachineBackups;
- (void)_logMetrics:(id)a0;
- (void)_asyncStartWithMetrics:(id)a0;
- (unsigned long long)_getDiskUsageInBytes;

@end
