@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)asset;
+ (id)mappings;
+ (id)rules;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)dpRecorderRules;
+ (id)nameDetectorRules;
+ (id)signatureRules;
+ (void)_invokeOnUpdateBlock;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)quickResponses;
+ (id)metricsConfig;
+ (id)dictionaryWithPlistFilename:(id)a0;

@end
