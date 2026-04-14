@class HMFTimer, NSString, HMDBackgroundOperationGraph, HAPPairingIdentity, NSOperationQueue, NSMutableArray, HMDHomeManager;

@interface HMDBackgroundOperationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *operationList;
@property (retain, nonatomic) NSMutableArray *dataSourceList;
@property (retain, nonatomic) NSString *backgroundOperationsDataStorePath;
@property (readonly, nonatomic) HMFTimer *expirationTimer;
@property (readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer;
@property (readonly, nonatomic) HMDBackgroundOperationGraph *opGraph;
@property (retain, nonatomic) HAPPairingIdentity *hh1Key;
@property (retain, nonatomic) HAPPairingIdentity *hh2Key;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (id)sharedManager;
+ (id)logCategory;
+ (id)getAllPairedAccessoriesOfAllHomes:(id)a0;
+ (id)getAllReachableAccessories:(id)a0;
+ (id)findHomeWhereThisDeviceIsConfirmedPrimaryResident:(id)a0;
+ (id)findAccessoryUsing:(id)a0 homeManager:(id)a1;
+ (id)findAccessoryUsing:(id)a0 fromHome:(id)a1;
+ (id)findHomeUsingIdentifier:(id)a0 homeManager:(id)a1;

- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)addDataSource:(id)a0;
- (void)registerForNotifications;
- (void)removeOperation:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)dumpState;
- (void)scheduleHH2KeyRollIfNecessary;
- (void)scheduleHH2KeyRollForAccessory:(id)a0;
- (void)scheduleHH2KeyRollForAirPlayAccessory:(id)a0;
- (BOOL)_scheduleKeyRollForAccessory:(id)a0;
- (void)_scheduleHH2AirPlayKeyRollIfNecessary:(id)a0;
- (void)_scheduleHH2KeyRollIfNecessary:(id)a0;
- (void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)a0;
- (void)startSchedulingKeyRollOperations:(BOOL)a0 forAccessory:(id)a1;
- (void)makeSureToLoadPairingIdentities;
- (void)scheduleHH2KeyRollOperationForHome:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)auditKeyChainEntryForAccessory:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)auditOwnerPairingForAirPlayAccessory:(id)a0 isRunningOnResident:(BOOL)a1;
- (BOOL)scheduleHH2KeyRollForAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (BOOL)scheduleHH2KeyRollForAirPlayAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (id)getHH1ControllerKey;
- (id)getHH2ControllerKey;
- (BOOL)shouldWeScheduleKeyRollOperationsOnThisDevice;
- (id)initWithLocalStorePath:(id)a0;
- (BOOL)addOperationDependency:(id)a0 dependsOn:(id)a1;
- (void)addDefaultDataSources;
- (void)dataSourceHasUpdate:(id)a0;
- (void)_dataSourceHasUpdate:(id)a0;
- (void)_runOperationsAfterEvaluatingPredicate:(id)a0;
- (void)_runOperation:(id)a0 withParameters:(id)a1;
- (void)checkAndRemoveExpiredOperations;
- (void)scheduleTimerToCheckAndRemoveExpiredOperation;
- (void)completeProcessingForOperation:(id)a0;
- (void)evaluateOperations;
- (id)unarchiveFromDisk;
- (void)removeAllOperationsBeforeStartingHH2Migration;
- (void)removeAllOperationForAccessoryIdentifier:(id)a0;
- (void)removeOperationsForAccessoryIdentifier:(id)a0 operationKind:(id)a1;
- (id)__getReadyToExecuteOperations;
- (void)__removeAllDataSourcesForUnitTesting;
- (void)__removeAllOperationsForUnitTesting;
- (void)__resetAndRebuildOperationGraphForUnitTesting;
- (void)__clearLocalStoreForUnitTesting;
- (id)__initForUnitTesting;
- (id)__unarchiveFromDiskForUnitTesting;
- (void)__archiveToDiskForUnitTesting:(id)a0;

@end
