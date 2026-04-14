@class NSString, NSObject, AMSMetricsDatabase;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource>

@property (readonly) AMSMetricsDatabase *database;
@property (retain) NSString *currentLockKey;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *containerIdentifier;
@property (readonly) long long eventCount;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithContainerIdentifier:(id)a0;
- (void)removeAllEvents;
- (void)didFinishBatching;
- (id)enqueueEvents:(id)a0;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (BOOL)skipEvents:(id)a0 error:(id *)a1;
- (BOOL)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;

@end
