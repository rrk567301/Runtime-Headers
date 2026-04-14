@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)rules;
+ (id)asset;
+ (id)mappings;
+ (id)signatureRules;
+ (id)nameDetectorRules;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (void)_invokeOnUpdateBlock;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)quickResponses;
+ (id)quickResponsesVocab;
+ (id)metricsConfig;
+ (id)dpRecorderRules;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)vocabWithTrieFilename:(id)a0;

@end
