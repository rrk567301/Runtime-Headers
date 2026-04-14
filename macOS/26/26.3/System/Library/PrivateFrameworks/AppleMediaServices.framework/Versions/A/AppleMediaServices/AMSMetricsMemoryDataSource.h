@class NSMutableDictionary;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>

@property (readonly, nonatomic) NSMutableDictionary *batches;

+ (id)batchesFromEvents:(id)a0;

- (void)cancel;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (id)initWithEvents:(id)a0;
- (BOOL)skipEvents:(id)a0 error:(id *)a1;
- (void)didFinishBatching;
- (BOOL)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;

@end
