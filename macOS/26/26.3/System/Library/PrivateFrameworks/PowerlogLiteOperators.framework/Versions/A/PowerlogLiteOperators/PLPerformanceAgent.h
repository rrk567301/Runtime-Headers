@class PLNSNotificationOperatorComposition, NSSet, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *batteryEntryLogged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;
@property (readonly) NSSet *systemMemoryProcessNames;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionIdleReaper;
+ (id)entryEventPointDefinitionCodePrewarming;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionRollout;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionVMTunables;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventIntervalDefinitionExperiment;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitions;

- (int)countFD:(int)a0;
- (void)log;
- (void)logEventPointDiskFragmentation;
- (void)logSystemMemoryToCA:(id)a0;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (void)logEventPointVMTunables;
- (id)init;
- (void)initOperatorDependancies;
- (void)logEventPointIdleReaper;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logEventPointDiskUsage;
- (void)logEventPointSystemMemoryPerProcess:(id)a0;
- (void)logSharedCacheStatisticsToCA:(id)a0;
- (void).cxx_destruct;
- (void)logEventPointCodePrewarming;
- (void)logEventPointSystemMemory:(BOOL)a0;
- (void)logEventPointJetsamPrority;
- (int)countMachPort:(int)a0;
- (void)logEventPointAPFSFragmentation;
- (int)convertCodePrewarmingSysctl:(id)a0;

@end
