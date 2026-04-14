@class PLNSNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionRollout;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventIntervalDefinitionExperiment;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointSystemMemory;
- (void)logEventPointDiskUsage;
- (void)logEventPointJetsamPrority;
- (void)logEventPointDiskFragmentation;
- (void)logEventPointAPFSFragmentation;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logSystemMemoryToCA:(id)a0;
- (int)countFD:(int)a0;
- (int)countMachPort:(int)a0;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;

@end
