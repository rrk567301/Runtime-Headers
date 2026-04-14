@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject {
    NSDictionary *_consumerSubTypeAssetMappings;
}

+ (id)assetMappingWithCachedAssets;
+ (id)sharedInstanceWithMobileAssets;
+ (id)getFullCachePathWithBaseCachePath:(id)a0 cacheFileBaseName:(id)a1 subScoreName:(id)a2;

- (id)getFullCachePathWithBaseCachePath:(id)a0 consumerSubType:(unsigned char)a1;
- (id)initWithUseMobileAssets:(BOOL)a0;
- (void).cxx_destruct;
- (id)getAtxToolDescription;
- (id)init;
- (id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)a0;
- (id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)a0;

@end
