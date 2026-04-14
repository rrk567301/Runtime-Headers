@class NSMutableDictionary;

@interface PKHandwritingTranscriptionCache : NSObject <NSCopying> {
    NSMutableDictionary *_cache;
}

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)cachedTranscriptionForStrokeGroup:(id)a0;
- (id)allCachedGroups;
- (void)addCachedTranscription:(id)a0 forStrokeGroup:(id)a1;
- (void)clearCacheForStrokeGroup:(id)a0;

@end
