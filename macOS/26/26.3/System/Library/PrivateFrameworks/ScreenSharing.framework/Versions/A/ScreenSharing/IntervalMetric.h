@class NSMutableArray;

@interface IntervalMetric : NSObject

@property unsigned long long intervalStart;
@property (retain) NSMutableArray *data;
@property unsigned long long min;
@property unsigned long long max;
@property unsigned long long median;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closeInterval;
- (void)computeMetrics;
- (id)logMetric;
- (void)openInterval;

@end
