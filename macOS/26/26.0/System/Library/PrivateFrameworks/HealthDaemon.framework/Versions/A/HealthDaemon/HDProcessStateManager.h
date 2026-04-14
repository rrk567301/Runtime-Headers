@class NSObject, NSString, NSMutableDictionary, NSHashTable, NSSet, BKSApplicationStateMonitor, HDRBSProcessStateProvider;
@protocol HDApplicationStateMonitorProvider, OS_dispatch_queue;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {
    NSMutableDictionary *_processObserversByBundleID;
    NSHashTable *_foregroundClientProcessObservers;
    NSSet *_foregroundClientBundleIdentifiers;
    BKSApplicationStateMonitor *_applicationMonitor;
    HDRBSProcessStateProvider *_rbsProcessStateProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSMutableDictionary *_processInfoByBundleID;
}

@property (readonly, weak, nonatomic) id<HDApplicationStateMonitorProvider> applicationStateMonitorProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diagnosticDescription;
- (BOOL)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)a0;
- (BOOL)applicationIsForeground:(id)a0;
- (void)dealloc;
- (id)initWithApplicationStateMonitorProvider:(id)a0;
- (BOOL)registerObserver:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)isApplicationFrontBoardVisibleForBundleIdentifier:(id)a0;
- (BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)a0;
- (id)init;
- (BOOL)isApplicationStateForegroundForBundleIdentifier:(id)a0;
- (BOOL)isApplicationStateBackgroundRunningForBundleIdentifier:(id)a0;
- (void)unregisterObserver:(id)a0 forBundleIdentifier:(id)a1;
- (int)processIdentifierForApplicationIdentifier:(id)a0;
- (unsigned int)applicationStateForBundleIdentifier:(id)a0;
- (BOOL)processIsForeground:(int)a0;
- (void)unregisterForegroundClientProcessObserver:(id)a0;
- (void)registerForegroundClientProcessObserver:(id)a0;
- (void).cxx_destruct;

@end
