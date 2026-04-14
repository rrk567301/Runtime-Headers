@class PLNSNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionRollout;
+ (id)entryEventIntervalDefinitionExperiment;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logSystemMemoryToCA:(id)a0;
- (void)logEventPointSystemMemory;
- (void)logEventPointDiskUsage;
- (void)logEventPointDiskFragmentation;
- (void)logEventPointJetsamPrority;
- (int)countFD:(int)a0;
- (int)countMachPort:(int)a0;
- (void)logEventPointAPFSFragmentation;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;

@end
