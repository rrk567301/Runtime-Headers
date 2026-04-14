@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)rules;
+ (void)_invokeOnUpdateBlock;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)vocabWithTrieFilename:(id)a0;
+ (id)nameDetectorRules;
+ (id)mappings;
+ (id)signatureRules;
+ (id)quickResponses;
+ (id)asset;
+ (id)metricsConfig;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)dpRecorderRules;
+ (id)quickResponsesVocab;

@end
