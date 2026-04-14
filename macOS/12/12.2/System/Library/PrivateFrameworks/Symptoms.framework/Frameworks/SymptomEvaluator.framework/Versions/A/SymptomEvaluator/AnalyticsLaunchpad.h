@class NSString, NSMutableDictionary, AWDAgent, NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {
    NSObject<OS_dispatch_queue> *launch_queue;
    NSObject<OS_dispatch_queue> *flows_queue;
    NSObject<OS_dispatch_queue> *nets_queue;
    NSObject<OS_dispatch_queue> *nois_queue;
    NSObject<OS_dispatch_queue> *service_queue;
    AWDAgent *awd;
}

@property (retain, nonatomic) NSMutableDictionary *launchParams;
@property (nonatomic) BOOL observingConsoleUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)clearIntegrityCheckBreadcrumb;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (id)symptomEvaluatorDatabaseContainerPath;
+ (BOOL)launchHealthCheck:(id)a0;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (void)appendLaunchTime;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (id)configureClass:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)integrityCheckStarted;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreStarted;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (int)configureInstance:(id)a0;
- (void)_launchSequence:(id)a0;
- (void)launchSequence;

@end
