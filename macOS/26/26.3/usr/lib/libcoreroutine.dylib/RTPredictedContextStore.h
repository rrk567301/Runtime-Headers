@class NSString;

@interface RTPredictedContextStore : RTStore <RTEnumerableStore, RTPurgable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)periodicPurgePolicy;

- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)storePredictedContexts:(id)a0 handler:(id /* block */)a1;
- (void)_fetchPredictedContextAndRequestDateWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchPredictedContextRequestsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchPredictedContextsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgePredictedContextRequestsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_purgePredictedContextsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storePredictedContextRequest:(id)a0 handler:(id /* block */)a1;
- (void)_storePredictedContexts:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedContextAndRequestDateWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedContextRequestsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedContextsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)purgePredictedContextRequestsPredating:(id)a0 handler:(id /* block */)a1;
- (void)purgePredictedContextsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storePredictedContextRequest:(id)a0 handler:(id /* block */)a1;

@end
