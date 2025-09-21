@class NSObject;
@protocol OS_dispatch_queue;

@interface CESRBackgroundSystemTask : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isANECapableDevice;
- (BOOL)_isPeriodicPreheatEnabled;
- (void)_registerAndSubmitAllBGSystemTasks;
- (void)registerAndSubmitBGSystemTasks;

@end
