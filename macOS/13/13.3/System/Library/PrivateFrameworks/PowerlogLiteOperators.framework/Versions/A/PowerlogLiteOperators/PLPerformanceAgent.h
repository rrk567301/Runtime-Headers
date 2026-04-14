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
+ (id)entryEventIntervalDefinitionExperiment;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionRollout;
+ (id)entryEventPointDefinitionSystemMemory;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (int)countFD:(int)a0;
- (int)countMachPort:(int)a0;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logEventPointAPFSFragmentation;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (void)logEventPointDiskFragmentation;
- (void)logEventPointDiskUsage;
- (void)logEventPointJetsamPrority;
- (void)logEventPointSystemMemory;
- (void)logSystemMemoryToCA:(id)a0;

@end
