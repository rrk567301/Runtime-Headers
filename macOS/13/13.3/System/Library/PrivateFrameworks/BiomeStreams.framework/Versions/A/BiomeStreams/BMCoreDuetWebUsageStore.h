@class _CDClientContext;
@protocol _DKKnowledgeSaving;

@interface BMCoreDuetWebUsageStore : NSObject <BMCoreDuetWebUsageStore>

@property (readonly, nonatomic) id<_DKKnowledgeSaving> knowledgeStore;
@property (readonly, nonatomic) _CDClientContext *contextStore;

- (id)init;
- (void).cxx_destruct;
- (void)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (void)removeObjects:(id)a0 fromArrayAtKeyPath:(id)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1;
- (BOOL)addContextValue:(id)a0 toArrayAtKeyPath:(id)a1;
- (BOOL)saveKnowledgeEvent:(id)a0 error:(id *)a1;

@end
