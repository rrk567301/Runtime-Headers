@class _DKKnowledgeStore, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface RTDuetKnowledgeStore : NSObject

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStoreQuery;
@property (retain, nonatomic) _DKKnowledgeStore *knowledgeStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)reset;
- (void)clearEventsFromStream:(id)a0 completion:(id /* block */)a1;
- (void)executeQuery:(id)a0 completion:(id /* block */)a1;
- (void)saveEvents:(id)a0 completion:(id /* block */)a1;

@end
