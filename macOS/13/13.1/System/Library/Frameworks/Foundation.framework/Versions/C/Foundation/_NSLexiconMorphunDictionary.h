@class NSString, NSLocale;

@interface _NSLexiconMorphunDictionary : NSObject <_NSLexiconAttributeLookup> {
    NSLocale *_appropriateLocale;
    struct MANAConfigurableAnalyzer { } *_analyzer;
    struct MTokenizer { } *_tokenizer;
    const struct MDDictionaryMetaData { } *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)allPossibleWordAttributesForWord:(id)a0;
- (id)initWithLanguage:(id)a0;

@end
