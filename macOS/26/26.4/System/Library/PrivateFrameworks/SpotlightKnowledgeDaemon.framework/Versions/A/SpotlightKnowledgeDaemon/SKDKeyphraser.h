@class NSMutableDictionary;

@interface SKDKeyphraser : SKDModel {
    NSMutableDictionary *_models;
    double _lastAcccess;
}

- (void)update;
- (void).cxx_destruct;
- (id)_enumerateKeyphrasesInInput:(id)a0 maxTextLength:(long long)a1 usingTokenBlock:(id /* block */)a2 usingSentenceBlock:(id /* block */)a3 usingBlock:(id /* block */)a4;
- (void)_purgeModelsAtMaxCount:(unsigned long long)a0 maxDelta:(long long)a1 lastFlushTime:(double)a2 preferredLanguages:(id)a3;
- (void)enumerateResultsWithInputs:(id)a0 options:(id)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithContext:(id)a0 logger:(id)a1;
- (void)unloadWithCompletionHandler:(id /* block */)a0;

@end
