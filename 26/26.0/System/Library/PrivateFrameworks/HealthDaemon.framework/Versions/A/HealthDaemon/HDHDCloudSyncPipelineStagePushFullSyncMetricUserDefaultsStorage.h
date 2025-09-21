@class NSDictionary, NSString;

@interface HDHDCloudSyncPipelineStagePushFullSyncMetricUserDefaultsStorage : NSObject <HDHDCloudSyncPipelineStagePushFullSyncMetricStorage>

@property (copy, nonatomic) NSDictionary *ongoingSyncMetrics;
@property (nonatomic) double startTime;
@property (nonatomic) double currentRunStartTime;
@property (nonatomic) double activeDuration;
@property (nonatomic) long long numberOfRuns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (id)init;

@end
