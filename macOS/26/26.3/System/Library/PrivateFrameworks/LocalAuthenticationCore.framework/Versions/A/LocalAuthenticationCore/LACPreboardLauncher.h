@class NSObject;
@protocol LACDeviceLifecycleManaging, OS_dispatch_queue;

@interface LACPreboardLauncher : NSObject {
    id /* block */ _launchCompletion;
    id<LACDeviceLifecycleManaging> _lifecycleManager;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
- (void)_finishLaunchingWithError:(id)a0;
- (id)initWithLifecycleManager:(id)a0;
- (void)launchPreboardWithCompletion:(id /* block */)a0;

@end
