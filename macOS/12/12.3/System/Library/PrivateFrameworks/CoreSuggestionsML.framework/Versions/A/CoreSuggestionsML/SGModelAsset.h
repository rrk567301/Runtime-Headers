@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)asset;
+ (id)mappings;
+ (id)rules;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)dpRecorderRules;
+ (id)signatureRules;
+ (id)nameDetectorRules;
+ (id)quickResponses;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (void)_invokeOnUpdateBlock;
+ (id)metricsConfig;

@end
