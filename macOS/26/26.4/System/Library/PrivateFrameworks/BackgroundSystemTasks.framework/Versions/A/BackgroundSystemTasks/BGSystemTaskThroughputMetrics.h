@class NSUUID, NSDate;

@interface BGSystemTaskThroughputMetrics : BGSystemTaskPerformanceMetadata

@property (readonly, nonatomic) NSUUID *reportingUUID;
@property (nonatomic) unsigned long long itemCount;
@property (retain, nonatomic) NSDate *startTimestamp;
@property (retain, nonatomic) NSDate *endTimestamp;

- (void).cxx_destruct;
- (void)addItemCount:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 qos:(id)a1 workloadCategory:(unsigned long long)a2 expectedMetricValue:(id)a3;

@end
