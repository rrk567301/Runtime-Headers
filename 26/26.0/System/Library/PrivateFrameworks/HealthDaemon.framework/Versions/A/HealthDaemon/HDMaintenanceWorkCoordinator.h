@class HDContentProtectionManager, NSString, HDAssertionManager, NSMutableSet, HDAnalyticsSubmissionCoordinator, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver, HDMaintenanceOperationDelegate, HDContentProtectionObserver, HDDiagnosticObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_maintenanceWorkQueue;
    BOOL _suspended;
    NSMutableArray *_pendingOperations;
    NSMutableArray *_pendingLockingOperations;
    NSMutableSet *_activeOperations;
    NSObject<OS_dispatch_source> *_timeoutSource;
    HDAnalyticsSubmissionCoordinator *_analyticsCoordinator;
    HDAssertionManager *_assertionManager;
    HDContentProtectionManager *_contentProtectionManager;
}

@property (readonly) BOOL suspended;
@property (readonly) unsigned long long pendingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)cancelAllOperations;
- (id)diagnosticDescription;
- (void)dealloc;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (BOOL)startNextOperationWithNameImmediately:(id)a0;
- (id)initWithAnalyticsCoordinator:(id)a0 contentProtectionManager:(id)a1;
- (id)takeMaintenanceSuspensionAssertionForOwner:(id)a0;
- (void)startOperationImmediately:(id)a0;
- (void)enqueueMaintenanceOperation:(id)a0;
- (void)operationDidFinish:(id)a0;
- (void).cxx_destruct;

@end
