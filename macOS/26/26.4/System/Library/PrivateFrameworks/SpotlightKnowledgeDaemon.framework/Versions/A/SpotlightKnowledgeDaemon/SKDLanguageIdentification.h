@interface SKDLanguageIdentification : SKDModel {
    void *_lidentifier;
}

- (void)dealloc;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (id)_languageForInput:(id)a0;
- (void)enumerateChunksInText:(id)a0 maxSentenceCount:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateResultsWithInputs:(id)a0 options:(id)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)unloadWithCompletionHandler:(id /* block */)a0;

@end
