@class NSString;

@interface ATXUICacheManager : NSObject {
    NSString *_cacheBasePath;
}

- (id)cacheFilePathForConsumerSubType:(unsigned char)a0;
- (BOOL)updateCachedLayout:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)deleteCacheFileForConsumerSubType:(unsigned char)a0;
- (id)cacheFilePathForConsumerSubTypeString:(id)a0;
- (id)init;
- (id)serializeLayout:(id)a0;
- (id)dataFromFileHandle:(id)a0;
- (id)initWithCacheBasePath:(id)a0;
- (id)consumerSubTypeStringsWithNonEmptyCachedLayout;
- (void).cxx_destruct;
- (double)cacheAgeForConsumerSubTypeString:(id)a0;
- (id)cachedLayoutForConsumerSubType:(unsigned char)a0 expectedClass:(Class)a1;
- (BOOL)writeSerializedDataToCacheFile:(id)a0 path:(id)a1;

@end
