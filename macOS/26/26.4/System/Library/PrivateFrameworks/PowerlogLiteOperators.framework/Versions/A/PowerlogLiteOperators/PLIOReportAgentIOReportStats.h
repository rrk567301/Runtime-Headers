@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (id)entryEventBackwardDefinitions;
+ (BOOL)shouldLogSoCStatsPMGRCountersID;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;
+ (id)columnNameForChannelID:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;
+ (id)maskedNameForChannelID:(unsigned long long)a0;
+ (int)idNumberFromIDDiff:(unsigned long long)a0;

- (id)initWithAgent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logEventBackwardSoCStatsPMGRCounters;
- (void)initTaskOperatorDependancies;

@end
