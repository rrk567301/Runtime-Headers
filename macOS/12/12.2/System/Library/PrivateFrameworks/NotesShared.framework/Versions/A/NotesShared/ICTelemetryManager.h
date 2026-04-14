@interface ICTelemetryManager : NSObject

+ (id)sharedManager;
+ (void)postFullSyncTelemetryWithReason:(id)a0;
+ (void)postFetchZoneChangesTelemetryWithReason:(id)a0;
+ (void)postFetchDatabaseChangesTelemetryWithReason:(id)a0;
+ (id)telemetryQueue;
+ (id)telemetryTuples;

- (void)postTelemetryEvent:(unsigned long long)a0 payload:(id)a1;

@end
