@class NSNumber;

@interface BGSystemTaskProgressMetrics : BGSystemTaskPerformanceMetadata

@property (retain, nonatomic) NSNumber *itemsCompleted;
@property (retain, nonatomic) NSNumber *totalItemCount;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 qos:(id)a1 workloadCategory:(unsigned long long)a2 expectedMetricValue:(id)a3 itemsCompleted:(id)a4 totalItemCount:(id)a5;
- (id)initWithIdentifier:(id)a0 taskName:(id)a1 qos:(id)a2 workloadCategory:(unsigned long long)a3 expectedMetricValue:(id)a4 itemsCompleted:(id)a5 totalItemCount:(id)a6;

@end
