@class SEMSandbox, NSString;

@interface CKVocabularySandboxSearcher : CKVocabularySearcher {
    SEMSandbox *_sandbox;
    NSString *_userId;
}

- (void).cxx_destruct;
- (id)initWithSandbox:(id)a0 userId:(id)a1 prewarm:(char)a2;
- (id)_searcher;

@end
