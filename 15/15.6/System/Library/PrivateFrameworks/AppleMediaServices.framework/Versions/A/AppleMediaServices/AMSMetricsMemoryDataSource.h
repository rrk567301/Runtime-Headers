@class NSMutableDictionary;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>

@property (readonly, nonatomic) NSMutableDictionary *batches;

+ (id)batchesFromEvents:(id)a0;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithEvents:(id)a0;
- (void)didFinishBatching;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (char)removeEvents:(id)a0 error:(id *)a1;
- (char)skipEvents:(id)a0 error:(id *)a1;
- (char)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;

@end
