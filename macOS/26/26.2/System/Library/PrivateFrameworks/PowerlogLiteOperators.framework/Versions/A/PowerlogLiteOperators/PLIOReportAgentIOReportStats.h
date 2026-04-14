@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (id)entryEventBackwardDefinitions;
+ (id)columnNameForChannelID:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;
+ (id)maskedNameForChannelID:(unsigned long long)a0;
+ (BOOL)shouldLogSoCStatsPMGRCountersID;
+ (int)idNumberFromIDDiff:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;

- (void)initTaskOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventBackwardSoCStatsPMGRCounters;
- (id)init;
- (id)initWithAgent:(id)a0;

@end
