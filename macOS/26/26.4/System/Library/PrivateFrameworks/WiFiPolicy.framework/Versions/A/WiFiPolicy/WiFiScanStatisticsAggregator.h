@class NSObject, NSMutableArray, NSDate;
@protocol OS_dispatch_queue;

@interface WiFiScanStatisticsAggregator : NSObject

@property (retain, nonatomic) NSMutableArray *aggregator;
@property (retain, nonatomic) NSDate *lastSubmissionTime;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;

- (void).cxx_destruct;
- (id)init;
- (BOOL)canSubmitToCA:(id)a0;
- (BOOL)aggregateClientMetrics:(id)a0;

@end
