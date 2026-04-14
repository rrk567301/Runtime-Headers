@interface SGModelAsset : NSObject

+ (void)_invokeOnUpdateBlock;
+ (id)rules;
+ (id)metricsConfig;
+ (id)nameDetectorRules;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)quickResponses;
+ (id)vocabWithTrieFilename:(id)a0;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)quickResponsesVocab;
+ (id)dpRecorderRules;
+ (id)signatureRules;
+ (id)mappings;
+ (id)asset;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (void)_reset;

@end
