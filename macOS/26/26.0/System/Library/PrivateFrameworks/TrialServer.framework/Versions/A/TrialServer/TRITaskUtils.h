@interface TRITaskUtils : NSObject

+ (id)_experimentStateForAnalyticsFromInternalState:(unsigned char)a0;
+ (BOOL)updateExperimentHistoryDatabaseWithAllocationStatus:(unsigned char)a0 forExperiment:(id)a1 treatment:(id)a2 deployment:(int)a3 experimentRecord:(id)a4 isBecomingObsolete:(BOOL)a5 categoricalMetric:(id)a6 context:(id)a7;
+ (id)_rolloutStateForAnalyticsFromInternalState:(unsigned char)a0;
+ (void)updateRolloutHistoryDatabaseWithAllocationStatus:(unsigned char)a0 forRollout:(id)a1 ramp:(id)a2 deployment:(int)a3 fps:(id)a4 namespaces:(id)a5 telemetryMetric:(id)a6 rolloutRecord:(id)a7 isBecomingObsolete:(BOOL)a8 context:(id)a9;
+ (BOOL)updateExperimentHistoryDatabaseWithAllocationStatus:(unsigned char)a0 forExperiment:(id)a1 treatment:(id)a2 deployment:(int)a3 experimentRecord:(id)a4 isBecomingObsolete:(BOOL)a5 context:(id)a6;
+ (void)addAttribution:(id)a0 toTaskTags:(id)a1;

@end
