@class NSObject, MADService;
@protocol OS_dispatch_queue;

@interface SKDTextEmbedder : SKDModel {
    void *_tagger;
    MADService *_service;
    NSObject<OS_dispatch_queue> *_tokenizerQueue;
    NSObject<OS_dispatch_queue> *_embedderQueue;
    _Atomic BOOL _warmed;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (void)_enumerateChunksInTokenizedInput:(id)a0 useTokenizer:(BOOL)a1 maxChunkSize:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)_processTokenizationResults:(id)a0 ranges:(id)a1 maxChunkSize:(unsigned long long)a2 maxChunkCount:(unsigned long long)a3 usingBlock:(id /* block */)a4;
- (void)embedInputs:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)enumerateResultsWithInputs:(id)a0 options:(id)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithContext:(id)a0 logger:(id)a1;
- (void)tokenizeInputs:(id)a0 useTokenizer:(BOOL)a1 maxChunkSize:(unsigned long long)a2 usingTokenizedBlock:(id /* block */)a3 usingResultBlock:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)unloadWithCompletionHandler:(id /* block */)a0;

@end
