@class NSString, HMFTimer, HAPPairingIdentity, HMDBackgroundOperationGraph, NSOperationQueue, HMDHomeManager, NSMutableArray, NSNotificationCenter;
@protocol HMDBackgroundOperationManagerCurrentDeviceStateDataSource;

@interface HMDBackgroundOperationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *operationList;
@property (retain, nonatomic) NSMutableArray *dataSourceList;
@property (readonly, nonatomic) HMFTimer *expirationTimer;
@property (readonly, nonatomic) HMFTimer *deferralTimer;
@property (readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer;
@property (readonly, nonatomic) HMDBackgroundOperationGraph *opGraph;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) HAPPairingIdentity *hh1Key;
@property (retain, nonatomic) HAPPairingIdentity *hh2Key;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) id<HMDBackgroundOperationManagerCurrentDeviceStateDataSource> currentDeviceStateDataSource;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)findHomeWhereThisDeviceIsConfirmedPrimaryResident:(id)a0;
+ (id)getAllReachableAccessories:(id)a0;
+ (id)findAccessoryUsing:(id)a0 fromHome:(id)a1;
+ (id)getAllPairedAccessoriesOfAllHomes:(id)a0;
+ (id)findAccessoryUsing:(id)a0 homeManager:(id)a1;
+ (id)findUserWithUUID:(id)a0 fromHomeManager:(id)a1;
+ (id)findHomeUsingIdentifier:(id)a0 homeManager:(id)a1;

- (void)addOperation:(id)a0;
- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (void)registerForNotifications;
- (void)_runOperationsAfterEvaluatingPredicate:(id)a0;
- (void)removeOperationsForAccessoryIdentifier:(id)a0 operationKind:(id)a1 withBlock:(id /* block */)a2;
- (BOOL)shouldWeScheduleKeyRollOperationsOnThisDevice;
- (void)scheduleTimerToRetryDeferredOperations;
- (void)removeAllOperationForAccessoryIdentifier:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)scheduleHH2KeyRollIfNecessary;
- (void)__resetAndRebuildOperationGraphForUnitTesting;
- (void)removeOperation:(id)a0;
- (void)addDefaultDataSources;
- (void)scheduleHH2KeyRollForAccessory:(id)a0;
- (BOOL)_scheduleKeyRollForAccessory:(id)a0;
- (void)auditKeyChainEntryForAccessory:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)removeAllOperationsBeforeStartingHH2Migration;
- (void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)a0;
- (void)completeProcessingForOperation:(id)a0;
- (void)makeSureToLoadPairingIdentities;
- (void)scheduleTimerToCheckAndRemoveExpiredOperation;
- (BOOL)scheduleHH2KeyRollForAirPlayAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (void)startSchedulingKeyRollOperations:(BOOL)a0 forAccessory:(id)a1;
- (void)_scheduleHH2AirPlayKeyRollIfNecessary:(id)a0;
- (void)checkAndRemoveExpiredOperations;
- (id)getHH1ControllerKey;
- (id)getHH2ControllerKey;
- (void)addDataSource:(id)a0;
- (void)_scheduleHH2KeyRollIfNecessary:(id)a0;
- (BOOL)scheduleHH2KeyRollForAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (void)__removeAllDataSourcesForUnitTesting;
- (void)scheduleHH2KeyRollForAirPlayAccessory:(id)a0;
- (BOOL)scheduleOperationsWithDependenciesOnEachOtherFromArray:(id)a0;
- (id)__getReadyToExecuteOperations;
- (BOOL)addOperationDependency:(id)a0 dependsOn:(id)a1;
- (void)scheduleHH2KeyRollOperationForHome:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)_dataSourceHasUpdate:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (void)evaluateOperations;
- (void)removeOperationsForAccessoryIdentifier:(id)a0 operationKind:(id)a1;
- (void)_runOperation:(id)a0 withParameters:(id)a1;
- (id)initWithHomeManager:(id)a0 currentDeviceStateDataSource:(id)a1 notificationCenter:(id)a2;
- (void)__removeAllOperationsForUnitTesting;
- (void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)a0 isRunningOnResident:(BOOL)a1;
- (void).cxx_destruct;
- (void)dataSourceHasUpdate:(id)a0;
- (void)auditOwnerPairingForAirPlayAccessory:(id)a0 isRunningOnResident:(BOOL)a1;

@end
