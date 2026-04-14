@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (int)idNumberFromIDDiff:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;
+ (id)maskedNameForChannelID:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitions;
+ (id)columnNameForChannelID:(unsigned long long)a0;
+ (BOOL)shouldLogSoCStatsPMGRCountersID;

- (void)initTaskOperatorDependancies;
- (id)initWithAgent:(id)a0;
- (id)init;
- (void)logEventBackwardSoCStatsPMGRCounters;
- (void).cxx_destruct;

@end
