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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (char)applicationIsForeground:(id)a0;
- (unsigned int)applicationStateForBundleIdentifier:(id)a0;
- (id)initWithApplicationStateMonitorProvider:(id)a0;
- (char)isApplicationFrontBoardVisibleForBundleIdentifier:(id)a0;
- (char)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)a0;
- (char)isApplicationStateBackgroundRunningForBundleIdentifier:(id)a0;
- (char)isApplicationStateForegroundForBundleIdentifier:(id)a0;
- (char)isApplicationStateSuspendedForBundleIdentifier:(id)a0;
- (int)processIdentifierForApplicationIdentifier:(id)a0;
- (char)processIsForeground:(int)a0;
- (void)registerForegroundClientProcessObserver:(id)a0;
- (char)registerObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)unregisterForegroundClientProcessObserver:(id)a0;
- (void)unregisterObserver:(id)a0 forBundleIdentifier:(id)a1;

@end
