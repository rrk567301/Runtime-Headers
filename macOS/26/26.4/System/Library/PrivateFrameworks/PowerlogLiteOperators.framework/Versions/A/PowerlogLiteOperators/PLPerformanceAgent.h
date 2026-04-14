@class PLNSNotificationOperatorComposition, NSSet, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *batteryEntryLogged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;
@property (readonly) NSSet *systemMemoryProcessNames;

+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (void)load;
+ (id)entryEventPointDefinitionCodePrewarming;
+ (id)entryEventPointDefinitionRollout;
+ (id)entryEventIntervalDefinitions;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventIntervalDefinitionExperiment;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionIdleReaper;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionVMTunables;
+ (id)entryEventPointDefinitionJetsamPriority;

- (void)initOperatorDependancies;
- (void)log;
- (int)countFD:(int)a0;
- (void)logSharedCacheStatisticsToCA:(id)a0;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logEventPointIdleReaper;
- (int)convertCodePrewarmingSysctl:(id)a0;
- (void)logEventPointDiskUsage;
- (void)logEventPointVMTunables;
- (void)logEventPointJetsamPrority;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (void)logEventPointCodePrewarming;
- (void)logEventPointSystemMemory:(BOOL)a0;
- (void)logEventPointSystemMemoryPerProcess:(id)a0;
- (void)logEventPointAPFSFragmentation;
- (void).cxx_destruct;
- (int)countMachPort:(int)a0;
- (void)logEventPointDiskFragmentation;
- (id)init;
- (void)logEventPointVMStats;
- (void)logSystemMemoryToCA:(id)a0;

@end
