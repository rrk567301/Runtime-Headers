@class _EARTokenizer;

@interface _EARTextNormalization : NSObject {
    _EARTokenizer *_tokenizer;
    struct unique_ptr<quasar::Munger, std::default_delete<quasar::Munger>> { struct { struct Munger *__ptr_; } ; } _munger;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (id)tokenize:(id)a0;
- (id)normalize:(id)a0;
- (id)initWithModelRoot:(id)a0;
- (id)initWithModelRoot:(id)a0 mungeRuleFile:(id)a1;
- (id)initWithModelRoot:(id)a0 mungeRules:(id)a1;
- (id)initWithMungeRules:(id)a0;
- (id)initWithNcsRoot:(id)a0;
- (id)initWithNcsRoot:(id)a0 mungeRuleFile:(id)a1;
- (id)initWithNcsRoot:(id)a0 mungeRules:(id)a1;
- (id)munge:(id)a0;

@end
