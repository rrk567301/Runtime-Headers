@class PLStateTrackingComposition, PLEntry, PLIOKitOperatorComposition, PLEntryNotificationOperatorComposition, NSDate;

@interface PLMacCPUGPUAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChangedNotifications;
@property (retain) PLIOKitOperatorComposition *graphicsControlComposition;
@property (retain) PLIOKitOperatorComposition *discreteGpuComposition;
@property BOOL isDiscreteGPUConnected;
@property (retain) PLStateTrackingComposition *stateTracker;
@property (retain) NSDate *lastPkgEnergySampleTime;
@property (retain) PLEntry *lastPkgEnergyEntry;
@property int nPstates;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (id)entryEventBackwardDefinitionDiscreteGPUAppList;
+ (id)entryEventBackwardDefinitionGPUPStateResidency;
+ (id)entryEventForwardDefinitionDiscreteGPUState;
+ (id)entryEventNoneDefinitionGPUPState;

- (void)log;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (unsigned int)GPUPMTClientConnection;
- (BOOL)isDownRevNeeded;
- (void)collectAndLogPackageEnergyStats:(id)a0;
- (id)diffPkgEnergyEntry:(id)a0;
- (void)handleStateChangeForPECIStats;
- (void)logEventBackwardDiscreteGPUAppList:(unsigned int)a0 withReason:(int)a1;
- (void)logEventBackwardGPUPStateResidency;
- (void)logEventBackwardPStates:(id)a0 Qos:(id)a1;
- (void)logEventBackwardPerCoreStats:(id)a0;
- (void)logEventBackwardPkgStats:(id)a0;
- (void)logEventForwardDiscreteGPUState:(BOOL)a0 withService:(unsigned int)a1 withReason:(int)a2;
- (void)logEventNoneAndForward;
- (void)logEventNoneGPUPState;
- (void)logPECIMetricsToCA:(id)a0 forDate:(id)a1;
- (id)readPStateResidencyDelta;

@end
