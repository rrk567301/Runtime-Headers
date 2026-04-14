@class NSString, NSObject, AMSMetricsDatabase;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource>

@property (readonly, nonatomic) AMSMetricsDatabase *database;
@property (copy, nonatomic) NSString *currentLockKey;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long eventCount;

- (void)cancel;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (BOOL)skipEvents:(id)a0 error:(id *)a1;
- (void)didFinishBatching;
- (id)initWithContainerIdentifier:(id)a0;
- (BOOL)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;
- (id)enqueueEvents:(id)a0;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;

@end
