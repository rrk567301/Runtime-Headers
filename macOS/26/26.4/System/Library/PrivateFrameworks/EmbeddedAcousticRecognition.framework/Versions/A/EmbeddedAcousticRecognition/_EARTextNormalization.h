@class _EARTokenizer;

@interface _EARTextNormalization : NSObject {
    _EARTokenizer *_tokenizer;
    struct unique_ptr<quasar::Munger, std::default_delete<quasar::Munger>> { struct { struct Munger *__ptr_; } ; } _munger;
}

- (id)tokenize:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)normalize:(id)a0;
- (id)initWithModelRoot:(id)a0;
- (id)initWithModelRoot:(id)a0 mungeRuleFile:(id)a1;
- (id)initWithModelRoot:(id)a0 mungeRuleFile:(id)a1 applySanitization:(BOOL)a2 options:(id)a3;
- (id)initWithModelRoot:(id)a0 mungeRules:(id)a1;
- (id)initWithMungeRules:(id)a0;
- (id)initWithNcsRoot:(id)a0;
- (id)initWithNcsRoot:(id)a0 mungeRuleFile:(id)a1;
- (id)initWithNcsRoot:(id)a0 mungeRules:(id)a1;
- (id)munge:(id)a0;

@end
