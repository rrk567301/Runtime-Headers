@class NSArray, NSSet, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PLForegroundMonitor : NSObject {
    NSMutableSet *_foregroundBundleIDs;
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_monitoredBundleIdentifiers;
    NSMutableArray *_clients;
    BOOL _isObservingPhotosApp;
}

@property (class, readonly) PLForegroundMonitor *sharedInstance;
@property (class, readonly) NSArray *bundleIdentifiersToMonitorForSystemLibrary;

- (void)_updateMonitoring;
- (void)_locked_applicationDidMoveToBackground:(id)a0;
- (void)_applicationChangeToBG:(id)a0;
- (void)_stopMonitoring;
- (void).cxx_destruct;
- (id)startMonitoringBundleIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)init;
- (void)_startMonitoringBundleIdentifiers:(id)a0;
- (void)stopMonitoring:(id)a0;
- (void)_applicationChangeToFG:(id)a0;
- (void)_locked_applicationDidMoveToForeground:(id)a0;

@end
