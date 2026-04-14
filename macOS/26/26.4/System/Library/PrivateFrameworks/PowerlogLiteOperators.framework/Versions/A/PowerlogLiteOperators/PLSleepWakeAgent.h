@class NSDate, PLTimer, PLXPCListenerOperatorComposition, PLEventForwardPowerStateEntry, PLIOKitOperatorComposition, PLSemaphore;

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
@property (readonly) PLIOKitOperatorComposition *iokitCoSocPower;
@property (retain) PLTimer *CoSocPowerTimer;
@property (retain) NSDate *lastEntryDate;
@property unsigned long long prevIntervalsPos;
@property unsigned long long prevPropertiesPos;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionPowerState;
+ (id)entryEventForwardDefinitionUserIdle;
+ (id)entryEventIntervalDefinitionKernelAssertions;
+ (id)entryEventNoneDefinitionKernelAssertionsLookup;
+ (id)entryEventNoneDefinitionPowerNapConfig;
+ (id)entryEventPointDefinitionCoSocPower;
+ (id)entryEventPointDefinitionCurrentKernelWakeTime;
+ (id)entryEventPointDefinitionCurrentMachWakeTime;
+ (id)entryEventPointDefinitionKernelState;
+ (id)entryEventPointDefinitionScheduledWake;
+ (id)entryEventPointDefinitionWakeGesture;

- (void)initOperatorDependancies;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (short)getSleepState;
- (void)logWakeEntries:(id)a0 withCurrentTime:(unsigned long long)a1;
- (void)registerForUserIdleNotification;
- (void)systemPoweredOn;
- (void)capabilitiesChanged:(unsigned int)a0;
- (id)driverWakeReasons;
- (unsigned long long)getCurrentWakeTime;
- (id)getCurrentWakeTimeKey;
- (BOOL)getIOPMKernelAssertionsData:(struct IOPMAssertionLogData { unsigned long long x0; struct Interval { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1[256]; unsigned long long x2; struct Properties { unsigned long long x0; char x1[64]; } x3[128]; } *)a0;
- (unsigned int)getIOPMRootDomain;
- (id)getLastSleepEntry;
- (id)getLastWakeEntry;
- (id)getPostWakeEntry:(unsigned long long)a0;
- (id)getSleepStatisticsApps;
- (unsigned long long)getSleepSubclassKey;
- (id)getThisWakeEntry:(id)a0 withCurrentWakeTime:(unsigned long long)a1 withIsDarkwake:(BOOL)a2 withDidSleep:(BOOL)a3;
- (void)logEventForwardUserIdle:(BOOL)a0;
- (void)logEventIntervalKernelAssertions:(id)a0;
- (void)logEventNoneKernelAssertionsLookup;
- (void)logEventNonePowerNapConfig;
- (void)logEventPointCurrentScheduledWake;
- (void)logEventPointKernelState;
- (void)logEventPointWakeGesture:(id)a0;
- (void)logSleepEntries:(id)a0;
- (void)registerForCapabilitiesChange;
- (id)sleepTriggers;
- (id)wakeReasonFromIORegistry;
- (id)wakeReasons;
- (id)wakeReasonsAsNSString;
- (id)wakeType;

@end
