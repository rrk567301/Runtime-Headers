@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (id)entryEventBackwardDefinitions;
+ (BOOL)shouldLogSoCStatsPMGRCountersID;
+ (int)idNumberFromIDDiff:(unsigned long long)a0;
+ (id)maskedNameForChannelID:(unsigned long long)a0;
+ (id)columnNameForChannelID:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;

- (id)init;
- (void).cxx_destruct;
- (void)initTaskOperatorDependancies;
- (id)initWithAgent:(id)a0;
- (void)logEventBackwardSoCStatsPMGRCounters;

@end
