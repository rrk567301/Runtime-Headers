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
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (void)appendLaunchTime;
+ (BOOL)launchHealthCheck:(id)a0;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (id)configureClass:(id)a0;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (void)clearIntegrityCheckBreadcrumb;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (int)configureInstance:(id)a0;
- (void)destroyPersistentStoreStarted;
- (void)_launchSequenceWithSelfParams;
- (id)init;
- (void)_launchSequence:(id)a0;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (id)_allocateNOIEngineWithParams:(id)a0;
- (void)integrityCheckStarted;

@end
