@class PLNSNotificationOperatorComposition, NSSet, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *batteryEntryLogged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;
@property (readonly) NSSet *systemMemoryProcessNames;

+ (void)load;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventIntervalDefinitionExperiment;
+ (id)entryEventPointDefinitionRollout;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionVMTunables;
+ (id)entryEventPointDefinitionCodePrewarming;
+ (id)entryEventPointDefinitionIdleReaper;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionDiskUsage;

- (void)initOperatorDependancies;
- (void)logEventPointJetsamPrority;
- (void)logSystemMemoryToCA:(id)a0;
- (void)logEventPointDiskFragmentation;
- (void)log;
- (void)logEventPointIdleReaper;
- (void)logEventPointAPFSFragmentation;
- (int)convertCodePrewarmingSysctl:(id)a0;
- (void)logEventPointDiskUsage;
- (id)init;
- (int)countFD:(int)a0;
- (void)logEventPointCodePrewarming;
- (void)logSharedCacheStatisticsToCA:(id)a0;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logEventPointVMTunables;
- (int)countMachPort:(int)a0;
- (void)logEventPointSystemMemoryPerProcess:(id)a0;
- (void).cxx_destruct;
- (void)logEventPointSystemMemory:(BOOL)a0;

@end
