@class SLScreenTelemetryConnection, NSMutableString, SLDataTimelineConfig;

@interface PLWindowServerAgent : PLAgent

@property (retain) NSMutableString *report;
@property (retain) SLDataTimelineConfig *config;
@property (retain) SLScreenTelemetryConnection *frameStatsConn;

+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionTimelineInfo;
+ (id)entryEventBackwardDefinitionFrameStats;

- (id)init;
- (void).cxx_destruct;
- (void)establishConnection;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)reportWithSessionID:(id)a0 timestamp:(double)a1 sessionSequenceIndex:(unsigned long long)a2;
- (void)addChangedPID:(id)a0 windowsOrderedOut:(unsigned long long)a1 windowsOffScreen:(unsigned long long)a2 windowsOccluded:(unsigned long long)a3 windowsVisible:(unsigned long long)a4;
- (void)logEventForwardTimelineInfo:(id)a0 withPID:(int)a1 withnewProcess:(id)a2 withSnapshotTimestamp:(id)a3;
- (void)installTimelineConnection;
- (void)setupFrameStatsConnection;
- (void)logFrameStatsFromData:(id)a0;
- (BOOL)getBuiltinDisplayID:(unsigned int *)a0 screen:(id *)a1;
- (void)getScreenPhysicalWidthInInches:(unsigned int)a0 width:(double *)a1 height:(double *)a2;

@end
