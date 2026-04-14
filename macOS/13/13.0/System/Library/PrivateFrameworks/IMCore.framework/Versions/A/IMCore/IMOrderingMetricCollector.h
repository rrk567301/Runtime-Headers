@class NSObject;
@protocol OS_dispatch_queue;

@interface IMOrderingMetricCollector : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *orderingMetricQueue;
@property (nonatomic) unsigned long long numberOfMessagesSeen;
@property (nonatomic) unsigned long long numberOfMessagesPlacedOutOfOrder;
@property (nonatomic) unsigned long long numberOfMessagesPlacedCorrectly;
@property (nonatomic) unsigned long long numberOfHistoryQuerySeen;
@property (nonatomic) unsigned long long numberOfHistoryQueryOutOfOrder;
@property (nonatomic) unsigned long long numberOfHistoryQueryPlacedCorrectly;
@property (nonatomic) BOOL needToSubmitMetric;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_submitMetric;
- (void)metricIncomingMessage:(id)a0 items:(id)a1;
- (BOOL)_metricIncomingMessage:(id)a0 items:(id)a1 withContext:(long long)a2;
- (void)_metricHistoryQueryOrder:(id)a0;
- (void)metricHistoryQueryOrder:(id)a0;
- (void)_submitMetricIfNeeded;
- (void)_persistMetric;

@end
