@class PLNSNotificationOperatorComposition, NSSet, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *batteryEntryLogged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;
@property (readonly) NSSet *systemMemoryProcessNames;

+ (id)entryEventIntervalDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionVMTunables;
+ (id)entryEventIntervalDefinitionExperiment;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventPointDefinitionCodePrewarming;
+ (id)entryEventPointDefinitionRollout;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionIdleReaper;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionDiskFragmentation;

- (void)logEventPointCodePrewarming;
- (void)initOperatorDependancies;
- (void)log;
- (int)convertCodePrewarmingSysctl:(id)a0;
- (void)logEventPointSystemMemoryPerProcess:(id)a0;
- (void)logEventPointDiskFragmentation;
- (void)logSystemMemoryToCA:(id)a0;
- (void)logEventPointAPFSFragmentation;
- (void).cxx_destruct;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (void)logSharedCacheStatisticsToCA:(id)a0;
- (void)logEventPointVMTunables;
- (void)logEventPointDiskUsage;
- (void)logEventPointIdleReaper;
- (id)init;
- (int)countFD:(int)a0;
- (void)logEventPointJetsamPrority;
- (void)logEventPointSystemMemory:(BOOL)a0;
- (int)countMachPort:(int)a0;

@end
