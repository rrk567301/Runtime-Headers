@interface SGModelAsset : NSObject

+ (id)asset;
+ (id)metricsConfig;
+ (id)mappings;
+ (void)_reset;
+ (id)quickResponses;
+ (void)_invokeOnUpdateBlock;
+ (id)vocabWithTrieFilename:(id)a0;
+ (id)dpRecorderRules;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)nameDetectorRules;
+ (id)quickResponsesVocab;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)rules;
+ (id)signatureRules;

@end
