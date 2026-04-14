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
+ (void)clearIntegrityCheckBreadcrumb;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (void)appendLaunchTime;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (id)configureClass:(id)a0;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (BOOL)launchHealthCheck:(id)a0;

- (void)_launchSequence:(id)a0;
- (void)integrityCheckStarted;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreStarted;
- (void).cxx_destruct;
- (void)_launchSequenceWithSelfParams;
- (id)init;
- (int)configureInstance:(id)a0;
- (id)_allocateNOIEngineWithParams:(id)a0;

@end
