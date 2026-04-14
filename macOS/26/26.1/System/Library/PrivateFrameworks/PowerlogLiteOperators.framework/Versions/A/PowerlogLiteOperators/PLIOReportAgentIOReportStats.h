@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;
+ (id)columnNameForChannelID:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitions;
+ (int)idNumberFromIDDiff:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;
+ (BOOL)shouldLogSoCStatsPMGRCountersID;
+ (id)maskedNameForChannelID:(unsigned long long)a0;

- (void)logEventBackwardSoCStatsPMGRCounters;
- (void)initTaskOperatorDependancies;
- (id)initWithAgent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
