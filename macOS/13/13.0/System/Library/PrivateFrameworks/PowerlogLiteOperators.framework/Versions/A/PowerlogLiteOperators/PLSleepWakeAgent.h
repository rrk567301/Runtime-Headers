@class PLSemaphore, PLXPCListenerOperatorComposition, PLEventForwardPowerStateEntry;

@interface PLSleepWakeAgent : PLAgent

@property unsigned int rootDomainConnect;
@property unsigned int pmNotifier;
@property struct IONotificationPort { } *systemPowerPortRef;
@property (retain) PLSemaphore *canSleepSemaphore;
@property double apSOCBasePower;
@property (retain) PLXPCListenerOperatorComposition *wakeGestureXPCListener;
@property struct __IOPMConnection { } *pmConnection;
@property (retain) PLEventForwardPowerStateEntry *lastSleepEntry;
@property (retain) PLEventForwardPowerStateEntry *lastWakeEntry;

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)railDefinitions;
+ (id)entryEventNoneDefinitionPowerNapConfig;
+ (id)entryEventPointDefinitionWakeGesture;
+ (id)entryEventPointDefinitionCurrentKernelWakeTime;
+ (id)entryEventPointDefinitionCurrentMachWakeTime;
+ (id)entryEventPointDefinitionKernelState;
+ (id)entryEventPointDefinitionScheduledWake;
+ (id)entryEventForwardDefinitionUserIdle;
+ (id)entryEventForwardDefinitionPowerState;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (short)getSleepState;
- (void)initOperatorDependancies;
- (void)logEventPointWakeGesture:(id)a0;
- (void)logEventPointKernelState;
- (void)logEventForwardUserIdle:(BOOL)a0;
- (void)systemPoweredOn;
- (void)capabilitiesChanged:(unsigned int)a0;
- (void)logSleepEntries:(id)a0;
- (unsigned long long)getCurrentWakeTime;
- (id)getCurrentWakeTimeKey;
- (id)getThisWakeEntry:(id)a0 withCurrentWakeTime:(unsigned long long)a1 withIsDarkwake:(BOOL)a2 withDidSleep:(BOOL)a3;
- (id)getPostWakeEntry:(unsigned long long)a0;
- (void)logWakeEntries:(id)a0 withCurrentTime:(unsigned long long)a1;
- (id)wakeReasons;
- (id)wakeReasonsAsNSString;
- (void)registerForCapabilitiesChange;
- (void)registerForUserIdleNotification;
- (unsigned int)getIOPMRootDomain;
- (unsigned long long)getSleepSubclassKey;
- (id)sleepTriggers;
- (id)wakeType;
- (id)driverWakeReasons;
- (id)wakeReasonFromIORegistry;
- (id)getLastSleepEntry;
- (id)getLastWakeEntry;
- (id)getSleepStatisticsApps;
- (void)logEventNonePowerNapConfig;
- (void)logEventPointCurrentScheduledWake;

@end
