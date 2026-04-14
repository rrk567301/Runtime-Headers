@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;

@interface PLForegroundMonitor : NSObject {
    NSMutableSet *_foregroundBundleIDs;
    NSObject<OS_dispatch_queue> *_applicationStateMonitorQueue;
}

@property (weak, nonatomic) id<PLForegroundMonitorDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_applicationChangeToBG:(id)a0;
- (void)_applicationChangeToFG:(id)a0;
- (void)_locked_applicationDidMoveToBackground:(id)a0;
- (void)_locked_applicationDidMoveToForeground:(id)a0;

@end
