@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)rules;
+ (id)asset;
+ (id)mappings;
+ (id)nameDetectorRules;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)signatureRules;
+ (id)dpRecorderRules;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (void)_invokeOnUpdateBlock;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)metricsConfig;
+ (id)quickResponses;
+ (id)quickResponsesVocab;
+ (id)vocabWithTrieFilename:(id)a0;

@end
