@class NSDictionary, NSDate;

@interface SKDMetricsFields : NSObject

@property (retain) NSDate *lastFetchDate;
@property (retain) NSDictionary *pipelineMetrics;

- (void).cxx_destruct;
- (id)initWithLastFetchDate:(id)a0 pipelineMetrics:(id)a1;

@end
