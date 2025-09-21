@class _DKEventQuery, NSMutableArray;
@protocol _DKKnowledgeQuerying;

@interface BPSKnowledgeStorePublisher : BPSPublisher

@property (nonatomic) long long remaining;
@property (retain, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) _DKEventQuery *query;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> store;

+ (id)new;

- (id)upstreamPublishers;
- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_updateCachedQueryResults;
- (id)initWithEventQuery:(id)a0 knowledgeStore:(id)a1;

@end
