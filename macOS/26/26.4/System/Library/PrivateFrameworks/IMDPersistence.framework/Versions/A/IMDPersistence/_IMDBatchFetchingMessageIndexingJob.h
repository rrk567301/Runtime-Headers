@class IMDThreadSafeMessageDictionaryMapper, _IMDAggregateMessageIndexingJob;

@interface _IMDBatchFetchingMessageIndexingJob : NSObject

@property (nonatomic) BOOL processedAnything;
@property (readonly, nonatomic) _IMDAggregateMessageIndexingJob *job;
@property (readonly, nonatomic) IMDThreadSafeMessageDictionaryMapper *mapper;
@property (nonatomic) BOOL runsOneBatch;

- (void).cxx_destruct;
- (BOOL)runWithCompletion:(id /* block */)a0;
- (id)initWithAggregateIndexingJob:(id)a0 batchFetcher:(id)a1;

@end
