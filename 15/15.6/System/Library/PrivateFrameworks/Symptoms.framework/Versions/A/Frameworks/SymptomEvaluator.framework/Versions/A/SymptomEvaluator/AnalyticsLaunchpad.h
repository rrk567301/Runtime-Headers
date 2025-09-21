@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {
    char _launchSequenceStarted;
    char _observingConsoleUserName;
    NSObject<OS_dispatch_queue> *flows_queue;
    NSObject<OS_dispatch_queue> *nets_queue;
    NSObject<OS_dispatch_queue> *service_queue;
}

@property (retain, nonatomic) NSMutableDictionary *launchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;
+ (void)appendLaunchTime;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (void)clearIntegrityCheckBreadcrumb;
+ (char)foundBreadcrumb:(id)a0;
+ (char)foundDestroyPersistentStoreBreadcrumb;
+ (char)foundInitialWorkspaceSaveBreadcrumb;
+ (char)foundIntegrityCheckBreadcrumbAboveThreshold:(char)a0;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (char)launchHealthCheck:(id)a0;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)deleteDatabaseCompleted:(char)a0 error:(id)a1;
- (void)destroyPersistentStoreCompleted:(char)a0 error:(id)a1;
- (void)destroyPersistentStoreStarted;
- (void)integrityCheckCompleted:(char)a0 error:(id)a1;
- (void)integrityCheckStarted;
- (id)_allocateNOIEngineWithParams:(id)a0;
- (void)_launchSequence:(id)a0;
- (void)_launchSequenceWithSelfParams;
- (int)configureInstance:(id)a0;

@end
