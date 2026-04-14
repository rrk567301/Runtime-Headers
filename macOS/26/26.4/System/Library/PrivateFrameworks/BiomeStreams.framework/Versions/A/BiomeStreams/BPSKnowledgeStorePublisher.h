@class _DKEventQuery, NSMutableArray;
@protocol _DKKnowledgeQuerying;

@interface BPSKnowledgeStorePublisher : BPSPublisher

@property (nonatomic) long long remaining;
@property (retain, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) _DKEventQuery *query;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> store;

+ (id)new;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (id)upstreamPublishers;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (id)_updateCachedQueryResults;
- (id)initWithEventQuery:(id)a0 knowledgeStore:(id)a1;

@end
