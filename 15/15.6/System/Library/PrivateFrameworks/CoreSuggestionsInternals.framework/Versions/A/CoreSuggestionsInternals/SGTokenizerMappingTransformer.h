@class NSString, _PASLazyPurgeableResult;

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol> {
    _PASLazyPurgeableResult *_tagger;
    char _nameTagging;
    char _trustCoreNLP;
    NSString *_punctuationMapping;
    NSString *_personalNameMapping;
    NSString *_locale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_purgeableNLTaggerWithNameTagging:(char)a0;
+ (id)_purgeableNSLinguisticTaggerWithTagSchemes:(id)a0;
+ (id)forLocale:(id)a0;
+ (id)forLocale:(id)a0 tagNames:(char)a1 personalNameMapping:(id)a2 punctuationMapping:(id)a3;
+ (id)forLocale:(id)a0 tagNames:(char)a1 trustCoreNLP:(char)a2 personalNameMapping:(id)a3 punctuationMapping:(id)a4;
+ (id)forLocale:(id)a0 withPersonalNameMapping:(id)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void *)_createOrReuseNLPTagger;
- (id)initForLocale:(id)a0 tagNames:(char)a1 trustCoreNLP:(char)a2 personalNameMapping:(id)a3 punctuationMapping:(id)a4;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (char)isEqualToTokenizerMappingTransformer:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (void)transformWithCoreNLP:(id)a0 block:(id /* block */)a1;
- (void)transformWithNLLinguisticTagger:(id)a0 block:(id /* block */)a1;

@end
