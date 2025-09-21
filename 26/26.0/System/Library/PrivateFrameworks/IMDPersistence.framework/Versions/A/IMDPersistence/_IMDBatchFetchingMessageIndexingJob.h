@class IMDThreadSafeMessageDictionaryMapper, _IMDAggregateMessageIndexingJob;

@interface _IMDBatchFetchingMessageIndexingJob : NSObject

@property (nonatomic) BOOL processedAnything;
@property (readonly, nonatomic) _IMDAggregateMessageIndexingJob *job;
@property (readonly, nonatomic) IMDThreadSafeMessageDictionaryMapper *mapper;
@property (nonatomic) BOOL runsOneBatch;

- (BOOL)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithAggregateIndexingJob:(id)a0 batchFetcher:(id)a1;

@end
