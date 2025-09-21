@class NSString, NSDictionary, NSURL, IKCacheManager, IKCacheDatabaseEntry, IKImageWrapper;

@interface IKThumbnailBuilder : NSObject {
    IKCacheManager *_cache;
    NSString *_uid;
    int _modelSize;
    unsigned long long _version;
    id _cell;
    IKImageWrapper *_image;
    IKImageWrapper *_thumbnail;
    char _modelIsOriginalImage;
    char _thumbnailAlreadyExistInCache;
    char _supportsConcurrent;
    char _completed;
    char _requiresQuicklook;
    NSDictionary *_quicklookOptions;
    NSURL *_quicklookURL;
    double _thumbnailSize;
    int _quality;
    IKCacheDatabaseEntry *_cacheEntry;
}

+ (void)splitBuilders:(id)a0 intoSequentialList:(id)a1 andConcurrentList:(id)a2;
+ (id)thumbnailBuilderQueueWithThumbnails:(id)a0 withDelegate:(id)a1 didEndSelector:(SEL)a2;

- (void)dealloc;
- (id)uid;
- (unsigned long long)version;
- (id)image;
- (void)clear;
- (id)cell;
- (char)completed;
- (void)setCell:(id)a0;
- (void)setThumbnail:(id)a0;
- (id)thumbnail;
- (id)cache;
- (double)thumbnailSize;
- (id)cacheEntry;
- (int)quality;
- (id)quicklookURL;
- (void)computeThumbnail;
- (int)modelSize;
- (char)needComputeThumbnail;
- (void)prepareComputeWithCache:(id)a0 uid:(id)a1 version:(unsigned long long)a2 size:(double)a3 quality:(int)a4;
- (id)quicklookOptions;
- (char)requiresQuicklook;
- (char)supportsConcurrent;
- (void)tagImage;
- (void)unlockCache;

@end
