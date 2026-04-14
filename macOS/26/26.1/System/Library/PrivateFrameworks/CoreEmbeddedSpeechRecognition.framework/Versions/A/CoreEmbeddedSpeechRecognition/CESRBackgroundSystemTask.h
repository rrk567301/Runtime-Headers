@class NSObject;
@protocol OS_dispatch_queue;

@interface CESRBackgroundSystemTask : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)_isANECapableDevice;
- (BOOL)_isPeriodicPreheatEnabled;
- (void)_registerAndSubmitAllBGSystemTasks;
- (void)registerAndSubmitBGSystemTasks;

@end
