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
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (void)appendLaunchTime;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (BOOL)launchHealthCheck:(id)a0;
+ (id)configureClass:(id)a0;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (void)clearIntegrityCheckBreadcrumb;
+ (void)clearInitialWorkspaceSaveBreadcrumb;

- (void)_launchSequenceWithSelfParams;
- (int)configureInstance:(id)a0;
- (id)_allocateNOIEngineWithParams:(id)a0;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreStarted;
- (void)_launchSequence:(id)a0;
- (id)init;
- (void)integrityCheckStarted;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;

@end
