@class NSMutableArray;

@interface IntervalMetric : NSObject

@property unsigned long long intervalStart;
@property (retain) NSMutableArray *data;
@property unsigned long long min;
@property unsigned long long max;
@property unsigned long long median;

- (void)closeInterval;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)computeMetrics;
- (id)logMetric;
- (void)openInterval;

@end
