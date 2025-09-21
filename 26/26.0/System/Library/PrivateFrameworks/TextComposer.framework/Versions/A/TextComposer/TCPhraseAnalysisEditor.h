@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface TCPhraseAnalysisEditor : NSObject <TCPostEditing> {
    NSDictionary *_options;
    void *_parser;
    NSMutableDictionary *_cachedGrammarDetailsDictionary;
    NSMutableArray *_cachedSentenceArray;
}

- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)checkSentence:(id)a0 locale:(id)a1 offset:(unsigned long long)a2 options:(id)a3 mutableResults:(id)a4;
- (void)checkString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 options:(id)a4 mutableResults:(id)a5;
- (id)computedGrammarDetailsForSentence:(id)a0 locale:(id)a1 options:(id)a2;
- (id)grammarDetailsForSentence:(id)a0 locale:(id)a1 options:(id)a2;
- (void)loadModelsInBackground:(BOOL)a0;
- (void)resetModels;

@end
