@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)nameDetectorRules;
+ (id)dpRecorderRules;
+ (id)mappings;
+ (id)signatureRules;
+ (id)quickResponses;
+ (id)asset;
+ (id)rules;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (void)_invokeOnUpdateBlock;
+ (id)metricsConfig;
+ (id)vocabWithTrieFilename:(id)a0;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)quickResponsesVocab;

@end
