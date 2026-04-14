@class NSString, NSObject;
@protocol OS_dispatch_queue, FCBackgroundTaskable;

@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving> {
    id<FCBackgroundTaskable> _backgroundTaskable;
    BOOL _inBackground;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id /* block */ _pendingSaveHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activityObservingApplicationDidEnterBackground;
- (void)_saveIfNeeded;
- (void)activityObservingApplicationWillResignActiveWithSceneID:(id)a0;
- (void)activityObservingApplicationDidBecomeActive;
- (void).cxx_destruct;
- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;
- (id)initWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;
- (void)activityObservingApplicationWillTerminate;

@end
