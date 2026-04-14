@class NSNumber, NSCache;

@interface BRCUTITypeCache : NSObject {
    NSNumber *_lastUTIDatabaseGeneration;
    NSCache *_utiCache;
}

+ (id)defaultCache;

- (id)_init;
- (void).cxx_destruct;
- (id)UTIForExtension:(id)a0;
- (id)_getLaunchServicesDatabaseGeneration;
- (void)_invalidateCahceIfNeeded;
- (id)_utiForExtension:(id)a0;

@end
