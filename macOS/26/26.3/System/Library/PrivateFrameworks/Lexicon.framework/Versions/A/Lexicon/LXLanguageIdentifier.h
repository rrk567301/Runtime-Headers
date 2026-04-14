@class NSArray;

@interface LXLanguageIdentifier : NSObject {
    struct unique_ptr<lexicon::LanguageIdentifierImpl, std::default_delete<lexicon::LanguageIdentifierImpl>> { struct { struct LanguageIdentifierImpl *__ptr_; } ; } _impl;
}

@property (readonly, copy, nonatomic) NSArray *availableLocales;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_detectLanguagesInString:(id)a0 constraints:(id)a1 error:(id *)a2;
- (id)detectLanguagesInString:(id)a0 constraints:(id)a1 error:(id *)a2;
- (id)detectLanguagesInString:(id)a0 error:(id *)a1;

@end
