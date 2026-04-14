@interface SGModelAsset : NSObject

+ (id)dictionaryWithPlistFilename:(id)a0;
+ (void)_reset;
+ (id)vocabWithTrieFilename:(id)a0;
+ (id)asset;
+ (id)mappings;
+ (id)metricsConfig;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)signatureRules;
+ (id)rules;
+ (id)nameDetectorRules;
+ (id)dpRecorderRules;
+ (id)quickResponses;
+ (id)quickResponsesVocab;
+ (void)_invokeOnUpdateBlock;

@end
