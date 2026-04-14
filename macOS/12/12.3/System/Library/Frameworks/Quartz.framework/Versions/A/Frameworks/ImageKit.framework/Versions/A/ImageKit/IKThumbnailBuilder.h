@class NSString, NSDictionary, NSURL, IKCacheManager, IKCacheDatabaseEntry, IKImageWrapper;

@interface IKThumbnailBuilder : NSObject {
    IKCacheManager *_cache;
    NSString *_uid;
    int _modelSize;
    unsigned long long _version;
    id _cell;
    IKImageWrapper *_image;
    IKImageWrapper *_thumbnail;
    BOOL _modelIsOriginalImage;
    BOOL _thumbnailAlreadyExistInCache;
    BOOL _supportsConcurrent;
    BOOL _completed;
    BOOL _requiresQuicklook;
    NSDictionary *_quicklookOptions;
    NSURL *_quicklookURL;
    double _thumbnailSize;
    int _quality;
    IKCacheDatabaseEntry *_cacheEntry;
}

+ (void)splitBuilders:(id)a0 intoSequentialList:(id)a1 andConcurrentList:(id)a2;
+ (id)thumbnailBuilderQueueWithThumbnails:(id)a0 withDelegate:(id)a1 didEndSelector:(SEL)a2;

- (void)dealloc;
- (unsigned long long)version;
- (id)uid;
- (id)image;
- (void)clear;
- (id)cell;
- (void)setCell:(id)a0;
- (void)setThumbnail:(id)a0;
- (id)thumbnail;
- (id)cache;
- (BOOL)completed;
- (double)thumbnailSize;
- (id)cacheEntry;
- (int)quality;
- (id)quicklookURL;
- (BOOL)needComputeThumbnail;
- (void)computeThumbnail;
- (void)prepareComputeWithCache:(id)a0 uid:(id)a1 version:(unsigned long long)a2 size:(double)a3 quality:(int)a4;
- (BOOL)requiresQuicklook;
- (BOOL)supportsConcurrent;
- (void)unlockCache;
- (void)tagImage;
- (int)modelSize;
- (id)quicklookOptions;

@end
