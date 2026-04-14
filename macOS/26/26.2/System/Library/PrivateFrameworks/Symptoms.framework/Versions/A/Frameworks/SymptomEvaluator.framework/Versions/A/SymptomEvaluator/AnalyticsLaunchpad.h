@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {
    BOOL _launchSequenceStarted;
    BOOL _observingConsoleUserName;
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
+ (void)appendLaunchTime;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (BOOL)launchHealthCheck:(id)a0;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)clearIntegrityCheckBreadcrumb;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (id)configureClass:(id)a0;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (BOOL)foundBreadcrumb:(id)a0;

- (id)_allocateNOIEngineWithParams:(id)a0;
- (void)integrityCheckStarted;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)_launchSequenceWithSelfParams;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (int)configureInstance:(id)a0;
- (void).cxx_destruct;
- (void)_launchSequence:(id)a0;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreStarted;
- (id)init;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;

@end
