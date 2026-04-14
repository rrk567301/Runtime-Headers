@class NSArray;

@interface LXLexiconChecker : NSObject {
    struct unique_ptr<lexicon::LexiconCheckerImpl, std::default_delete<lexicon::LexiconCheckerImpl>> { struct LexiconCheckerImpl *__ptr_; } _impl;
}

@property (readonly, copy, nonatomic) NSArray *availableLocales;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)_checkValidityOfString:(id)a0 locales:(id)a1 allowlist:(id)a2 error:(id *)a3;
- (BOOL)checkValidityOfString:(id)a0 locales:(id)a1 allowlist:(id)a2 error:(id *)a3;

@end
