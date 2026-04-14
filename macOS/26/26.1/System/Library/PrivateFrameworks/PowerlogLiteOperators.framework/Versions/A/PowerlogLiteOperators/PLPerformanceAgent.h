@class PLNSNotificationOperatorComposition, NSSet, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *batteryEntryLogged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;
@property (readonly) NSSet *systemMemoryProcessNames;

+ (void)load;
+ (id)entryEventIntervalDefinitionExperiment;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventPointDefinitionVMTunables;
+ (id)entryEventPointDefinitionCodePrewarming;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionIdleReaper;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionRollout;

- (void)initOperatorDependancies;
- (id)descriptionForMemoryPressure:(int)a0;
- (int)convertCodePrewarmingSysctl:(id)a0;
- (void)logEventPointSystemMemoryPerProcess:(id)a0;
- (void)logEventPointDiskUsage;
- (void)logEventPointSystemMemory:(BOOL)a0;
- (void)logEventPointAPFSFragmentation;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (void)logEventPointJetsamPrority;
- (void)log;
- (void)logEventPointCodePrewarming;
- (int)countFD:(int)a0;
- (void)logEventPointDiskFragmentation;
- (void).cxx_destruct;
- (void)logSharedCacheStatisticsToCA:(id)a0;
- (void)logEventPointIdleReaper;
- (void)logSystemMemoryToCA:(id)a0;
- (int)countMachPort:(int)a0;
- (id)init;
- (void)logEventPointVMTunables;

@end
